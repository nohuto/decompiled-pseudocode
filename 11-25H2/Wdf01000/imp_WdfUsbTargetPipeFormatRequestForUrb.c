/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x140003720
 * Callers:
 *     <none>
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x140003F80 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x140003FF4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x140039FFC (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qqq @ 0x14004D358 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qid @ 0x140056218 (WPP_IFR_SF_qid.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe,
        unsigned __int64 Request,
        unsigned __int64 UrbMemory,
        _MDL *UrbOffsets)
{
  const void *v8; // rsi
  FxRequest *flags; // rbx
  __int64 v10; // rcx
  FxUsbPipe *m_Globals; // r10
  __int64 v12; // rcx
  _FX_DRIVER_GLOBALS **v13; // rdi
  __int64 v14; // rcx
  FxRequestBase *v15; // rbx
  unsigned __int64 v16; // rax
  _WDFMEMORY_OFFSET *v17; // rbx
  __int64 v18; // rax
  FxRequest *v19; // r15
  FxRequestBase *v20; // rdi
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rbx
  _FX_DRIVER_GLOBALS *v23; // rax
  CCHAR m_ForwardProgressQueue; // cl
  FxRequestContext *v25; // rbx
  _FX_DRIVER_GLOBALS *v26; // rcx
  void *v27; // rax
  FxUsbRequestContext *v28; // rax
  WDFMEMORY__ *Buffer; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v31; // rcx
  _FX_DRIVER_GLOBALS *v32; // rax
  unsigned int v33; // ebx
  FxRequestContext *v34; // rcx
  _FX_DRIVER_GLOBALS *v35; // rsi
  PIRP Irp; // rax
  _IRP *v38; // rbx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rbx
  FxRequest_vtbl *v41; // rax
  unsigned __int8 v42; // dl
  unsigned int v43; // r8d
  unsigned __int16 v44; // r9
  _FX_DRIVER_GLOBALS *v45; // rax
  unsigned __int8 v46; // dl
  unsigned int v47; // r8d
  unsigned __int16 v48; // r9
  FxRequestBase_vtbl *v49; // rax
  unsigned __int8 v50; // dl
  unsigned int v51; // r8d
  unsigned __int16 v52; // r9
  _FX_DRIVER_GLOBALS *v53; // rcx
  const void *v54; // rax
  const void *v55; // rax
  unsigned __int16 v56; // r9
  __int64 v57; // rax
  const _GUID *traceGuid; // [rsp+28h] [rbp-61h]
  _QWORD *p_pRequest; // [rsp+58h] [rbp-31h] BYREF
  IFxMemory *pMemory; // [rsp+60h] [rbp-29h]
  _FX_DRIVER_GLOBALS **v61; // [rsp+68h] [rbp-21h] BYREF
  FxUsbPipe *pUsbPipe; // [rsp+70h] [rbp-19h]
  FxRequest *pRequest; // [rsp+78h] [rbp-11h] BYREF
  FxRequestBase *v64; // [rsp+80h] [rbp-9h] BYREF
  __int64 v65; // [rsp+88h] [rbp-1h] BYREF
  FxRequestBuffer buf; // [rsp+90h] [rbp+7h] BYREF
  __int64 v67; // [rsp+B0h] [rbp+27h]
  void *retaddr; // [rsp+E0h] [rbp+57h]
  char m_ParentObject; // [rsp+F0h] [rbp+67h]

  v67 = 0LL;
  *(_OWORD *)&buf.u.RefMdl.Offsets = 0LL;
  if ( !Pipe )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1203uLL);
  v8 = 0LL;
  flags = (FxRequest *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (Pipe & 1) != 0 )
  {
    v10 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v10);
  }
  if ( flags->m_Type == 4611 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    WORD1(pMemory) = v10;
    HIDWORD(pMemory) = 0;
    v41 = flags->__vftable;
    LOWORD(pMemory) = 4611;
    if ( v41->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v42, v43, v44, traceGuid, (const void *)Pipe, 0x1203u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Pipe, 0x1203uLL);
    }
    flags = pRequest;
  }
  m_Globals = (FxUsbPipe *)flags->m_Globals;
  pUsbPipe = m_Globals;
  if ( LOBYTE(m_Globals->m_IoCount) )
  {
    WPP_IFR_SF_qqq(
      (_FX_DRIVER_GLOBALS *)m_Globals,
      5u,
      0xEu,
      0x29u,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      (const void *)Pipe,
      (const void *)Request,
      (const void *)UrbMemory);
    m_Globals = pUsbPipe;
  }
  if ( !UrbMemory )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)m_Globals, WDF_INVALID_HANDLE, 0LL, 0x100AuLL);
  LOWORD(v12) = 0;
  v13 = (_FX_DRIVER_GLOBALS **)(~UrbMemory & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (UrbMemory & 1) != 0 )
  {
    v12 = *(unsigned __int16 *)v13;
    v13 = (_FX_DRIVER_GLOBALS **)((char *)v13 - v12);
  }
  if ( *((_WORD *)v13 + 4) == 4106 )
  {
    v61 = v13;
  }
  else
  {
    v61 = 0LL;
    p_pRequest = &v61;
    WORD1(pMemory) = v12;
    HIDWORD(pMemory) = 0;
    v45 = *v13;
    LOWORD(pMemory) = 4106;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, _QWORD **))v45->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           v13,
           &p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        v13[2],
        v46,
        v47,
        v48,
        traceGuid,
        (const void *)UrbMemory,
        0x100Au,
        v13,
        *((unsigned __int16 *)v13 + 4));
      FxVerifierBugCheckWorker(v13[2], WDF_INVALID_HANDLE, UrbMemory, 0x100AuLL);
    }
    v13 = v61;
    m_Globals = pUsbPipe;
  }
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v14) = 0;
  v15 = (FxRequestBase *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v14 = LOWORD(v15->__vftable);
    v15 = (FxRequestBase *)((char *)v15 - v14);
  }
  if ( v15->m_Type == 4104 )
  {
    v64 = v15;
  }
  else
  {
    v64 = 0LL;
    p_pRequest = &v64;
    WORD1(pMemory) = v14;
    HIDWORD(pMemory) = 0;
    v49 = v15->__vftable;
    LOWORD(pMemory) = 4104;
    if ( v49->QueryInterface(v15, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(v15->m_Globals, v50, v51, v52, traceGuid, (const void *)Request, 0x1008u, v15, v15->m_Type);
      FxVerifierBugCheckWorker(v15->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    v13 = v61;
  }
  if ( UrbOffsets )
  {
    v39 = *(_QWORD *)&UrbOffsets->Size;
    v40 = (unsigned __int64)UrbOffsets->Next + v39;
    if ( v40 < v39 || v40 > ((__int64 (__fastcall *)(_FX_DRIVER_GLOBALS **))(*v13)->Linkage.Blink)(v13) )
      return 3221225621LL;
    v16 = ((__int64 (__fastcall *)(_FX_DRIVER_GLOBALS **))(*v61)->Linkage.Blink)(v61);
    if ( UrbOffsets->Next )
      v16 -= (unsigned __int64)UrbOffsets->Next;
  }
  else
  {
    v16 = ((__int64 (__fastcall *)(_FX_DRIVER_GLOBALS **))(*v13)->Linkage.Blink)(v13);
  }
  if ( v16 >= 0x18 )
  {
    v17 = (_WDFMEMORY_OFFSET *)v61;
    v18 = (*(__int64 (__fastcall **)(_FX_DRIVER_GLOBALS **))&(*v61)->Refcnt)(v61);
    buf.u.Memory.Offsets = v17;
    buf.u.RefMdl.Mdl = UrbOffsets;
    if ( v18 )
    {
      LODWORD(buf.u.Memory.Memory) = 4;
      v67 = v18;
    }
    else
    {
      LODWORD(buf.u.Memory.Memory) = 1;
    }
    v19 = pRequest;
    v20 = v64;
    m_RequestContext = v64->m_RequestContext;
    m_Irp = v64->m_Irp.m_Irp;
    p_pRequest = (_QWORD *)pRequest[1].m_SpinLock.m_Lock;
    m_ParentObject = (char)pRequest[1].m_ParentObject;
    if ( m_RequestContext )
    {
      if ( m_Irp )
      {
        m_RequestContext->ReleaseAndRestore(m_RequestContext, v64);
        v23 = v20->m_Globals;
        if ( v23->FxVerifierOn )
        {
          if ( v23->FxVerifierIO )
            FxRequestBase::ClearVerifierFlags(v20, 128);
        }
      }
    }
    m_ForwardProgressQueue = (CCHAR)v19->m_ForwardProgressQueue;
    if ( m_ForwardProgressQueue )
    {
      if ( !m_Irp )
        goto LABEL_44;
      if ( m_Irp->CurrentLocation > m_ForwardProgressQueue )
        goto LABEL_29;
      if ( v20->m_IrpAllocation == 1 )
      {
LABEL_44:
        Irp = IoAllocateIrp(m_ForwardProgressQueue, 0);
        if ( Irp )
        {
          v38 = v20->m_Irp.m_Irp;
          v20->m_Irp.m_Irp = Irp;
          v20->m_Completed = 0;
          if ( v38 && v38 != Irp && v20->m_IrpAllocation == 1 )
          {
            v20->m_IrpAllocation = 1;
            v53 = v20->m_Globals;
            if ( v53->FxVerboseOn )
            {
              if ( !v20->m_ObjectSize || (v54 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                v54 = v20;
              WPP_IFR_SF_qq(v53, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v38, v54);
            }
            IoFreeIrp(v38);
          }
          else
          {
            v20->m_IrpAllocation = 1;
          }
LABEL_29:
          v25 = v20->m_RequestContext;
          if ( !v25 || v25->m_RequestType != 17 )
          {
            v26 = v19->m_Globals;
            v65 = 0LL;
            *(_QWORD *)&buf.DataType = 64LL;
            if ( v26->FxPoolTrackingOn )
              v27 = retaddr;
            else
              v27 = 0LL;
            v28 = (FxUsbRequestContext *)FxPoolAllocator(
                                           v26,
                                           &v26->FxPoolFrameworks,
                                           (FxPoolTypeOrPoolFlags *)&v65,
                                           0x88uLL,
                                           v26->Tag,
                                           v27);
            v25 = v28;
            if ( !v28 )
            {
              v33 = -1073741670;
LABEL_40:
              v35 = (_FX_DRIVER_GLOBALS *)pUsbPipe;
              goto LABEL_41;
            }
            FxUsbRequestContext::FxUsbRequestContext(v28, 0x11u);
            v25[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
            v25->__vftable = (FxRequestContext_vtbl *)FxUsbUrbContext::`vftable';
            FxRequestBase::SetContext(v20, v25);
          }
          v25->StoreAndReferenceMemory(v25, (FxRequestBuffer *)&buf.u);
          Buffer = v25[1].m_CompletionParams.Parameters.Write.Buffer;
          CurrentStackLocation = v20->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
          *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
          *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
          CurrentStackLocation[-1].FileObject = 0LL;
          v20->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
          v20->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
          v31 = v20->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          if ( m_ParentObject == 1 && (unsigned int)(*((_DWORD *)p_pRequest + 54) - 1538) <= 0xFFFFF9FC )
            v31[-1].FileObject = (_FILE_OBJECT *)Buffer;
          v31[-1].Parameters.WMI.ProviderId = (unsigned __int64)Buffer;
          v32 = v20->m_Globals;
          if ( v32->FxVerifierOn && v32->FxVerifierIO )
            FxRequestBase::SetVerifierFlags(v20, 128);
          v33 = 0;
          v34 = v64->m_RequestContext;
          v34->m_CompletionParams.Type = WdfRequestTypeUsb;
          v34->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&v34[1];
          HIDWORD(v34[1].__vftable) = 9;
          *(_QWORD *)&v34[1].m_CompletionParams.Size = UrbMemory;
          goto LABEL_40;
        }
        v33 = -1073741670;
        if ( v19->m_ObjectSize )
          v8 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v20->m_ObjectSize || (v55 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          v55 = v20;
        v56 = 12;
      }
      else
      {
        v33 = -1073741616;
        if ( v19->m_ObjectSize )
          v8 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v20->m_ObjectSize || (v55 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          v55 = v20;
        v56 = 13;
      }
      WPP_IFR_SF_qqd(v20->m_Globals, 2u, 0xEu, v56, WPP_FxRequestBase_cpp_Traceguids, v55, v8, v33);
    }
    else
    {
      v33 = -1073741436;
      if ( v19->m_ObjectSize )
        v8 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qd(v20->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v8, -1073741436);
    }
    v35 = (_FX_DRIVER_GLOBALS *)pUsbPipe;
    if ( !LOBYTE(pUsbPipe->m_IoCount) )
      return v33;
    WPP_IFR_SF_qqd((_FX_DRIVER_GLOBALS *)pUsbPipe, 5u, 0xEu, 0xAu, WPP_usbutil_cpp_Traceguids, v19, v20, v33);
LABEL_41:
    if ( v35->FxVerboseOn )
      WPP_IFR_SF_qqqd(
        v35,
        5u,
        0xEu,
        0x2Bu,
        WPP_FxUsbPipeAPI_cpp_Traceguids,
        (const void *)Pipe,
        (const void *)Request,
        (const void *)UrbMemory,
        v33);
    return v33;
  }
  v57 = ((__int64 (__fastcall *)(_FX_DRIVER_GLOBALS **))(*v61)->Linkage.Blink)(v61);
  WPP_IFR_SF_qid(
    (_FX_DRIVER_GLOBALS *)pUsbPipe,
    2u,
    0xEu,
    0x2Au,
    WPP_FxUsbPipeAPI_cpp_Traceguids,
    (const void *)UrbMemory,
    v57,
    -1073741811);
  return 3221225485LL;
}
