/*
 * XREFs of MiCompleteMemoryAddition @ 0x1407D915C
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407D87AC (MiAddPhysicalMemory.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     MiComputeNodeMemory @ 0x140660C50 (MiComputeNodeMemory.c)
 *     MiEnableNewPfns @ 0x140660F7C (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x140662554 (MiPerformMemoryChange.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiIncreaseCommitLimits @ 0x14067A97C (MiIncreaseCommitLimits.c)
 *     MiFinishChildPartitionHotAdd @ 0x14067EAA0 (MiFinishChildPartitionHotAdd.c)
 *     MiNotifyMemoryChange @ 0x1407D9E3C (MiNotifyMemoryChange.c)
 */

__int64 __fastcall MiCompleteMemoryAddition(__int64 a1)
{
  ULONG **v2; // rdi
  __int64 v3; // rdx
  char v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // eax
  ULONG *v9; // rcx

  MiPerformMemoryChange(a1);
  v2 = (ULONG **)(a1 + 48);
  if ( (*(_DWORD *)(a1 + 40) & 8) != 0 )
    MiComputeNodeMemory(*v2, 1);
  _InterlockedIncrement64(&qword_140E2E9B0);
  if ( *(_QWORD *)(a1 + 104) )
  {
    v2 = (ULONG **)(a1 + 48);
    MiFinishChildPartitionHotAdd(*(_QWORD *)(a1 + 48), (unsigned __int64 *)(a1 + 104));
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 40) & 0x80u) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 32) + v3 + 511;
    v3 &= 0xFFFFFFFFFFFFFE00uLL;
    v5 = (v6 & 0xFFFFFFFFFFFFFE00uLL) - v3;
    v4 = 0;
  }
  else
  {
    v4 = 1;
    v5 = *(_QWORD *)(a1 + 32);
  }
  MiUpdateLargePageBitMap((__int64)*v2, v3, v5, v4);
  if ( (*(_DWORD *)(a1 + 40) & 8) != 0 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), 1);
  if ( (*(_DWORD *)(a1 + 40) & 0x10000) != 0 )
    v7 = MiHotRemoveHugeRange(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), 0);
  else
    v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 40);
  if ( (v8 & 0x80u) != 0 )
  {
    if ( (v8 & 0x80000) == 0 )
      MiIncreaseCommitLimits(
        (__int64)&MiSystemPartition,
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 32),
        1,
        0LL);
    v9 = *(ULONG **)(a1 + 48);
    if ( v9 != &MiSystemPartition && (*(_DWORD *)(a1 + 40) & 0x10080) != 0 )
      MiIncreaseCommitLimits((__int64)v9, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32), 1, 0LL);
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 48) + 19648LL), *(_QWORD *)(a1 + 32));
  }
  else
  {
    MiEnableNewPfns(a1, v7);
  }
  return MiNotifyMemoryChange(a1);
}
