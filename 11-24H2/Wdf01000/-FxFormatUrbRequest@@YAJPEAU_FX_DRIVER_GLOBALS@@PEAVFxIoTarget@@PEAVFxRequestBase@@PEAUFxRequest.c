/*
 * XREFs of ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x14004E4C4
 * Callers:
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x14004D4A0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x14004D750 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x14009C4D0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x14004F110 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x14004F184 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140082FF0 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxFormatUrbRequest(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Target,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        _FX_URB_TYPE FxUrbType,
        USBD_HANDLE__ *UsbdHandle)
{
  _IRP *m_Irp; // rdi
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  CCHAR v13; // cl
  FxRequestContext *v14; // rdi
  _FX_DRIVER_GLOBALS *v15; // rcx
  void *v16; // rax
  FX_POOL **v17; // rax
  _FILE_OBJECT *v18; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v20; // r8
  _FX_DRIVER_GLOBALS *v21; // rax
  _IRP *Irp; // rax
  _IRP *_a1; // rdi
  _FX_DRIVER_GLOBALS *v25; // rcx
  unsigned __int64 v26; // rdx
  FxRequestBase *_a2; // rax
  unsigned int _a3; // edi
  const void *v29; // rcx
  unsigned __int16 v30; // r9
  const void *v31; // rdx
  FxRequestBase *v32; // rax
  unsigned __int64 v33; // rcx
  __m128i v34; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, Request);
      m_Globals = Request->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerifierIO )
          FxRequestBase::ClearVerifierFlags(Request, 128);
      }
    }
  }
  v13 = *(_BYTE *)(Target + 336);
  if ( !v13 )
  {
    _a3 = -1073741436;
    v29 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(Target + 10) )
      v29 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v29, -1073741436);
    goto LABEL_34;
  }
  if ( !m_Irp )
    goto LABEL_18;
  if ( m_Irp->CurrentLocation <= v13 )
  {
    if ( Request->m_IrpAllocation != 1 )
    {
      _a3 = -1073741616;
      v30 = 13;
LABEL_40:
      v31 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      v32 = Request;
      if ( !*(_WORD *)(Target + 10) )
        v31 = 0LL;
      v33 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v33 = 0LL;
      if ( v33 )
        v32 = (FxRequestBase *)v33;
      WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v30, WPP_FxRequestBase_cpp_Traceguids, v32, v31, _a3);
LABEL_34:
      if ( FxDriverGlobals->FxVerboseOn )
        WPP_IFR_SF_qqd(FxDriverGlobals, 5u, 0xEu, 0xAu, WPP_usbutil_cpp_Traceguids, (const void *)Target, Request, _a3);
      return _a3;
    }
LABEL_18:
    Irp = IoAllocateIrp(v13, 0);
    if ( Irp )
    {
      _a1 = Request->m_Irp.m_Irp;
      Request->m_Irp.m_Irp = Irp;
      Request->m_Completed = 0;
      if ( _a1 && _a1 != Irp && Request->m_IrpAllocation == 1 )
      {
        Request->m_IrpAllocation = 1;
        v25 = Request->m_Globals;
        if ( v25->FxVerboseOn )
        {
          v26 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
          _a2 = Request;
          if ( !Request->m_ObjectSize )
            v26 = 0LL;
          if ( v26 )
            _a2 = (FxRequestBase *)v26;
          WPP_IFR_SF_qq(v25, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2);
        }
        IoFreeIrp(_a1);
      }
      else
      {
        Request->m_IrpAllocation = 1;
      }
      goto LABEL_7;
    }
    _a3 = -1073741670;
    v30 = 12;
    goto LABEL_40;
  }
LABEL_7:
  v14 = Request->m_RequestContext;
  if ( !v14 || v14->m_RequestType != 17 )
  {
    v15 = *(_FX_DRIVER_GLOBALS **)(Target + 16);
    v16 = retaddr;
    v34.m128i_i64[0] = 0LL;
    v34.m128i_i64[1] = 64LL;
    if ( !v15->FxPoolTrackingOn )
      v16 = 0LL;
    v17 = FxPoolAllocator(v15, &v15->FxPoolFrameworks, &v34, 0x88uLL, v15->Tag, v16);
    v14 = (FxRequestContext *)v17;
    if ( !v17 )
      return 3221225626LL;
    FxUsbRequestContext::FxUsbRequestContext((FxUsbRequestContext *)v17, 0x11u);
    v14[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v14->__vftable = (FxRequestContext_vtbl *)FxUsbUrbContext::`vftable';
    FxRequestBase::SetContext(Request, v14);
  }
  v14->StoreAndReferenceMemory(v14, Buffer);
  v18 = (_FILE_OBJECT *)v14[1].m_CompletionParams.Parameters.Write.Buffer;
  CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
  CurrentStackLocation[-1].FileObject = 0LL;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  v20 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( FxUrbType == FxUrbTypeUsbdAllocated && (unsigned int)(*((_DWORD *)UsbdHandle + 54) - 1538) <= 0xFFFFF9FC )
    v20[-1].FileObject = v18;
  v20[-1].Parameters.WMI.ProviderId = (unsigned __int64)v18;
  v21 = Request->m_Globals;
  if ( v21->FxVerifierOn )
  {
    if ( v21->FxVerifierIO )
      FxRequestBase::SetVerifierFlags(Request, 128);
  }
  return 0LL;
}
