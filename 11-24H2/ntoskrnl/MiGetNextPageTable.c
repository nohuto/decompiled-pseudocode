/*
 * XREFs of MiGetNextPageTable @ 0x14020FF30
 * Callers:
 *     MiCountSharedPages @ 0x1402100F4 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x140212C0C (MiComputePageCommitment.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402155E0 (MiFlushDirtyBitsToPfn.c)
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiIsCfgBitMapPageShared @ 0x14046208C (MiIsCfgBitMapPageShared.c)
 *     MiCloneCaptureVadCommit @ 0x1404A4B08 (MiCloneCaptureVadCommit.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiCheckCommitReleaseFromVad @ 0x14066AA50 (MiCheckCommitReleaseFromVad.c)
 *     MiGetNextNonGapPfnPage @ 0x14066E798 (MiGetNextNonGapPfnPage.c)
 *     MiQueryVaPhysicalContiguity @ 0x140681F6C (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F3C0 && LeafVa <= qword_140E2F3D0 )
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
    MiWalkPageTables(&v18);
    *a5 = v17;
    return *((_QWORD *)&v17 + 1);
  }
  v15 = v14 - 1;
  result = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a5 = v15;
  return result;
}
