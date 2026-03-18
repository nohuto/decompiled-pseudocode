/*
 * XREFs of ZwCreateEvent @ 0x1406A6D10
 * Callers:
 *     CmSiCreateEvent @ 0x14046D968 (CmSiCreateEvent.c)
 *     DifZwCreateEventWrapper @ 0x14063D790 (DifZwCreateEventWrapper.c)
 *     DbgkpCreateNotificationEvent @ 0x140706D80 (DbgkpCreateNotificationEvent.c)
 *     IoCreateSynchronizationEvent @ 0x140713EF0 (IoCreateSynchronizationEvent.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14071A708 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbCreateNode @ 0x1407368AC (PiDrvDbCreateNode.c)
 *     PfpCreateEventInternal @ 0x1407487E0 (PfpCreateEventInternal.c)
 *     PspShutdownCsrProcess @ 0x140772FB4 (PspShutdownCsrProcess.c)
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407B47A8 (ExpGetSystemWriteConstraintInformation.c)
 *     CMFFlushHitsFile @ 0x1407C1EAC (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C27E0 (CMFSystemThreadRoutine.c)
 *     MiCreateMemoryEvent @ 0x1407FFA98 (MiCreateMemoryEvent.c)
 *     CmpCreateEvent @ 0x140930D80 (CmpCreateEvent.c)
 *     NtCopyFileChunk @ 0x1409886C0 (NtCopyFileChunk.c)
 *     IoCreateNotificationEvent @ 0x140A69020 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x140AB433C (SmCreateEvent.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, *(_QWORD *)&DesiredAccess);
}
