/*
 * XREFs of MmFreeIndependentPages @ 0x14039EC60
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x14049ADE4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14049B264 (IopLiveDumpFreeDumpBuffers.c)
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x14058AA2C (HvlpInitializeHvCrashdump.c)
 *     IopLiveDumpReleaseResources @ 0x14059CE5C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059E850 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     KeAllocateProcessorProfileStructures @ 0x1405B0460 (KeAllocateProcessorProfileStructures.c)
 *     KiFreeProcessorStacks @ 0x1405B6F14 (KiFreeProcessorStacks.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x1405B7038 (KiFreeProcessorStateInitializationParameters.c)
 *     ExDeletePoolTagTable @ 0x140653F80 (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14070ED24 (HvlDeleteProcessor.c)
 *     MmAllocateIsrStack @ 0x1407F6B68 (MmAllocateIsrStack.c)
 *     MmFreeIsrStack @ 0x1407F6C5C (MmFreeIsrStack.c)
 *     HvpFreeBin @ 0x140A6A13C (HvpFreeBin.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecreaseUsedPtesInPfn @ 0x14039EEFC (MiDecreaseUsedPtesInPfn.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14039F0B8 (MiIsPfnFromChargedSlabAllocation.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  _BOOL8 v2; // r15
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rdi
  __int64 v5; // r12
  _QWORD *v6; // r13
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  int IsPfnFromChargedSlabAllocation; // ebx
  ULONG_PTR v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-40h]
  unsigned __int64 v19; // [rsp+38h] [rbp-28h]
  unsigned int v20; // [rsp+A0h] [rbp+40h]
  _QWORD *v21; // [rsp+A8h] [rbp+48h]

  v2 = (a2 & 0xFFF) != 0;
  v3 = a2 >> 12;
  v20 = v3 + v2;
  v18 = v3 + v2;
  v19 = v3 + v2;
  v4 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v21 = v4;
  v5 = 0LL;
  v6 = &v4[v3 + v2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, v3);
  }
  do
  {
    v8 = 48 * (*(_QWORD *)(48 * ((*v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL)
       - 0x220000000000LL;
    v9 = 48 * ((*v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    *v4 = CLFS_LSN_NULL_EXT;
    IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v9);
    v12 = MiLockAndDecrementShareCount(v11);
    if ( IsPfnFromChargedSlabAllocation )
    {
      *(_QWORD *)&v18 = v18 - 1;
      --v19;
    }
    else if ( v12 == 3 )
    {
      ++*((_QWORD *)&v18 + 1);
    }
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v13);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    MiDecrementShareCountEx(v8, 0LL);
    MiDecreaseUsedPtesInPfn(v8, 1uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (++v5 & 0x3F) == 0 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      }
      __writecr8(CurrentIrql);
      v15 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = 2;
        KiRaiseIrqlProcessIrqlFlags(v15, v14);
      }
    }
    ++v4;
    v16 = 0xFFFFFFFFFFLL;
  }
  while ( v4 < v6 );
  if ( KiIrqlFlags )
  {
    LOBYTE(v16) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
  }
  __writecr8(CurrentIrql);
  MiReleasePtes((__int64)&qword_140E37568, v21, v20);
  result = qword_140E3D898;
  if ( qword_140E3D898 )
  {
    MiReturnCommit((__int64)&MiSystemPartition, v19 - *((_QWORD *)&v18 + 1), 0);
    result = MiReturnResident((__int64)&MiSystemPartition, v18);
    _InterlockedAdd64(&qword_140E375D0, -(__int64)v19);
  }
  return result;
}
