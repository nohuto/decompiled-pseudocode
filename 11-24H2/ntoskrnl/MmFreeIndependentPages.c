/*
 * XREFs of MmFreeIndependentPages @ 0x14021D100
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140495C54 (IopLiveDumpFreeDumpBuffers.c)
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x140587D1C (HvlpInitializeHvCrashdump.c)
 *     IopLiveDumpReleaseResources @ 0x140599DDC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059B7D0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     KeAllocateProcessorProfileStructures @ 0x1405AD3D0 (KeAllocateProcessorProfileStructures.c)
 *     KiFreeProcessorStacks @ 0x1405B41D4 (KiFreeProcessorStacks.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405B42F8 (KiFreeProcessorStateInitializationParameters.c)
 *     ExDeletePoolTagTable @ 0x1406526E8 (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14070C8B4 (HvlDeleteProcessor.c)
 *     MmAllocateIsrStack @ 0x1407F72DC (MmAllocateIsrStack.c)
 *     MmFreeIsrStack @ 0x1407F73D0 (MmFreeIsrStack.c)
 *     HvpFreeBin @ 0x140A634EC (HvpFreeBin.c)
 * Callees:
 *     MiDecreaseUsedPtesInPfn @ 0x14021D39C (MiDecreaseUsedPtesInPfn.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14021D558 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  _BOOL8 v3; // r15
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // r12
  _QWORD *v7; // r13
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // r9
  ULONG_PTR v10; // rsi
  int IsPfnFromChargedSlabAllocation; // ebx
  ULONG_PTR v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 result; // rax
  __int128 v23; // [rsp+20h] [rbp-40h]
  unsigned __int64 v24; // [rsp+38h] [rbp-28h]
  unsigned int v25; // [rsp+A0h] [rbp+40h]
  _QWORD *v26; // [rsp+A8h] [rbp+48h]

  v3 = (a2 & 0xFFF) != 0;
  v4 = a2 >> 12;
  v25 = v4 + v3;
  v23 = v4 + v3;
  v24 = v4 + v3;
  v5 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v26 = v5;
  v6 = 0LL;
  v7 = &v5[v4 + v3];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, v4);
  }
  do
  {
    v9 = 48 * ((*v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v10 = 48 * (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    *v5 = CLFS_LSN_NULL_EXT;
    IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v9, 0xFFFFFFFFFFLL, a3, v9);
    v13 = MiLockAndDecrementShareCount(v12);
    if ( IsPfnFromChargedSlabAllocation )
    {
      *(_QWORD *)&v23 = v23 - 1;
      --v24;
    }
    else if ( v13 == 3 )
    {
      ++*((_QWORD *)&v23 + 1);
    }
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, v14, v16, v17) )
        {
          HvlNotifyLongSpinWait(v18);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    MiDecrementShareCountEx(v10, 0LL);
    MiDecreaseUsedPtesInPfn(v10, 1uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (++v6 & 0x3F) == 0 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v19) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
      }
      __writecr8(CurrentIrql);
      v20 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v19) = 2;
        KiRaiseIrqlProcessIrqlFlags(v20, v19);
      }
    }
    ++v5;
    v21 = 0xFFFFFFFFFFLL;
  }
  while ( v5 < v7 );
  if ( KiIrqlFlags )
  {
    LOBYTE(v21) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
  }
  __writecr8(CurrentIrql);
  MiReleasePtes(&qword_140E376A8, v26, v25);
  result = qword_140E3D9D8;
  if ( qword_140E3D9D8 )
  {
    MiReturnCommit(&MiSystemPartition, v24 - *((_QWORD *)&v23 + 1), 0LL);
    result = MiReturnResident(&MiSystemPartition, v23);
    _InterlockedAdd64(&qword_140E37710, -(__int64)v24);
  }
  return result;
}
