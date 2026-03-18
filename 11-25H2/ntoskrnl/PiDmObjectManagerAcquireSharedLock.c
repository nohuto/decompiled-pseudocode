/*
 * XREFs of PiDmObjectManagerAcquireSharedLock @ 0x140968D50
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1408CCFCC (PiDmEnumObjectsWithCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x1408D1A38 (PiDqQueryAppendActionEntry.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PiUEventHandleRegistration @ 0x14096747C (PiUEventHandleRegistration.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140968418 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PiDmObjectManagerAcquireSharedLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(a1, 1u);
}
