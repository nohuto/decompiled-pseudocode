/*
 * XREFs of ExpPrmWaitForForZeroActiveCount @ 0x140657910
 * Callers:
 *     ExpPrmNotifyInterfaceChange @ 0x1407BF3E0 (ExpPrmNotifyInterfaceChange.c)
 *     ExpPrmTargetDeviceChangeCallback @ 0x1407BF4D0 (ExpPrmTargetDeviceChangeCallback.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 */

__int64 ExpPrmWaitForForZeroActiveCount()
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -10000LL;
  while ( 1 )
  {
    result = (unsigned int)dword_140EFA584;
    if ( !dword_140EFA584 )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
