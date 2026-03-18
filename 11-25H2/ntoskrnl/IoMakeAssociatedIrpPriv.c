/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x14035E5F8
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x14035E5E0 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x1404B0020 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14035D794 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x14035EEC4 (IopSetDriverFlagsExtension.c)
 *     IopIrpHasExtensionType @ 0x1403EF950 (IopIrpHasExtensionType.c)
 *     IoSetActivityIdIrp @ 0x140454490 (IoSetActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 v6; // r8
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v9; // di
  __int64 v10; // rbp
  __int16 v11; // di
  _GENERAL_LOOKASIDE *L; // rbp
  PSLIST_ENTRY v13; // rbx
  int v14; // ecx
  _SLIST_ENTRY **v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  char v20; // [rsp+80h] [rbp+18h]
  char v21; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v6 = a2;
  v21 = 0;
  if ( (IopIrpExtensionStatus & 1) != 0
    && (IopFunctionPointerMask & 4) != 0
    && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || (v7 = *(_QWORD *)(a1 + 200), *(char *)(a1 + 71) >= 0) && v7 && (*(_BYTE *)(v7 + 2) & 0x40) != 0
    || (v19 = *(_QWORD *)(a1 + 200), *(char *)(a1 + 71) >= 0) && v19 && (*(_WORD *)(v19 + 2) & 0x100) != 0
    || v6 && (*(_DWORD *)(v6 + 48) & 0x8000000) != 0 )
  {
    a3 += 2;
    v21 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  v9 = 72 * a3 + 208;
  if ( a3 > (char)IopLargeIrpStackLocations )
    goto LABEL_37;
  v20 = 4;
  if ( a3 == 1 )
  {
    v10 = 2048LL;
  }
  else
  {
    if ( a3 <= (char)IopMediumIrpStackLocations )
    {
      v10 = 2064LL;
      v3 = 1LL;
      v11 = 9 * (char)IopMediumIrpStackLocations;
    }
    else
    {
      v10 = 2080LL;
      v3 = 2LL;
      v11 = 9 * (char)IopLargeIrpStackLocations;
    }
    v9 = 8 * v11 + 208;
  }
  L = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v10);
  ++L->TotalAllocates;
  v13 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( !v13 )
  {
    ++L->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[v3].L;
    ++L->TotalAllocates;
    v13 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v13 )
      ++L->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) == 0 )
  {
    if ( v13 )
      goto LABEL_17;
LABEL_37:
    result = ExAllocatePool2(0x40uLL);
    v13 = (PSLIST_ENTRY)result;
    if ( !result )
      return result;
    goto LABEL_17;
  }
  if ( !v13 )
    goto LABEL_37;
  if ( *((_QWORD *)&v13[3].Next + 1) < (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
  {
    ++L->TotalFrees;
    ExFreePoolWithTag(v13, 0);
    goto LABEL_37;
  }
  v9 = *((_WORD *)&v13[3].Next + 4);
LABEL_17:
  memset_0(v13, 0, v9);
  BYTE2(v13[4].Next) = a3;
  BYTE3(v13[4].Next) = a3 + 1;
  LOWORD(v13->Next) = 6;
  WORD1(v13->Next) = v9;
  BYTE6(v13[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v13[2].Next + 1) = v13 + 2;
  v13[2].Next = v13 + 2;
  v14 = LODWORD(v13[1].Next) | 8;
  v15 = &v13[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v13[11].Next + 1) = v15;
  WORD2(v13->Next) = CurrentPrcb->Number;
  LODWORD(v13[1].Next) = v14;
  LODWORD(v13[1].Next) = v14 | *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v13[4].Next) |= v20;
  *((_QWORD *)&v13[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v13[1].Next + 1) = a1;
  if ( v21 )
  {
    BYTE3(v13[4].Next) -= 2;
    BYTE2(v13[4].Next) -= 2;
    *((_QWORD *)&v13[11].Next + 1) = v15 - 18;
    *((_QWORD *)&v13[12].Next + 1) = v15 - 18;
  }
  if ( (IopIrpExtensionStatus & 1) != 0
    && (IopFunctionPointerMask & 4) != 0
    && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
  {
    IoSetActivityIdIrp(v13, *(_QWORD *)(a1 + 200) + 24LL);
  }
  v16 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) >= 0 && v16 && (*(_BYTE *)(v16 + 2) & 0x40) != 0 )
    IopSetDiskIoAttributionExtension(
      (__int64)v13,
      *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL),
      *((_QWORD *)&v13[9].Next + 1),
      1);
  v17 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) >= 0 && v17 )
  {
    if ( _bittest16((const signed __int16 *)(v17 + 2), 8u) )
      IopSetDriverFlagsExtension(v13, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 56LL));
  }
  return (__int64)v13;
}
