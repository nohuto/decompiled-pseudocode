/*
 * XREFs of ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x14009EEF8
 * Callers:
 *     imp_WdfUsbTargetDeviceCyclePortSynchronously @ 0x14009C710 (imp_WdfUsbTargetDeviceCyclePortSynchronously.c)
 * Callees:
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x14000EBB8 (--1FxIoContext@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x14001F270 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x14004CE80 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x14005C1D8 (--0FxIoContext@@QEAA@XZ.c)
 *     ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x14009E9CC (-CancelSentIo@FxUsbDevice@@QEAAXXZ.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x14009F134 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::CyclePort(FxUsbDevice *this)
{
  __int64 v2; // rdx
  int v3; // edi
  unsigned __int8 v4; // r8
  FxIoContext context; // [rsp+20h] [rbp-1E8h] BYREF
  FxSyncRequest request; // [rsp+D0h] [rbp-138h] BYREF

  FxIoContext::FxIoContext(&context);
  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, &context, 0LL);
  v3 = FxUsbDevice::FormatCycleRequest(this, request.m_TrueRequest);
  if ( v3 >= 0 )
  {
    FxUsbDevice::CancelSentIo(this, v2, v4);
    v3 = FxIoTarget::SubmitSyncRequestIgnoreTargetState(this, request.m_TrueRequest, 0LL);
  }
  FxSyncRequest::~FxSyncRequest(&request);
  FxIoContext::~FxIoContext(&context);
  return (unsigned int)v3;
}
