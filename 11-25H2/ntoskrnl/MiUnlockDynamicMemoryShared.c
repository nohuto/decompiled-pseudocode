/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x140393038
 * Callers:
 *     MiGetChannelInformation @ 0x140392D28 (MiGetChannelInformation.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiAddPartitionHugeRange @ 0x140663C58 (MiAddPartitionHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     MiAddPhysicalMemory @ 0x1407D87AC (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1407D97EC (MiMapNewPfns.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AADC88 (MiGetPhysicalMemoryRanges.c)
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx
  _QWORD *result; // rax

  v2 = (signed __int64 *)(a1 + 192);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 192), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
