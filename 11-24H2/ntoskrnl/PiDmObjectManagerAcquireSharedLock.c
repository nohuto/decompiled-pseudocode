/*
 * XREFs of PiDmObjectManagerAcquireSharedLock @ 0x1408B52AC
 * Callers:
 *     PiUEventHandleRegistration @ 0x14085BCBC (PiUEventHandleRegistration.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B41E4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     PiDqQueryAppendActionEntry @ 0x1408B4DF0 (PiDqQueryAppendActionEntry.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PiDmObjectManagerAcquireSharedLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(a1, 1u);
}
