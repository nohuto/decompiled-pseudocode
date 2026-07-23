/*
 * XREFs of KeDetachProcess @ 0x1404842F0
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((__int64)&CurrentThread->600, 0);
}
