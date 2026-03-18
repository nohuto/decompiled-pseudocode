/*
 * XREFs of KiAddCpuToSystemCpuPartition @ 0x140B47CE0
 * Callers:
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     RtlWriteAcquireTickLock @ 0x140274A4C (RtlWriteAcquireTickLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     RtlWriteReleaseTickLock @ 0x1404555D0 (RtlWriteReleaseTickLock.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B4798 (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KiAcquireCpuPartitionLockAtDpcLevel @ 0x1405BBFC0 (KiAcquireCpuPartitionLockAtDpcLevel.c)
 */

void __fastcall KiAddCpuToSystemCpuPartition(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

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
