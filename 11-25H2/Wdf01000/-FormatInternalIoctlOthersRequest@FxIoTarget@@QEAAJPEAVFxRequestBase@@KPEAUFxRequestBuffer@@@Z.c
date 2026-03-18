/*
 * XREFs of ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x140006B00
 * Callers:
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140005CF0 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x140005E70 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1400062E0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x14002E110 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall FxIoTarget::FormatInternalIoctlOthersRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        FxRequestBuffer *Buffers)
{
  _IRP *m_Irp; // rbx
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  CCHAR m_TargetStackSize; // cl
  FxRequestContext *v12; // r14
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *v14; // rax
  FxRequestContext *v15; // rax
  FxRequestContext *v16; // rcx
  IFxMemory *Memory; // rax
  IFxMemory *v18; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v20; // ebp
  _IO_STACK_LOCATION *v21; // rcx
  __int64 v22; // rbx
  FxRequestBufferType DataType; // ecx
  void **v24; // r14
  __int32 v25; // ecx
  __int32 v26; // ecx
  __int32 v27; // ecx
  IFxMemory *v28; // rax
  __int64 (*GetBuffer)(void); // rax
  _FX_DRIVER_GLOBALS *v30; // rax
  _IRP *Irp; // rcx
  _IRP *v33; // rax
  _IRP *_a1; // rbx
  _FX_DRIVER_GLOBALS *v35; // rcx
  FxRequestBase *_a2; // rax
  __int64 v37; // r8
  __int64 v38; // r8
  char *MappedSystemVa; // rax
  _WDFMEMORY_OFFSET *Offsets; // rcx
  unsigned int _a3; // ebx
  const void *v42; // rsi
  FxRequestBase *v43; // rax
  unsigned __int16 v44; // r9
  const void *v45; // rsi
  _MDL *Mdl; // rcx
  IFxMemory *v47; // rcx
  PVOID v48; // rax
  FxPoolTypeOrPoolFlags v49; // [rsp+40h] [rbp-68h] BYREF
  void **bufs[3]; // [rsp+50h] [rbp-58h]
  void *retaddr; // [rsp+A8h] [rbp+0h]

  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      ((void (__fastcall *)(FxRequestContext *))m_RequestContext->ReleaseAndRestore)(m_RequestContext);
      m_Globals = Request->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerifierIO )
          FxRequestBase::ClearVerifierFlags(Request, 128);
      }
    }
  }
  m_TargetStackSize = this->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    _a3 = -1073741436;
    if ( this->m_ObjectSize )
      v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v42 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v42, -1073741436);
    return _a3;
  }
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation > m_TargetStackSize )
      goto LABEL_7;
    if ( Request->m_IrpAllocation != 1 )
    {
      _a3 = -1073741616;
      if ( this->m_ObjectSize )
        v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v45 = 0LL;
      if ( !Request->m_ObjectSize || (v43 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v43 = Request;
      v44 = 13;
LABEL_66:
      WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v44, WPP_FxRequestBase_cpp_Traceguids, v43, v45, _a3);
      return _a3;
    }
  }
  Irp = IoAllocateIrp(m_TargetStackSize, 0);
  if ( !Irp )
  {
    _a3 = -1073741670;
    if ( this->m_ObjectSize )
      v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v45 = 0LL;
    if ( !Request->m_ObjectSize || (v43 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      v43 = Request;
    v44 = 12;
    goto LABEL_66;
  }
  v33 = Request->m_Irp.m_Irp;
  _a1 = 0LL;
  Request->m_Irp.m_Irp = Irp;
  Request->m_Completed = 0;
  if ( v33 && v33 != Irp && Request->m_IrpAllocation == 1 )
    _a1 = v33;
  Request->m_IrpAllocation = 1;
  if ( _a1 )
  {
    v35 = Request->m_Globals;
    if ( v35->FxVerboseOn )
    {
      if ( !Request->m_ObjectSize || (_a2 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        _a2 = Request;
      WPP_IFR_SF_qq(v35, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2);
    }
    IoFreeIrp(_a1);
  }
LABEL_7:
  v12 = Request->m_RequestContext;
  if ( !v12 || v12->m_RequestType != 2 )
  {
    v13 = this->m_Globals;
    v14 = retaddr;
    *(_QWORD *)&v49.UsePoolType = 0LL;
    v49.u.PoolFlags = 64LL;
    if ( !v13->FxPoolTrackingOn )
      v14 = 0LL;
    v15 = (FxRequestContext *)FxPoolAllocator(v13, &v13->FxPoolFrameworks, &v49, 0x70uLL, v13->Tag, v14);
    v12 = v15;
    if ( !v15 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x35u, WPP_FxIoTarget_cpp_Traceguids);
      return 3221225626LL;
    }
    v15->m_RequestMemory = 0LL;
    v15->m_RequestType = 2;
    memset(&v15->m_CompletionParams, 0, sizeof(v15->m_CompletionParams));
    v12->m_CompletionParams.Size = 72;
    v12->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v12->__vftable = (FxRequestContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
    *(_OWORD *)&v12[1].__vftable = 0LL;
    v16 = Request->m_RequestContext;
    if ( v16 != v12 )
    {
      if ( v16 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v16->~FxRequestContext)(v16, 1LL);
      Request->m_RequestContext = v12;
    }
  }
  v12->StoreAndReferenceMemory(v12, Buffers);
  if ( Buffers[1].DataType == FxRequestBufferMemory )
  {
    v37 = 130LL;
  }
  else
  {
    if ( Buffers[1].DataType != FxRequestBufferReferencedMdl )
    {
      Memory = 0LL;
      goto LABEL_19;
    }
    v37 = 135LL;
  }
  Buffers[1].u.Memory.Memory->AddRef(
    Buffers[1].u.Memory.Memory,
    v12,
    v37,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  Memory = Buffers[1].u.Memory.Memory;
LABEL_19:
  v12[1].__vftable = (FxRequestContext_vtbl *)Memory;
  if ( Buffers[2].DataType == FxRequestBufferMemory )
  {
    v38 = 130LL;
LABEL_51:
    Buffers[2].u.Memory.Memory->AddRef(
      Buffers[2].u.Memory.Memory,
      v12,
      v38,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    v18 = Buffers[2].u.Memory.Memory;
    goto LABEL_22;
  }
  if ( Buffers[2].DataType == FxRequestBufferReferencedMdl )
  {
    v38 = 135LL;
    goto LABEL_51;
  }
  v18 = 0LL;
LABEL_22:
  *(_QWORD *)&v12[1].m_CompletionParams.Size = v18;
  CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
  CurrentStackLocation[-1].FileObject = 0LL;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
  if ( !Request->m_IrpAllocation )
  {
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  }
  if ( !this->m_InStack )
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
  v20 = 0;
  v21 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  bufs[0] = &v21[-1].Parameters.Others.Argument1;
  bufs[1] = &v21[-1].Parameters.QueryEa.EaList;
  bufs[2] = &v21[-1].Parameters.SetFile.DeleteHandle;
  while ( v20 < 3 )
  {
    v22 = v20;
    DataType = Buffers[v22].DataType;
    v24 = bufs[v20];
    if ( DataType )
    {
      v25 = DataType - 1;
      if ( !v25 )
      {
        GetBuffer = (__int64 (*)(void))Buffers[v22].u.Memory.Memory->GetBuffer;
        if ( Buffers[v22].u.Memory.Offsets )
        {
          MappedSystemVa = (char *)GetBuffer();
          Offsets = Buffers[v22].u.Memory.Offsets;
LABEL_56:
          v28 = (IFxMemory *)&MappedSystemVa[Offsets->BufferOffset];
        }
        else
        {
          v28 = (IFxMemory *)GetBuffer();
        }
LABEL_33:
        *v24 = v28;
        goto LABEL_34;
      }
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( !v27 )
        {
          v28 = Buffers[v22].u.Memory.Memory;
          goto LABEL_33;
        }
        if ( v27 != 1 )
        {
          _a3 = -1073741811;
          goto LABEL_100;
        }
        Mdl = Buffers[v22].u.RefMdl.Mdl;
        if ( (Mdl->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)Mdl->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                     Mdl,
                                     0,
                                     MmCached,
                                     0LL,
                                     0,
                                     ExDefaultMdlProtection | 0x40000010);
        *v24 = MappedSystemVa;
        if ( !MappedSystemVa )
          goto LABEL_99;
        Offsets = Buffers[v22].u.Memory.Offsets;
        if ( Offsets )
          goto LABEL_56;
      }
      else
      {
        v47 = Buffers[v22].u.Memory.Memory;
        if ( (BYTE2(v47[1].__vftable) & 5) != 0 )
          v48 = v47[3].__vftable;
        else
          v48 = MmMapLockedPagesSpecifyCache((PMDL)v47, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
        *v24 = v48;
        if ( !v48 )
        {
LABEL_99:
          _a3 = -1073741670;
LABEL_100:
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTarget_cpp_Traceguids, v20 + 1, _a3);
          FxRequestBase::ContextReleaseAndRestore(Request);
          return _a3;
        }
      }
    }
    else
    {
      *v24 = 0LL;
    }
LABEL_34:
    ++v20;
  }
  v30 = Request->m_Globals;
  if ( v30->FxVerifierOn && v30->FxVerifierIO )
    FxRequestBase::SetVerifierFlags(Request, 128);
  return 0LL;
}
