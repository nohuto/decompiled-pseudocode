/*
 * XREFs of FxIoTargetSendIoctl @ 0x14002E630
 * Callers:
 *     imp_WdfIoTargetSendIoctlSynchronously @ 0x14002E5D0 (imp_WdfIoTargetSendIoctlSynchronously.c)
 *     imp_WdfIoTargetSendInternalIoctlSynchronously @ 0x140074580 (imp_WdfIoTargetSendInternalIoctlSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x14000562C (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x14002EF20 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x14002FFF0 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x140031C30 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x140032790 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1400343DC (--1FxIoContext@@UEAA@XZ.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_Dd @ 0x140080544 (WPP_IFR_SF_Dd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AFC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x140082EE4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqdd @ 0x140086788 (WPP_IFR_SF_qqdd.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxIoTargetSendIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  __int64 v12; // rcx
  FxIoTarget *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _FX_DRIVER_GLOBALS *v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 *v17; // rbx
  __int64 v18; // rcx
  FxIoContext *v19; // rcx
  unsigned __int8 v20; // r15
  _WDF_REQUEST_SEND_OPTIONS *v21; // rsi
  unsigned int v22; // edx
  _WDF_MEMORY_DESCRIPTOR *v23; // rbx
  int v24; // r12d
  int v25; // eax
  unsigned int v26; // ebx
  _MDL *m_MdlToFree; // rcx
  unsigned __int16 v29; // r9
  FxIoTarget_vtbl *v30; // rax
  unsigned __int8 v31; // dl
  unsigned int v32; // r8d
  unsigned __int16 v33; // r9
  __int64 v34; // rax
  unsigned __int8 v35; // dl
  unsigned int v36; // r8d
  unsigned __int16 v37; // r9
  KIRQL CurrentIrql; // al
  const void *m_TrueRequest; // rax
  FxRequestBuffer *v40; // [rsp+20h] [rbp-E0h]
  FxFileObject *_a2; // [rsp+30h] [rbp-D0h]
  void *p_pTarget; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v43; // [rsp+58h] [rbp-A8h]
  __int16 v44; // [rsp+5Ah] [rbp-A6h]
  int v45; // [rsp+5Ch] [rbp-A4h]
  FxSyncRequest v46; // [rsp+60h] [rbp-A0h] BYREF
  FxIoContext context; // [rsp+190h] [rbp+90h] BYREF
  FxRequestBuffer outputBuf; // [rsp+240h] [rbp+140h] BYREF
  FxRequestBuffer inputBuf; // [rsp+260h] [rbp+160h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+2C0h] [rbp+1C0h] BYREF
  FxIoTarget *pTarget; // [rsp+2C8h] [rbp+1C8h] BYREF

  inputBuf.DataType = FxRequestBufferUnspecified;
  outputBuf.DataType = FxRequestBufferUnspecified;
  memset(&inputBuf.u, 0, sizeof(inputBuf.u));
  memset(&outputBuf.u, 0, sizeof(outputBuf.u));
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v12) = 0;
  flags = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v12 = LOWORD(flags->__vftable);
    flags = (FxIoTarget *)((char *)flags - v12);
  }
  if ( flags->m_Type == 4608 )
  {
    pTarget = flags;
  }
  else
  {
    pTarget = 0LL;
    p_pTarget = &pTarget;
    v44 = v12;
    v45 = 0;
    v30 = flags->__vftable;
    v43 = 4608;
    if ( v30->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pTarget) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v31,
        v32,
        v33,
        (const _GUID *)v40,
        (const void *)IoTarget,
        0x1200u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1200uLL);
    }
    flags = pTarget;
  }
  m_Globals = flags->m_Globals;
  memset(&context.m_CompletionParams.IoStatus, 0, 72);
  context.__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  v46.__vftable = (FxSyncRequest_vtbl *)FxObject::`vftable';
  v15 = m_Globals;
  context.m_RequestType = 1;
  v46.m_ChildListHead.Blink = &v46.m_ChildListHead;
  context.m_CompletionParams.Size = 72;
  v46.m_ChildListHead.Flink = &v46.m_ChildListHead;
  v46.m_ChildEntry.Blink = &v46.m_ChildEntry;
  v46.m_ChildEntry.Flink = &v46.m_ChildEntry;
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
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
    v15 = v46.m_Globals;
  }
  v46.__vftable = (FxSyncRequest_vtbl *)FxNonPagedObject::`vftable';
  v46.m_NPLock.m_Lock = 0LL;
  v46.m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v46.m_ObjectFlags) < 0 && v15->FxVerifierLock )
  {
    VerifierLock = 0LL;
    FxVerifierLock::CreateAndInitialize(&VerifierLock, v15, &v46);
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
    LOWORD(v16) = 0;
    v17 = (unsigned __int16 *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Request & 1) != 0 )
    {
      v16 = *v17;
      v17 = (unsigned __int16 *)((char *)v17 - v16);
    }
    if ( v17[4] == 4104 )
    {
      VerifierLock = (FxVerifierLock *)v17;
    }
    else
    {
      VerifierLock = 0LL;
      p_pTarget = &VerifierLock;
      v45 = 0;
      v34 = *(_QWORD *)v17;
      v43 = 4104;
      v44 = v16;
      if ( (*(int (__fastcall **)(unsigned __int16 *, void **))(v34 + 40))(v17, &p_pTarget) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v17 + 2),
          v35,
          v36,
          v37,
          (const _GUID *)v40,
          (const void *)Request,
          0x1008u,
          v17,
          v17[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v17 + 2), WDF_INVALID_HANDLE, Request, 0x1008uLL);
      }
      v17 = (unsigned __int16 *)VerifierLock;
    }
    v46.m_TrueRequest = (FxRequestBase *)v17;
    v18 = *((_QWORD *)v17 + 21);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v18 + 24LL))(v18, v17);
      v17 = (unsigned __int16 *)VerifierLock;
    }
    v19 = (FxIoContext *)*((_QWORD *)v17 + 21);
    if ( v19 != &context )
    {
      if ( v19 )
        ((void (__fastcall *)(FxIoContext *, __int64))v19->~FxIoContext)(v19, 1LL);
      *((_QWORD *)v17 + 21) = &context;
      v17 = (unsigned __int16 *)VerifierLock;
    }
    *((_BYTE *)v17 + 234) |= 0x10u;
  }
  else
  {
    v46.m_RequestBaseFlags |= 0x10u;
    v46.m_TrueRequest = &v46;
  }
  v46.m_ObjectSize = 0;
  v20 = Internal;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqdd(
      m_Globals,
      5u,
      0xEu,
      0x25u,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      (const void *)IoTarget,
      (const void *)Request,
      Ioctl,
      Internal);
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    v21 = RequestOptions;
    if ( !RequestOptions )
      goto LABEL_28;
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
        {
LABEL_28:
          v23 = InputBuffer;
          if ( InputBuffer )
          {
            v24 = FxRequestBuffer::ValidateMemoryDescriptor(&inputBuf, m_Globals, InputBuffer, 0);
            if ( v24 < 0 )
            {
              v29 = 39;
              goto LABEL_42;
            }
          }
          v23 = OutputBuffer;
          if ( OutputBuffer )
          {
            v24 = FxRequestBuffer::ValidateMemoryDescriptor(&outputBuf, m_Globals, OutputBuffer, 0);
            if ( v24 < 0 )
            {
              v29 = 40;
LABEL_42:
              WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, v29, WPP_FxIoTargetAPI_cpp_Traceguids, v23, v24);
              FxSyncRequest::~FxSyncRequest(&v46);
              FxIoContext::~FxIoContext(&context);
              return (unsigned int)v24;
            }
          }
          v25 = FxIoTarget::FormatIoctlRequest(pTarget, v46.m_TrueRequest, Ioctl, v20, &inputBuf, &outputBuf, _a2);
          v26 = v25;
          if ( v25 < 0 )
          {
            WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxIoTargetAPI_cpp_Traceguids, Ioctl, v25);
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
              WPP_IFR_SF_qq(
                m_Globals,
                5u,
                0xEu,
                0x29u,
                WPP_FxIoTargetAPI_cpp_Traceguids,
                (const void *)IoTarget,
                m_TrueRequest);
            }
            v26 = FxIoTarget::SubmitSync(pTarget, v46.m_TrueRequest, v21, 0LL);
            if ( BytesReturned )
              *BytesReturned = v46.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
          }
          FxSyncRequest::~FxSyncRequest(&v46);
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
          return v26;
        }
        WPP_IFR_SF_qDd(m_Globals, v22, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, RequestOptions, 8u, v22);
      }
      v26 = -1073741811;
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
      v26 = -1073741820;
    }
    WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x26u, WPP_FxIoTargetAPI_cpp_Traceguids, v26);
    FxSyncRequest::~FxSyncRequest(&v46);
    FxIoContext::~FxIoContext(&context);
    return v26;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  FxVerifierDbgBreakPoint(m_Globals);
  FxSyncRequest::~FxSyncRequest(&v46);
  FxIoContext::~FxIoContext(&context);
  return 3221225488LL;
}
