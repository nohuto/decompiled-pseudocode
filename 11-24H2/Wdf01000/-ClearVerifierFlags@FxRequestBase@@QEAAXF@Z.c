/*
 * XREFs of ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140082FF0
 * Callers:
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x140008630 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140009550 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x14000C900 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x14000DD80 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x14000F550 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfRequestCreate @ 0x14000FF10 (imp_WdfRequestCreate.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x14001C510 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14001CA30 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x14001E1F0 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x140028280 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x14002B930 (imp_WdfRequestMarkCancelableEx.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x14002CE90 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14003CEFC (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x14004DBA0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x14004E4C4 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x14004E8B0 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x14004F230 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1400535B0 (imp_WdfRequestUnmarkCancelable.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x140060058 (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x14007C21C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 */

void __fastcall FxRequestBase::ClearVerifierFlags(FxRequestBase *this, __int16 Flags, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  FxVerifierLock *v6; // rcx
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // al
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v6 = *(FxVerifierLock **)&this[-1].m_IrpCompletionReferenceCount) != 0LL )
  {
    FxVerifierLock::Lock(v6, &irql, a3);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  this->m_VerifierFlags &= ~Flags;
  FxNonPagedObject::Unlock(this, v8, v7);
}
