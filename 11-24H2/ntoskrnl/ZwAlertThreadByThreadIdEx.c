/*
 * XREFs of ZwAlertThreadByThreadIdEx @ 0x1406A81F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlertThreadByThreadIdEx(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
