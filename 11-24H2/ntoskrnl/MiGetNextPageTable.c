/*
 * XREFs of MiGetNextPageTable @ 0x140235DA0
 * Callers:
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiIsCfgBitMapPageShared @ 0x140234458 (MiIsCfgBitMapPageShared.c)
 *     MiCountSharedPages @ 0x140235F64 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x140238A7C (MiComputePageCommitment.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiMakeHyperRangeAccessible @ 0x1402DFB90 (MiMakeHyperRangeAccessible.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiCloneCaptureVadCommit @ 0x1404AA908 (MiCloneCaptureVadCommit.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiCheckCommitReleaseFromVad @ 0x140669880 (MiCheckCommitReleaseFromVad.c)
 *     MiGetNextNonGapPfnPage @ 0x14066D5C4 (MiGetNextNonGapPfnPage.c)
 *     MiQueryVaPhysicalContiguity @ 0x140680DC0 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiGetNextPageTable(__int64 a1, __int64 a2, char a3, char a4, _DWORD *a5)
{
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  int v11; // eax
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  int v14; // eax
  int v15; // edx
  __int64 result; // rax
  __int128 v17; // [rsp+20h] [rbp-E8h] BYREF
  int v18; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-D4h]
  char v20; // [rsp+39h] [rbp-CFh]
  struct _LIST_ENTRY **v21; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v22; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h]
  __int64 (__fastcall *v24)(); // [rsp+E0h] [rbp-28h]
  __int128 *v25; // [rsp+E8h] [rbp-20h]

  v17 = 0LL;
  memset_0(&v18, 0, 0xC0uLL);
  v9 = a1 << 25 >> 16;
  v10 = a2 << 25 >> 16;
  v11 = 8289;
  if ( (a4 & 1) != 0 )
    v11 = 8417;
  v18 = v11;
  if ( (a4 & 2) != 0 )
    v18 = v11 | 0x200;
  LeafVa = MiGetLeafVa(v9);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F280 && LeafVa <= qword_140E2F290 )
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  else
    p_Blink = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
  if ( (a4 & 4) != 0 )
    goto LABEL_12;
  v14 = MiFastLockLeafPageTable(p_Blink, v9, 0LL);
  if ( !v14 )
  {
    v18 |= 4u;
LABEL_12:
    v21 = p_Blink;
    v25 = &v17;
    v20 = a3;
    v22 = v9;
    v19 = v19 & 0xFFFFFE3F | 0x40;
    v24 = MiGetNextPageTableTail;
    v23 = v10;
    MiWalkPageTables((__int64)&v18);
    *a5 = v17;
    return *((_QWORD *)&v17 + 1);
  }
  v15 = v14 - 1;
  result = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a5 = v15;
  return result;
}
