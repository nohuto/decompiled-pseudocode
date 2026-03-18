/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x1402D6794
 * Callers:
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     IopEjectDevice @ 0x140733A30 (IopEjectDevice.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x14074C66C (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 *     PopFxRegisterDevice @ 0x14074E950 (PopFxRegisterDevice.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     PnpAsynchronousCall @ 0x140A4D884 (PnpAsynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x140A58ACC (PiControlGetDeviceStack.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
  KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = v6;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(v6);
  return Object;
}
