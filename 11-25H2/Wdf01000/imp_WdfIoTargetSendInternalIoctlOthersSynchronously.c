/*
 * XREFs of imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1400062E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x14000562C (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     ??0FxRequestBuffer@@QEAA@XZ @ 0x140006AE4 (--0FxRequestBuffer@@QEAA@XZ.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x140006B00 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x14002FFF0 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x140031C30 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x140032790 (--1FxSyncRequest@@UEAA@XZ.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_Dd @ 0x140080544 (WPP_IFR_SF_Dd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AFC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqDqqq @ 0x14009AF50 (WPP_IFR_SF_qqDqqq.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetSendInternalIoctlOthersSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        FxVerifierLock *Request,
        unsigned int Ioctl,
        _WDF_MEMORY_DESCRIPTOR *OtherArg1,
        _WDF_MEMORY_DESCRIPTOR *OtherArg2,
        _WDF_MEMORY_DESCRIPTOR *OtherArg4,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  FxRequestBuffer *v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rcx
  FxIoTarget *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _FX_DRIVER_GLOBALS *v17; // rdx
  unsigned __int8 v18; // dl
  unsigned int v19; // r8d
  __int64 v20; // rcx
  unsigned __int16 *v21; // rbx
  __int64 v22; // rcx
  FxInternalIoctlOthersContext *v23; // rcx
  _WDF_MEMORY_DESCRIPTOR *v24; // r13
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // ebx
  _WDF_MEMORY_DESCRIPTOR *v28; // r15
  unsigned int v29; // r15d
  int v30; // eax
  FxIoTarget_vtbl *v32; // rax
  unsigned __int8 v33; // dl
  unsigned int v34; // r8d
  unsigned __int16 v35; // r9
  __int64 v36; // rax
  unsigned __int16 v37; // r9
  KIRQL CurrentIrql; // al
  int v39; // eax
  int v40; // eax
  const void *m_TrueRequest; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  FxVerifierLock *VerifierLock; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v44; // [rsp+68h] [rbp-98h]
  __int16 v45; // [rsp+6Ah] [rbp-96h]
  int v46; // [rsp+6Ch] [rbp-94h]
  unsigned int _a6; // [rsp+70h] [rbp-90h]
  FxIoTarget *pTarget; // [rsp+78h] [rbp-88h] BYREF
  _WDF_MEMORY_DESCRIPTOR *v49; // [rsp+80h] [rbp-80h]
  _WDF_MEMORY_DESCRIPTOR *v50; // [rsp+88h] [rbp-78h]
  FxVerifierLock **p_VerifierLock; // [rsp+90h] [rbp-70h] BYREF
  __int16 v52; // [rsp+98h] [rbp-68h]
  __int16 v53; // [rsp+9Ah] [rbp-66h]
  int v54; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 *v55; // [rsp+A0h] [rbp-60h]
  FxSyncRequest v56; // [rsp+B0h] [rbp-50h] BYREF
  FxInternalIoctlOthersContext context; // [rsp+1E0h] [rbp+E0h] BYREF
  FxRequestBuffer args[3]; // [rsp+250h] [rbp+150h] BYREF

  v9 = args;
  v10 = 3LL;
  v49 = OtherArg2;
  v50 = OtherArg4;
  v55 = BytesReturned;
  _a6 = Ioctl;
  VerifierLock = Request;
  do
  {
    FxRequestBuffer::FxRequestBuffer(v9++);
    --v10;
  }
  while ( v10 );
  v13 = (unsigned __int64)VerifierLock;
  if ( !IoTarget )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v14) = 0;
  flags = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v14 = LOWORD(flags->__vftable);
    flags = (FxIoTarget *)((char *)flags - v14);
  }
  if ( flags->m_Type == 4608 )
  {
    pTarget = flags;
  }
  else
  {
    pTarget = 0LL;
    VerifierLock = (FxVerifierLock *)&pTarget;
    v45 = v14;
    v46 = 0;
    v32 = flags->__vftable;
    v44 = 4608;
    if ( v32->QueryInterface(flags, (FxQueryInterfaceParams *)&VerifierLock) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v33, v34, v35, traceGuid, (const void *)IoTarget, 0x1200u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1200uLL);
    }
    flags = pTarget;
  }
  m_Globals = flags->m_Globals;
  context.m_RequestType = 2;
  memset(&context.m_CompletionParams, 0, 80);
  context.m_CompletionParams.Size = 72;
  context.__vftable = (FxInternalIoctlOthersContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
  v56.__vftable = (FxSyncRequest_vtbl *)FxObject::`vftable';
  *(_DWORD *)&v56.m_Type = 4104;
  v56.m_ChildListHead.Blink = &v56.m_ChildListHead;
  v17 = m_Globals;
  v56.m_Globals = m_Globals;
  v56.m_ChildListHead.Flink = &v56.m_ChildListHead;
  v56.m_ChildEntry.Blink = &v56.m_ChildEntry;
  v56.m_ChildEntry.Flink = &v56.m_ChildEntry;
  *(_OWORD *)context.m_MemoryObjects = 0LL;
  v56.m_SpinLock.m_Lock = 0LL;
  v56.m_SpinLock.m_DbgFlagIsInitialized = 1;
  v56.m_Refcnt = 1;
  *(_DWORD *)&v56.m_ObjectFlags = 0x10000;
  v56.m_ParentObject = 0LL;
  v56.m_DisposeSingleEntry.Next = 0LL;
  v56.m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    FxObject::Vf_VerifyConstruct(&v56, m_Globals, 1u);
    v17 = v56.m_Globals;
  }
  v56.__vftable = (FxSyncRequest_vtbl *)FxNonPagedObject::`vftable';
  v56.m_NPLock.m_Lock = 0LL;
  v56.m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v56.m_ObjectFlags) < 0 && v17->FxVerifierLock )
  {
    VerifierLock = 0LL;
    FxVerifierLock::CreateAndInitialize(&VerifierLock, v17, &v56);
    v50 = (_WDF_MEMORY_DESCRIPTOR *)VerifierLock;
  }
  v56.m_CsqContext.Irp = (_IRP *)&v56.120;
  v56.m_ListEntry.Flink = (_LIST_ENTRY *)&v56.120;
  v56.__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  *(_DWORD *)&v56.m_RequestBaseStaticFlags = 0x1000000;
  *(_DWORD *)&v56.m_Completed = 1;
  memset(&v56.144, 0, 70);
  v56.m_AllocatedMdl = 0LL;
  memset(&v56.218, 0, 17);
  v56.m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&v56.m_DestroyedEvent.m_Event.m_Event, SynchronizationEvent, 0);
  v56.m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 1;
  v56.m_RequestContext = &context;
  v56.m_ClearContextOnDestroy = 1;
  if ( v13 )
  {
    LOWORD(v20) = 0;
    v21 = (unsigned __int16 *)(~v13 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v13 & 1) != 0 )
    {
      v20 = *v21;
      v21 = (unsigned __int16 *)((char *)v21 - v20);
    }
    v18 = 8;
    if ( v21[4] == 4104 )
    {
      VerifierLock = (FxVerifierLock *)v21;
    }
    else
    {
      VerifierLock = 0LL;
      p_VerifierLock = &VerifierLock;
      v54 = 0;
      v36 = *(_QWORD *)v21;
      v52 = 4104;
      v53 = v20;
      if ( (*(int (__fastcall **)(unsigned __int16 *, FxVerifierLock ***))(v36 + 40))(v21, &p_VerifierLock) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v21 + 2),
          v18,
          v19,
          v37,
          traceGuid,
          (const void *)v13,
          0x1008u,
          v21,
          v21[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v21 + 2), WDF_INVALID_HANDLE, v13, 0x1008uLL);
      }
      v21 = (unsigned __int16 *)VerifierLock;
    }
    v56.m_TrueRequest = (FxRequestBase *)v21;
    v22 = *((_QWORD *)v21 + 21);
    if ( v22 )
    {
      (*(void (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v22 + 24LL))(v22, v21);
      v21 = (unsigned __int16 *)VerifierLock;
    }
    v23 = (FxInternalIoctlOthersContext *)*((_QWORD *)v21 + 21);
    if ( v23 != &context )
    {
      if ( v23 )
        ((void (__fastcall *)(FxInternalIoctlOthersContext *, __int64))v23->~FxInternalIoctlOthersContext)(v23, 1LL);
      *((_QWORD *)v21 + 21) = &context;
      v21 = (unsigned __int16 *)VerifierLock;
    }
    *((_BYTE *)v21 + 234) |= 0x10u;
  }
  else
  {
    v56.m_RequestBaseFlags |= 0x10u;
    v56.m_TrueRequest = &v56;
  }
  v56.m_ObjectSize = 0;
  v24 = v49;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqq(
      m_Globals,
      v18,
      v19,
      0x30u,
      traceGuid,
      (const void *)IoTarget,
      (const void *)v13,
      _a6,
      OtherArg1,
      v49,
      v50);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      v27 = -1073741808;
      goto LABEL_38;
    }
  }
  if ( RequestOptions )
  {
    if ( RequestOptions->Size == 16 )
    {
      v25 = RequestOptions->Flags;
      if ( (v25 & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          v25,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          v25,
          0xFu);
      }
      else
      {
        if ( (v25 & 0xFFFFFFF7) == 0 || (v25 & 8) == 0 )
          goto LABEL_30;
        WPP_IFR_SF_qDd(m_Globals, v25, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, RequestOptions, 8u, v25);
      }
      v27 = -1073741811;
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
      v27 = -1073741820;
    }
    WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x31u, WPP_FxIoTargetAPI_cpp_Traceguids, v27);
    goto LABEL_38;
  }
LABEL_30:
  if ( OtherArg1 && (v26 = FxRequestBuffer::ValidateMemoryDescriptor(args, m_Globals, OtherArg1, 0), v27 = v26, v26 < 0) )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x32u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg1, v26);
  }
  else if ( v24 && (v39 = FxRequestBuffer::ValidateMemoryDescriptor(&args[1], m_Globals, v24, 0), v27 = v39, v39 < 0) )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x33u, WPP_FxIoTargetAPI_cpp_Traceguids, v24, v39);
  }
  else
  {
    v28 = v50;
    if ( v50 && (v40 = FxRequestBuffer::ValidateMemoryDescriptor(&args[2], m_Globals, v50, 0), v27 = v40, v40 < 0) )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x34u, WPP_FxIoTargetAPI_cpp_Traceguids, v28, v40);
    }
    else
    {
      v29 = _a6;
      v30 = FxIoTarget::FormatInternalIoctlOthersRequest(pTarget, v56.m_TrueRequest, _a6, args);
      v27 = v30;
      if ( v30 < 0 )
      {
        WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTargetAPI_cpp_Traceguids, v29, v30);
      }
      else
      {
        if ( m_Globals->FxVerboseOn )
        {
          if ( !v56.m_TrueRequest->m_ObjectSize
            || (m_TrueRequest = (const void *)((unsigned __int64)v56.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          {
            m_TrueRequest = v56.m_TrueRequest;
          }
          WPP_IFR_SF_qq(
            m_Globals,
            5u,
            0xEu,
            0x35u,
            WPP_FxIoTargetAPI_cpp_Traceguids,
            (const void *)IoTarget,
            m_TrueRequest);
        }
        v27 = FxIoTarget::SubmitSync(pTarget, v56.m_TrueRequest, RequestOptions, 0LL);
        if ( v55 )
          *v55 = v56.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
      }
    }
  }
LABEL_38:
  FxSyncRequest::~FxSyncRequest(&v56);
  return v27;
}
