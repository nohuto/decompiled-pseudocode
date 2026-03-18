/*
 * XREFs of ZwAcceptConnectPort @ 0x1406A6450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAcceptConnectPort()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
