/*
 * XREFs of ExpPrmWaitForForZeroActiveCount @ 0x140656010
 * Callers:
 *     ExpPrmNotifyInterfaceChange @ 0x1407BF830 (ExpPrmNotifyInterfaceChange.c)
 *     ExpPrmTargetDeviceChangeCallback @ 0x1407BF920 (ExpPrmTargetDeviceChangeCallback.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 */

__int64 ExpPrmWaitForForZeroActiveCount()
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -10000LL;
  while ( 1 )
  {
    result = (unsigned int)dword_140EFA8A4;
    if ( !dword_140EFA8A4 )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
