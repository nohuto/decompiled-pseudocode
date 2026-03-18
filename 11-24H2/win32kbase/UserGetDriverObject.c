/*
 * XREFs of UserGetDriverObject @ 0x14019F730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PDRIVER_OBJECT UserGetDriverObject()
{
  return gpWin32kDriverObject;
}
