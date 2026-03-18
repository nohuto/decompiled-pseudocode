/*
 * XREFs of ViDeadlockCanProceed @ 0x140BA7B94
 * Callers:
 *     VfDeadlockInitializeResource @ 0x140B980B0 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140BA75AC (VfDeadlockReleaseResource.c)
 *     VfFreeMemoryNotification @ 0x140BA7A7C (VfFreeMemoryNotification.c)
 *     VfDeadlockAcquireResource @ 0x140BA83C4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     ViDeadlockCheckStackLimits @ 0x140BA7C08 (ViDeadlockCheckStackLimits.c)
 */

_BOOL8 __fastcall ViDeadlockCanProceed(LONG *a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( ViDeadlockDetectionEnabled )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 4 && KeGetCurrentIrql() <= 2u && KeAreInterruptsEnabled() )
    {
      if ( ViDeadlockGlobals )
      {
        ViDeadlockCheckStackLimits();
        if ( a1 != &ViDeadlockDatabaseLock && (struct _KTHREAD *)ViDeadlockDatabaseOwner != KeGetCurrentThread() )
          return 1;
      }
    }
  }
  return result;
}
