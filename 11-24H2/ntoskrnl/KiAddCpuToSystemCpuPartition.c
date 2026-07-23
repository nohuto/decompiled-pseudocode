/*
 * XREFs of KiAddCpuToSystemCpuPartition @ 0x140B59D00
 * Callers:
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     RtlWriteAcquireTickLock @ 0x1402ABFD4 (RtlWriteAcquireTickLock.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     RtlWriteReleaseTickLock @ 0x14044A520 (RtlWriteReleaseTickLock.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B5C68 (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KiAcquireCpuPartitionLockAtDpcLevel @ 0x1405BD520 (KiAcquireCpuPartitionLockAtDpcLevel.c)
 */

void __fastcall KiAddCpuToSystemCpuPartition(__int64 a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  KiAcquireCpuPartitionLockAtDpcLevel(KiSystemCpuPartition);
  KeAddProcessorAffinityEx(*(unsigned __int16 **)KiSystemCpuPartition, *(_DWORD *)(a1 + 36));
  KxReleaseSpinLock((volatile signed __int64 *)(KiSystemCpuPartition + 8));
  v2 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v2);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_QWORD *)(a1 + 14320) = KiSystemCpuPartition;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  RtlWriteAcquireTickLock(&KiSystemAvailableCpusSequence);
  KeAddProcessorAffinityEx(&KiSystemAvailableCpus.Count, *(_DWORD *)(a1 + 36));
  RtlWriteReleaseTickLock(&KiSystemAvailableCpusSequence);
  KiNotifyAvailableCpusChangeCpuPartition(KiSystemCpuPartition);
}
