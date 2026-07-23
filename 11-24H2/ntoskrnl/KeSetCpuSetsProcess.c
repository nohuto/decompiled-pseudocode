/*
 * XREFs of KeSetCpuSetsProcess @ 0x1405BD334
 * Callers:
 *     KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405BD53C (KiAdjustProcessCpuSetsAfterCpuPartitionChange.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAcquireProcessLockExclusive @ 0x1403A2370 (KiAcquireProcessLockExclusive.c)
 *     KiValidateCpuSetMasks @ 0x14048B8AC (KiValidateCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1404D3664 (KiGetProcessCpuSetMaskPointer.c)
 *     KiWriteCpuSetMasks @ 0x1404F6AB8 (KiWriteCpuSetMasks.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1405BD8C0 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, __int64 a3, char a4, char a5)
{
  __int64 result; // rax
  unsigned __int64 *ProcessCpuSetMaskPointer; // rax
  unsigned __int64 *v11; // rax
  unsigned __int8 v12[4]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-14h] BYREF
  _QWORD *v14[2]; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0;
  v14[0] = 0LL;
  v12[0] = 0;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    KiAcquireProcessLockExclusive(a1, v12);
    if ( a4 )
    {
      ProcessCpuSetMaskPointer = (unsigned __int64 *)KiGetProcessCpuSetMaskPointer(a1, 1, &v13);
      KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v13, a3, a2);
    }
    if ( a5 )
    {
      v11 = (unsigned __int64 *)KiGetProcessCpuSetMaskPointer(a1, 0, &v13);
      KiWriteCpuSetMasks(v11, v13, a3, a2);
    }
    KiUpdateThreadCpuSetAffinitiesProcess(a1, v14);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v14, v12[0]);
    return 0LL;
  }
  return result;
}
