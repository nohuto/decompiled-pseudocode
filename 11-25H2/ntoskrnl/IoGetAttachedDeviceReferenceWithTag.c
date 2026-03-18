/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x140359D98
 * Callers:
 *     PopAllocateIrp @ 0x140359E20 (PopAllocateIrp.c)
 *     IopEjectDevice @ 0x140727798 (IopEjectDevice.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x14074059C (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 *     PopFxRegisterDevice @ 0x140742880 (PopFxRegisterDevice.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PnpAsynchronousCall @ 0x140A4B038 (PnpAsynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x140A55090 (PiControlGetDeviceStack.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall IoGetAttachedDeviceReferenceWithTag(_QWORD *Object, ULONG Tag)
{
  KIRQL v4; // al
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = (_QWORD *)Object[3];
  v6 = v4;
  while ( v5 )
  {
    Object = v5;
    v5 = (_QWORD *)v5[3];
  }
  ObfReferenceObjectWithTag(Object, Tag);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160));
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = v6;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(v6);
  return Object;
}
