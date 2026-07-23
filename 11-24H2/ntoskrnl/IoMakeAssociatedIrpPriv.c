/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x14025D5A8
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x14025D590 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x1404AB8B0 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14025CCA4 (IopSetDiskIoAttributionExtension.c)
 *     IopIsActivityTracingEnabled @ 0x14025D950 (IopIsActivityTracingEnabled.c)
 *     IopSetDriverFlagsExtension @ 0x14025DC34 (IopSetDriverFlagsExtension.c)
 *     IopIrpHasExtensionType @ 0x1403E8190 (IopIrpHasExtensionType.c)
 *     IoSetActivityIdIrp @ 0x140449B90 (IoSetActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v14; // r8
  __int64 v15; // rcx
  _SLIST_ENTRY **v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rax
  char v21; // [rsp+80h] [rbp+18h]
  char v22; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v22 = 0;
  if ( (unsigned __int8)IopIsActivityTracingEnabled(a1, a2, a2) && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || (v7 = *(_QWORD *)(a1 + 200), *(char *)(a1 + 71) >= 0) && v7 && (*(_BYTE *)(v7 + 2) & 0x40) != 0
    || (v20 = *(_QWORD *)(a1 + 200), *(char *)(a1 + 71) >= 0) && v20 && (*(_WORD *)(v20 + 2) & 0x100) != 0
    || v6 && (*(_DWORD *)(v6 + 48) & 0x8000000) != 0 )
  {
    a3 += 2;
    v22 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  v9 = 72 * a3 + 208;
  if ( a3 > (char)IopLargeIrpStackLocations )
    goto LABEL_37;
  v21 = 4;
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
    result = ExAllocatePool2(0x40uLL, v9, 0x20707249u);
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
  v15 = LODWORD(v13[1].Next) | 8u;
  v16 = &v13[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v13[11].Next + 1) = v16;
  WORD2(v13->Next) = CurrentPrcb->Number;
  LODWORD(v13[1].Next) = v15;
  LODWORD(v13[1].Next) = v15 | *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v13[4].Next) |= v21;
  *((_QWORD *)&v13[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v13[1].Next + 1) = a1;
  if ( v22 )
  {
    BYTE3(v13[4].Next) -= 2;
    BYTE2(v13[4].Next) -= 2;
    *((_QWORD *)&v13[11].Next + 1) = v16 - 18;
    *((_QWORD *)&v13[12].Next + 1) = v16 - 18;
  }
  if ( (unsigned __int8)IopIsActivityTracingEnabled(v15, v16, v14) && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
    IoSetActivityIdIrp(v13, *(_QWORD *)(a1 + 200) + 24LL);
  v17 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) >= 0 && v17 && (*(_BYTE *)(v17 + 2) & 0x40) != 0 )
    IopSetDiskIoAttributionExtension(
      (__int64)v13,
      *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL),
      *((_QWORD *)&v13[9].Next + 1),
      1);
  v18 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) >= 0 && v18 )
  {
    if ( _bittest16((const signed __int16 *)(v18 + 2), 8u) )
      IopSetDriverFlagsExtension(v13, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 56LL));
  }
  return (__int64)v13;
}
