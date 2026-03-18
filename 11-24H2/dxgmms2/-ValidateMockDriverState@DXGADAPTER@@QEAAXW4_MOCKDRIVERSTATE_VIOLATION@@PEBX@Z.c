/*
 * XREFs of ?ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x14004B708
 * Callers:
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000E8B0 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     VidSchiSendToExecutionQueue @ 0x140017660 (VidSchiSendToExecutionQueue.c)
 *     VidSchiSetFlipDevice @ 0x14001E0BC (VidSchiSetFlipDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 DXGADAPTER::ValidateMockDriverState()
{
  return ((__int64 (*)(void))DxgCoreInterface[85])();
}
