/*
 * XREFs of ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0
 * Callers:
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140007824 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x140007E10 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140009550 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     FxIoTargetSendIo @ 0x14000BF50 (FxIoTargetSendIo.c)
 *     FxIoTargetSendIoctl @ 0x14000D490 (FxIoTargetSendIoctl.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x14001EE38 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x14004CF30 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x14004D148 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x14004D4A0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x14004F4E0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x14004F8DC (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14004FC24 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x140050338 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x140050A64 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x14009C4D0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x14009EEF8 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x14009EF90 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x14009FF84 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     ??_GFxSyncRequest@@UEAAPEAXI@Z @ 0x1400AC2A0 (--_GFxSyncRequest@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x140008D40 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14000BC50 (--1FxRequestBase@@MEAA@XZ.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxSyncRequest::~FxSyncRequest(FxSyncRequest *this)
{
  signed __int32 v2; // edi
  FxSyncRequest *m_TrueRequest; // rax
  _LIST_ENTRY *Flink; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v6; // rcx

  this->__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_DestroyedEvent.m_Event.m_Event.Header.WaitListHead.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Flink,
        0LL,
        129,
        "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp",
        TagRelease,
        this->m_Refcnt - 1);
  }
  v2 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v2 )
    FxObject::FinalRelease(this);
  m_TrueRequest = (FxSyncRequest *)this->m_TrueRequest;
  if ( m_TrueRequest != this )
  {
    if ( !this->m_ClearContextOnDestroy )
      goto LABEL_9;
    m_TrueRequest->m_RequestContext = 0LL;
    this->m_TrueRequest->m_RequestBaseFlags &= ~0x10u;
  }
  if ( this->m_ClearContextOnDestroy )
    this->m_RequestContext = 0LL;
LABEL_9:
  if ( v2 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0xAu, WPP_FxSyncRequest_cpp_Traceguids, this, &this->m_DestroyedEvent);
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_DestroyedEvent);
    v6 = this->m_Globals;
    if ( v6->FxVerboseOn )
      WPP_IFR_SF_qq(v6, 5u, 0xDu, 0xBu, WPP_FxSyncRequest_cpp_Traceguids, this, &this->m_DestroyedEvent);
  }
  FxRequestBase::~FxRequestBase(this);
}
