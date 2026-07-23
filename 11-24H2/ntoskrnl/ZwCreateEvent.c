/*
 * XREFs of ZwCreateEvent @ 0x1406A7CB0
 * Callers:
 *     CmSiCreateEvent @ 0x140468410 (CmSiCreateEvent.c)
 *     DifZwCreateEventWrapper @ 0x14063BD50 (DifZwCreateEventWrapper.c)
 *     DbgkpCreateNotificationEvent @ 0x140704940 (DbgkpCreateNotificationEvent.c)
 *     IoCreateSynchronizationEvent @ 0x140711A80 (IoCreateSynchronizationEvent.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140718298 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbCreateNode @ 0x1407347DC (PiDrvDbCreateNode.c)
 *     PfpCreateEventInternal @ 0x140746AD0 (PfpCreateEventInternal.c)
 *     PspShutdownCsrProcess @ 0x1407731D4 (PspShutdownCsrProcess.c)
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407B4BF8 (ExpGetSystemWriteConstraintInformation.c)
 *     CMFFlushHitsFile @ 0x1407C30E0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 *     MiCreateMemoryEvent @ 0x1408001D8 (MiCreateMemoryEvent.c)
 *     CmpCreateEvent @ 0x140932EC0 (CmpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x140A623D0 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x140AAF2AC (SmCreateEvent.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
