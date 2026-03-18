/*
 * XREFs of ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x140047E80
 * Callers:
 *     imp_WdfRequestRequeue @ 0x140047690 (imp_WdfRequestRequeue.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x140047730 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x140047FB0 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestGetIoQueue @ 0x14005B240 (imp_WdfRequestGetIoQueue.c)
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1400DF0A0 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1400DF1F0 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1400DF340 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1400E05A0 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1400E0700 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1400E0860 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfEvtIoDefault @ 0x1400E30A0 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1400E3260 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1400E3440 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1400E3620 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1400E3970 (VfEvtIoWrite.c)
 * Callees:
 *     <none>
 */

FxIoQueue *__fastcall FxRequest::GetCurrentQueue(FxRequest *this)
{
  if ( this->m_Completed )
    return 0LL;
  else
    return this->m_IoQueue;
}
