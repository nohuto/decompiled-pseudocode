/*
 * XREFs of KeDetachProcess @ 0x140489B10
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((__int64)&CurrentThread->600, 0);
}
