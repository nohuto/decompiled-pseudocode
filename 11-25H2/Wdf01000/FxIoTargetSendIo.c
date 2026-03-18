/*
 * XREFs of FxIoTargetSendIo @ 0x140032D90
 * Callers:
 *     imp_WdfIoTargetSendReadSynchronously @ 0x1400342D0 (imp_WdfIoTargetSendReadSynchronously.c)
 *     imp_WdfIoTargetSendWriteSynchronously @ 0x14006FF00 (imp_WdfIoTargetSendWriteSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x14000562C (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1400167FC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x14002FFF0 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x140031C30 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x140032790 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x140032A20 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x140033740 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1400343DC (--1FxIoContext@@UEAA@XZ.c)
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x140034510 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_Dd @ 0x140080544 (WPP_IFR_SF_Dd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AFC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x140082EE4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqD @ 0x14009AC08 (WPP_IFR_SF_qqD.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxIoTargetSendIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned __int8 MajorCode,
        _WDF_MEMORY_DESCRIPTOR *IoBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  unsigned int v8; // r12d
  __int64 v11; // rcx
  FxIoTarget *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _FX_DRIVER_GLOBALS *v14; // rdx
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  __int64 v17; // rcx
  FxRequestBase *v18; // rbx
  FxRequestContext *m_RequestContext; // rcx
  FxIoContext *v20; // rcx
  _WDF_REQUEST_SEND_OPTIONS *v21; // rbx
  unsigned int v22; // edx
  _WDF_MEMORY_DESCRIPTOR *v23; // rdi
  int v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // eax
  unsigned __int64 *v27; // rdx
  signed __int32 v28; // ebx
  _MDL *m_MdlToFree; // rcx
  int v31; // eax
  unsigned int v32; // r15d
  FxIoTarget_vtbl *v33; // rax
  unsigned __int8 v34; // dl
  unsigned int v35; // r8d
  unsigned __int16 v36; // r9
  FxRequestBase_vtbl *v37; // rax
  unsigned __int16 v38; // r9
  KIRQL CurrentIrql; // al
  unsigned int v40; // ebx
  const void *m_TrueRequest; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  FxFileObject *_a1; // [rsp+28h] [rbp-D8h]
  FxTagTracker *_a2; // [rsp+30h] [rbp-D0h]
  FxVerifierLock *VerifierLock; // [rsp+50h] [rbp-B0h] BYREF
  FxSyncRequest v46; // [rsp+60h] [rbp-A0h] BYREF
  FxIoTarget **p_pTarget; // [rsp+190h] [rbp+90h] BYREF
  __int16 v48; // [rsp+198h] [rbp+98h]
  __int16 v49; // [rsp+19Ah] [rbp+9Ah]
  int v50; // [rsp+19Ch] [rbp+9Ch]
  FxRequestBase **v51; // [rsp+1A0h] [rbp+A0h] BYREF
  __int16 v52; // [rsp+1A8h] [rbp+A8h]
  __int16 v53; // [rsp+1AAh] [rbp+AAh]
  int v54; // [rsp+1ACh] [rbp+ACh]
  FxIoContext context; // [rsp+1B0h] [rbp+B0h] BYREF
  FxRequestBuffer ioBuf; // [rsp+260h] [rbp+160h] BYREF
  FxRequestBase *v57; // [rsp+2C0h] [rbp+1C0h] BYREF
  FxIoTarget *pTarget; // [rsp+2C8h] [rbp+1C8h] BYREF

  v8 = MajorCode;
  ioBuf.DataType = FxRequestBufferUnspecified;
  memset(&ioBuf.u, 0, sizeof(ioBuf.u));
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v11) = 0;
  flags = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v11 = LOWORD(flags->__vftable);
    flags = (FxIoTarget *)((char *)flags - v11);
  }
  if ( flags->m_Type == 4608 )
  {
    pTarget = flags;
  }
  else
  {
    pTarget = 0LL;
    p_pTarget = &pTarget;
    v49 = v11;
    v50 = 0;
    v33 = flags->__vftable;
    v48 = 4608;
    if ( v33->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pTarget) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v34, v35, v36, traceGuid, (const void *)IoTarget, 0x1200u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1200uLL);
    }
    flags = pTarget;
  }
  m_Globals = flags->m_Globals;
  memset(&context.m_CompletionParams.IoStatus, 0, 72);
  context.__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  context.m_RequestType = 1;
  v46.__vftable = (FxSyncRequest_vtbl *)FxObject::`vftable';
  v14 = m_Globals;
  context.m_CompletionParams.Size = 72;
  v46.m_ChildListHead.Blink = &v46.m_ChildListHead;
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
  v46.m_ChildListHead.Flink = &v46.m_ChildListHead;
  v46.m_ChildEntry.Blink = &v46.m_ChildEntry;
  v46.m_ChildEntry.Flink = &v46.m_ChildEntry;
  memset(&context.m_BufferToFreeLength, 0, 19);
  memset(&context.m_BufferToFree, 0, 40);
  context.m_OtherMemory = 0LL;
  *(_DWORD *)&v46.m_Type = 4104;
  v46.m_Globals = m_Globals;
  v46.m_SpinLock.m_Lock = 0LL;
  v46.m_SpinLock.m_DbgFlagIsInitialized = 1;
  v46.m_Refcnt = 1;
  *(_DWORD *)&v46.m_ObjectFlags = 0x10000;
  v46.m_ParentObject = 0LL;
  v46.m_DisposeSingleEntry.Next = 0LL;
  v46.m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    FxObject::Vf_VerifyConstruct(&v46, m_Globals, 1u);
    v14 = v46.m_Globals;
  }
  v46.__vftable = (FxSyncRequest_vtbl *)FxNonPagedObject::`vftable';
  v46.m_NPLock.m_Lock = 0LL;
  v46.m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v46.m_ObjectFlags) < 0 && v14->FxVerifierLock )
  {
    VerifierLock = 0LL;
    FxVerifierLock::CreateAndInitialize(&VerifierLock, v14, &v46);
  }
  v46.m_CsqContext.Irp = (_IRP *)&v46.120;
  v46.m_ListEntry.Flink = (_LIST_ENTRY *)&v46.120;
  v46.__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  *(_DWORD *)&v46.m_RequestBaseStaticFlags = 0x1000000;
  *(_DWORD *)&v46.m_Completed = 1;
  memset(&v46.144, 0, 70);
  v46.m_AllocatedMdl = 0LL;
  memset(&v46.218, 0, 17);
  v46.m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&v46.m_DestroyedEvent.m_Event.m_Event, SynchronizationEvent, 0);
  v46.m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 1;
  v46.m_RequestContext = &context;
  v46.m_ClearContextOnDestroy = 1;
  if ( Request )
  {
    LOWORD(v17) = 0;
    v18 = (FxRequestBase *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Request & 1) != 0 )
    {
      v17 = LOWORD(v18->__vftable);
      v18 = (FxRequestBase *)((char *)v18 - v17);
    }
    if ( v18->m_Type == 4104 )
    {
      v57 = v18;
    }
    else
    {
      v57 = 0LL;
      v51 = &v57;
      v53 = v17;
      v54 = 0;
      v37 = v18->__vftable;
      v52 = 4104;
      if ( v37->QueryInterface(v18, (FxQueryInterfaceParams *)&v51) < 0 )
      {
        WPP_IFR_SF_qDqD(v18->m_Globals, v15, v16, v38, traceGuid, (const void *)Request, 0x1008u, v18, v18->m_Type);
        FxVerifierBugCheckWorker(v18->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
      }
      v18 = v57;
    }
    v46.m_TrueRequest = v18;
    m_RequestContext = v18->m_RequestContext;
    if ( m_RequestContext )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v18);
      v18 = v57;
    }
    v20 = (FxIoContext *)v18->m_RequestContext;
    if ( v20 != &context )
    {
      if ( v20 )
        ((void (__fastcall *)(FxIoContext *, __int64))v20->~FxIoContext)(v20, 1LL);
      v18->m_RequestContext = &context;
      v18 = v57;
    }
    v18->m_RequestBaseFlags |= 0x10u;
  }
  else
  {
    v46.m_RequestBaseFlags |= 0x10u;
    v46.m_TrueRequest = &v46;
  }
  v46.m_ObjectSize = 0;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqD(
      m_Globals,
      v15,
      v16,
      0x1Cu,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      (const void *)IoTarget,
      (const void *)Request,
      v8);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      FxSyncRequest::~FxSyncRequest(&v46);
      FxIoContext::~FxIoContext(&context);
      return 3221225488LL;
    }
  }
  v21 = RequestOptions;
  if ( RequestOptions )
  {
    if ( RequestOptions->Size == 16 )
    {
      v22 = RequestOptions->Flags;
      if ( (v22 & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          v22,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          v22,
          0xFu);
      }
      else
      {
        if ( (v22 & 0xFFFFFFF7) == 0 || (v22 & 8) == 0 )
          goto LABEL_28;
        WPP_IFR_SF_qDd(m_Globals, v22, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, RequestOptions, 8u, v22);
      }
      v40 = -1073741811;
    }
    else
    {
      WPP_IFR_SF_qdd(
        m_Globals,
        2u,
        6u,
        0xAu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        16,
        RequestOptions->Size);
      v40 = -1073741820;
    }
    WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTargetAPI_cpp_Traceguids, v40);
    FxSyncRequest::~FxSyncRequest(&v46);
    FxIoContext::~FxIoContext(&context);
    return v40;
  }
LABEL_28:
  v23 = IoBuffer;
  if ( IoBuffer )
  {
    v31 = FxRequestBuffer::ValidateMemoryDescriptor(&ioBuf, m_Globals, IoBuffer, 0LL);
    v32 = v31;
    if ( v31 < 0 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v23, v31);
      FxSyncRequest::~FxSyncRequest(&v46);
      FxIoContext::~FxIoContext(&context);
      return v32;
    }
  }
  v24 = FxIoTarget::FormatIoRequest(pTarget, v46.m_TrueRequest, v8, &ioBuf, DeviceOffset, _a1);
  v25 = v24;
  if ( v24 < 0 )
  {
    WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x20u, WPP_FxIoTargetAPI_cpp_Traceguids, v8, v24);
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( !v46.m_TrueRequest->m_ObjectSize
        || (m_TrueRequest = (const void *)((unsigned __int64)v46.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      {
        m_TrueRequest = v46.m_TrueRequest;
      }
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxIoTargetAPI_cpp_Traceguids, (const void *)IoTarget, m_TrueRequest);
    }
    v26 = FxIoTarget::SubmitSync(pTarget, v46.m_TrueRequest, v21, 0LL);
    v27 = BytesReturned;
    v25 = v26;
    if ( BytesReturned )
      *BytesReturned = v46.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
  }
  v46.__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  if ( SLOBYTE(v46.m_ObjectFlags) < 0 && _a2 )
    FxTagTracker::UpdateTagHistory(
      _a2,
      0LL,
      129,
      "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp",
      TagRelease,
      v46.m_Refcnt - 1);
  v28 = _InterlockedDecrement(&v46.m_Refcnt);
  if ( !v28 )
    FxObject::FinalRelease(&v46);
  if ( v46.m_TrueRequest == &v46 )
    goto LABEL_39;
  if ( v46.m_ClearContextOnDestroy )
  {
    v46.m_TrueRequest->m_RequestContext = 0LL;
    v46.m_TrueRequest->m_RequestBaseFlags &= ~0x10u;
LABEL_39:
    if ( v46.m_ClearContextOnDestroy )
      v46.m_RequestContext = 0LL;
  }
  if ( v28 )
  {
    if ( v46.m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(v46.m_Globals, 5u, 0xDu, 0xAu, WPP_FxSyncRequest_cpp_Traceguids, &v46, &v46.m_DestroyedEvent);
    FxCREvent::EnterCRAndWaitAndLeave(&v46.m_DestroyedEvent);
    if ( v46.m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(v46.m_Globals, 5u, 0xDu, 0xBu, WPP_FxSyncRequest_cpp_Traceguids, &v46, &v46.m_DestroyedEvent);
  }
  FxRequestBase::~FxRequestBase(&v46, (__int64)v27);
  context.__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  if ( context.m_BufferToFree )
  {
    FxPoolFree(context.m_BufferToFree);
    context.m_BufferToFree = 0LL;
  }
  m_MdlToFree = context.m_MdlToFree;
  context.m_BufferToFreeLength = 0LL;
  context.m_CopyBackToBuffer = 0;
  if ( context.m_MdlToFree )
  {
    if ( context.m_UnlockPages )
    {
      MmUnlockPages(context.m_MdlToFree);
      m_MdlToFree = context.m_MdlToFree;
      context.m_UnlockPages = 0;
    }
    if ( BYTE4(context.m_OriginalMdl[6].StartVa) )
      FxMdlFreeDebug(context.m_DriverGlobals, m_MdlToFree);
    else
      IoFreeMdl(m_MdlToFree);
  }
  return v25;
}
