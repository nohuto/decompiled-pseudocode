/*
 * XREFs of WheaIsLogSelHandlerInitialized @ 0x14065C820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool WheaIsLogSelHandlerInitialized()
{
  return WheapDispatchPtr.DeviceLock.Header.LockNV != 0;
}
