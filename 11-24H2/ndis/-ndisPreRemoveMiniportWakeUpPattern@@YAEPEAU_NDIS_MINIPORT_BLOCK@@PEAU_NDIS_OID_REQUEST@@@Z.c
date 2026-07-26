/*
 * XREFs of ?ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B43DC
 * Callers:
 *     ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C9F0 (-ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B38B0 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     memcmp @ 0x1400E7A20 (memcmp.c)
 */

bool __fastcall ndisPreRemoveMiniportWakeUpPattern(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  char v2; // r15
  struct _NDIS_OID_REQUEST *v3; // rbp
  bool v4; // si
  __int64 i; // rcx
  _SINGLE_LIST_ENTRY *Next; // rbx
  _DWORD *InformationBuffer; // rdi
  __int64 v9; // r12
  PVOID v10; // rcx
  __int64 Next_high; // r13
  int v12; // eax
  __int64 Next_low; // r8
  _SINGLE_LIST_ENTRY *j; // rax
  char v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+80h] [rbp+8h]
  int v18; // [rsp+88h] [rbp+10h]
  _SINGLE_LIST_ENTRY *v19; // [rsp+90h] [rbp+18h]

  v2 = 0;
  v3 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      33,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      v16);
  }
  for ( i = (__int64)v3->NdisReserved; _bittest((const signed __int32 *)(i + 16), 0xEu); i = *(_QWORD *)(i + 24) + 72LL )
    ;
  Next = a1->PatternList.Next;
  v19 = *(_SINGLE_LIST_ENTRY **)(i + 32);
  while ( 1 )
  {
    if ( !Next )
      goto LABEL_22;
    InformationBuffer = v3->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( InformationBuffer[4] == LODWORD(Next[8].Next) && InformationBuffer[2] == LODWORD(Next[7].Next) )
      break;
LABEL_13:
    Next = Next->Next;
  }
  v9 = (unsigned int)InformationBuffer[3];
  v10 = v3->DATA.QUERY_INFORMATION.InformationBuffer;
  Next_high = HIDWORD(Next[7].Next);
  v17 = InformationBuffer[1];
  v12 = HIDWORD(Next[6].Next);
  InformationBuffer[3] = 0;
  HIDWORD(Next[7].Next) = 0;
  InformationBuffer[1] = 0;
  Next_low = LODWORD(Next[7].Next);
  HIDWORD(Next[6].Next) = 0;
  v18 = v12;
  if ( memcmp(v10, &Next[6], Next_low + 24)
    || memcmp((char *)InformationBuffer + v9, (char *)&Next[6] + Next_high, LODWORD(Next[8].Next)) )
  {
    InformationBuffer[3] = v9;
    HIDWORD(Next[7].Next) = Next_high;
    goto LABEL_13;
  }
  if ( v19 == Next[3].Next )
  {
    v2 = 1;
    v4 = Next[1].Next != 0LL;
  }
  else
  {
    for ( j = Next[1].Next; j; j = j->Next )
    {
      if ( j[2].Next == v19 )
      {
        v2 = 1;
        v4 = 1;
        break;
      }
    }
  }
  InformationBuffer[3] = v9;
  HIDWORD(Next[7].Next) = Next_high;
  InformationBuffer[1] = v17;
  HIDWORD(Next[6].Next) = v18;
  if ( !v2 )
LABEL_22:
    v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      34,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)v3);
  }
  return v4;
}
