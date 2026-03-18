/*
 * XREFs of KiAddCpuToSystemCpuPartition @ 0x140B57C80
 * Callers:
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x14029D4E4 (RtlWriteAcquireTickLock.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     RtlWriteReleaseTickLock @ 0x140455770 (RtlWriteReleaseTickLock.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B8688 (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KiAcquireCpuPartitionLockAtDpcLevel @ 0x1405BFEF0 (KiAcquireCpuPartitionLockAtDpcLevel.c)
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
