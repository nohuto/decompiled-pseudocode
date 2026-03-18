/*
 * XREFs of ExpPrmWaitForForZeroActiveCount @ 0x14064B9B0
 * Callers:
 *     ExpPrmNotifyInterfaceChange @ 0x1407AFC10 (ExpPrmNotifyInterfaceChange.c)
 *     ExpPrmTargetDeviceChangeCallback @ 0x1407AFD00 (ExpPrmTargetDeviceChangeCallback.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 */

__int64 ExpPrmWaitForForZeroActiveCount()
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -10000LL;
  while ( 1 )
  {
    result = (unsigned int)dword_140EFA244;
    if ( !dword_140EFA244 )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
