/*
 * XREFs of IopAcquireReleaseDispatcherLock @ 0x140A15D10
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14044C700 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

void __fastcall IopAcquireReleaseDispatcherLock(struct _KEVENT *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = a1 + 7;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v2, 0, 0);
    KeLeaveCriticalRegion();
  }
}
