/*
 * XREFs of MmFreeIndependentPages @ 0x140227210
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x14049AB34 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14049AFB4 (IopLiveDumpFreeDumpBuffers.c)
 *     HvlStartBootLogicalProcessors @ 0x140580328 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1405873BC (HvlpInitializeHvCrashdump.c)
 *     IopLiveDumpReleaseResources @ 0x14059974C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059B140 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     KeAllocateProcessorProfileStructures @ 0x1405ACAD0 (KeAllocateProcessorProfileStructures.c)
 *     KiFreeProcessorStacks @ 0x1405B3044 (KiFreeProcessorStacks.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405B3168 (KiFreeProcessorStateInitializationParameters.c)
 *     ExDeletePoolTagTable @ 0x140648080 (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x140702E44 (HvlDeleteProcessor.c)
 *     MmAllocateIsrStack @ 0x1407E6CD8 (MmAllocateIsrStack.c)
 *     MmFreeIsrStack @ 0x1407E6DCC (MmFreeIsrStack.c)
 *     HvpFreeBin @ 0x140A674FC (HvpFreeBin.c)
 * Callees:
 *     MiDecreaseUsedPtesInPfn @ 0x1402274AC (MiDecreaseUsedPtesInPfn.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140227668 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r12
  _QWORD *v4; // r13
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v6; // rsi
  __int64 v7; // rcx
  int IsPfnFromChargedSlabAllocation; // ebx
  ULONG_PTR v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 result; // rax
  __int128 v17; // [rsp+20h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-28h]
  unsigned __int64 v19; // [rsp+A0h] [rbp+40h]
  _QWORD *v20; // [rsp+A8h] [rbp+48h]

  v19 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v17 = v19;
  v18 = v19;
  v2 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v20 = v2;
  v3 = 0LL;
  v4 = &v2[v19];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  do
  {
    v6 = 48 * (*(_QWORD *)(48 * ((*v2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL)
       - 0x220000000000LL;
    v7 = 48 * ((*v2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    *v2 = CLFS_LSN_NULL_EXT;
    IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v7);
    v10 = MiLockAndDecrementShareCount(v9);
    if ( IsPfnFromChargedSlabAllocation )
    {
      *(_QWORD *)&v17 = v17 - 1;
      --v18;
    }
    else if ( v10 == 3 )
    {
      ++*((_QWORD *)&v17 + 1);
    }
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    MiDecrementShareCountEx(v6, 0LL);
    MiDecreaseUsedPtesInPfn(v6, 1uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (++v3 & 0x3F) == 0 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v13) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      }
      __writecr8(CurrentIrql);
      v14 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v14);
    }
    ++v2;
    v15 = 0xFFFFFFFFFFLL;
  }
  while ( v2 < v4 );
  if ( KiIrqlFlags )
  {
    LOBYTE(v15) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
  }
  __writecr8(CurrentIrql);
  MiReleasePtes(&qword_140E37328, v20, (unsigned int)v19);
  result = qword_140E3D658;
  if ( qword_140E3D658 )
  {
    MiReturnCommit(&MiSystemPartition, v18 - *((_QWORD *)&v17 + 1), 0LL);
    result = MiReturnResident(&MiSystemPartition);
    _InterlockedAdd64(&qword_140E37390, -(__int64)v18);
  }
  return result;
}
