/*
 * XREFs of PsGetProcessExitTime @ 0x140A469C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PsGetProcessExitTime(void)
{
  return (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process[3].ReadyListHead.Flink;
}
