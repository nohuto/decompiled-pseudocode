/*
 * XREFs of RecreateTouchInjectionDevices @ 0x1C00A0400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RecreateTouchInjectionDevices()
{
  __int64 result; // rax

  result = 1LL;
  WPP_MAIN_CB.DeviceLock.Header.SignalState = 1;
  return result;
}
