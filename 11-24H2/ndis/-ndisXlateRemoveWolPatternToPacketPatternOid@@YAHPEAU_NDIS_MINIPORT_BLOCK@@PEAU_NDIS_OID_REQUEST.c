/*
 * XREFs of ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B683C
 * Callers:
 *     ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C9F0 (-ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisXlateRemoveWolPatternToPacketPatternOid(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  int v8; // edx
  _QWORD *v9; // rdi
  _SINGLE_LIST_ENTRY *OidSourceHandle; // r8
  _SINGLE_LIST_ENTRY *Next; // rax
  char v12; // cl
  _SINGLE_LIST_ENTRY *v14; // rax
  _SINGLE_LIST_ENTRY *v15; // rsi
  UINT v16; // r12d
  unsigned int *v17; // rax
  unsigned int *v18; // r14
  size_t v19; // r8
  __int64 v20; // rdx
  __int64 Next_high; // rdx
  unsigned int *v22; // rax
  size_t Next_low; // r8

  v3 = 0;
  *a3 = 0;
  Pool2 = ExAllocatePool2(64LL, 32LL, 2021082190LL);
  v9 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        11,
        114,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        (char)a2);
    }
    goto LABEL_4;
  }
  *(_DWORD *)Pool2 = a2->DATA.QUERY_INFORMATION.Oid;
  *(_QWORD *)(Pool2 + 8) = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *(_DWORD *)(Pool2 + 16) = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u )
  {
    Next = a1->WOLPatternList.Next;
    v12 = 1;
  }
  else
  {
    Next = a1->PatternList.Next;
    v12 = 0;
  }
  if ( !Next )
    goto LABEL_13;
  while ( LODWORD(Next[5].Next) != *(_DWORD *)&a2->NdisReserved[80] )
  {
    Next = Next->Next;
    if ( !Next )
      goto LABEL_13;
  }
  v14 = Next + 1;
  if ( !v14 )
    goto LABEL_13;
  do
  {
    v15 = v14 - 1;
    if ( v14[2].Next == OidSourceHandle )
      break;
    v14 = v14->Next;
    v15 = 0LL;
  }
  while ( v14 );
  if ( !v15 )
    goto LABEL_13;
  if ( !v12 )
  {
    v16 = LODWORD(v15[8].Next) + 24 + LODWORD(v15[7].Next);
    v22 = (unsigned int *)ExAllocatePool2(64LL, v16, 2021082190LL);
    v18 = v22;
    if ( !v22 )
      goto LABEL_23;
    Next_low = LODWORD(v15[7].Next);
    *v22 = (unsigned int)v15[6].Next;
    v22[2] = Next_low;
    v22[3] = Next_low + 24;
    v22[4] = (unsigned int)v15[8].Next;
    memmove(v22 + 6, &v15[9], Next_low);
    Next_high = HIDWORD(v15[7].Next);
LABEL_27:
    memmove((char *)v18 + v18[3], (char *)&v15[6] + Next_high, v18[4]);
    a2->DATA.QUERY_INFORMATION.Oid = -50265852;
    a2->DATA.QUERY_INFORMATION.InformationBuffer = v18;
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v16;
    *(_QWORD *)&a2->NdisReserved[72] = v9;
    v9[3] = v18;
    return v3;
  }
  if ( HIDWORD(v15[7].Next) != 1 )
  {
LABEL_13:
    ExFreePoolWithTag(v9, 0);
    v3 = -1073676267;
    goto LABEL_14;
  }
  v16 = HIDWORD(v15[26].Next) + 24 + HIDWORD(v15[27].Next);
  v17 = (unsigned int *)ExAllocatePool2(64LL, v16, 2021082190LL);
  v18 = v17;
  if ( v17 )
  {
    v19 = HIDWORD(v15[26].Next);
    v20 = LODWORD(v15[26].Next);
    *v17 = (unsigned int)v15[7].Next;
    v17[2] = v19;
    v17[3] = v19 + 24;
    v17[4] = HIDWORD(v15[27].Next);
    memmove(v17 + 6, (char *)&v15[6] + v20, v19);
    Next_high = LODWORD(v15[27].Next);
    goto LABEL_27;
  }
LABEL_23:
  ExFreePoolWithTag(v9, 0);
LABEL_4:
  v3 = -1073741670;
LABEL_14:
  *a3 = 1;
  return v3;
}
