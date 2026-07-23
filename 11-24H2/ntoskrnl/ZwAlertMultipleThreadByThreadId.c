/*
 * XREFs of ZwAlertMultipleThreadByThreadId @ 0x1406A8170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlertMultipleThreadByThreadId(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
