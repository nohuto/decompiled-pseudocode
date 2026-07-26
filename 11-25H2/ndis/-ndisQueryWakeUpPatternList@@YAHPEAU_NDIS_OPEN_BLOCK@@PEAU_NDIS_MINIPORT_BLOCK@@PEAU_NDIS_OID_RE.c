/*
 * XREFs of ?ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BC5A4
 * Callers:
 *     ?ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB440 (-ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreWakeUpPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB800 (-ndisOidPreWakeUpPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x14004F5B0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisQueryWakeUpPatternList(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  UINT v3; // ebx
  UINT v5; // r13d
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _SINGLE_LIST_ENTRY *Next; // rsi
  _SINGLE_LIST_ENTRY *i; // r9
  __int64 Next_low; // rcx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  char *InformationBuffer; // r12
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rbx
  KIRQL v20; // dl
  int v21; // edx
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  v5 = 0;
  NewIrql = 0;
  MiniportHandle = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Cu,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a2,
      (char)a1,
      a3);
  if ( !MiniportHandle )
    MiniportHandle = a1->MiniportHandle;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  if ( a1 )
    Next = a1->PatternList.Next;
  else
    Next = MiniportHandle->PatternList.Next;
  for ( i = Next; i; v3 += v13 )
  {
    Next_low = LODWORD(i[7].Next);
    v11 = HIDWORD(i[7].Next) + LODWORD(i[8].Next);
    i = i->Next;
    v12 = Next_low + 24;
    v13 = Next_low + 24;
    if ( v12 <= v11 )
      v13 = v11;
  }
  v14 = 0;
  if ( a3->DATA.QUERY_INFORMATION.InformationBufferLength >= v3 )
  {
    InformationBuffer = (char *)a3->DATA.QUERY_INFORMATION.InformationBuffer;
    while ( Next )
    {
      v16 = LODWORD(Next[7].Next);
      v17 = v16 + 24;
      v18 = v16 + 24;
      if ( v17 <= (unsigned int)(HIDWORD(Next[7].Next) + LODWORD(Next[8].Next)) )
        v18 = HIDWORD(Next[7].Next) + LODWORD(Next[8].Next);
      v19 = v18;
      memmove(InformationBuffer, &Next[6], v18);
      Next = Next->Next;
      InformationBuffer += v19;
      v5 += v19;
    }
  }
  else
  {
    a3->DATA.QUERY_INFORMATION.BytesNeeded = v3;
    v14 = -1073676268;
  }
  v20 = NewIrql;
  a3->DATA.QUERY_INFORMATION.BytesWritten = v5;
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLock(&MiniportHandle->Lock, v20);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v21,
      0xBu,
      0x2Du,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a3,
      v14);
  return v14;
}
