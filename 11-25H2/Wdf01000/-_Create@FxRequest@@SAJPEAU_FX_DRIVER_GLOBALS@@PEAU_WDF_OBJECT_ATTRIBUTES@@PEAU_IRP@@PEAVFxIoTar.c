/*
 * XREFs of ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x140035320
 * Callers:
 *     imp_WdfRequestCreateFromIrp @ 0x140067DD0 (imp_WdfRequestCreateFromIrp.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x14007B9BC (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14002C940 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x140036F9C (WPP_IFR_SF_DDid.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?DetectExcessiveAllocation@FxObject@@AEAAXXZ @ 0x140037800 (-DetectExcessiveAllocation@FxObject@@AEAAXXZ.c)
 *     ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x1400638B4 (-SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x14007F2E4 (WPP_IFR_SF_qLqd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AFC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall FxRequest::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        unsigned __int64 Target,
        unsigned int Ownership,
        FxRequestConstructorCaller Caller,
        FxRequest **Request)
{
  int id; // ebx
  int result; // eax
  __int64 v13; // r8
  unsigned __int16 v14; // r9
  unsigned __int64 flags; // rdx
  unsigned int Tag; // r14d
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v18; // rdi
  bool v19; // zf
  void *v20; // rax
  _OWORD *v21; // rax
  _FX_DRIVER_GLOBALS *v22; // rdx
  FxRequest *v23; // rbx
  FxVerifierLock *Driver; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v25; // rax
  unsigned __int64 ContextSizeOverride; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _IRP *m_Irp; // rax
  FxRequestContext *m_RequestContext; // rcx
  _IRP *v30; // rdi
  _FX_DRIVER_GLOBALS *v31; // rax
  CCHAR v32; // cl
  int v33; // edi
  unsigned __int64 ParentObject; // r14
  __int64 m_Globals_low; // rcx
  __int64 m_ObjectSize; // rax
  char *v37; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  const void **v40; // rax
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rax
  PIRP v43; // rax
  _IRP *v44; // r14
  _FX_DRIVER_GLOBALS *v45; // rax
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  KIRQL v47; // al
  unsigned __int8 v48; // dl
  unsigned int v49; // r8d
  unsigned __int16 v50; // r9
  KIRQL v51; // al
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  _FX_DRIVER_GLOBALS *v54; // rcx
  const void *v55; // rax
  unsigned __int16 v56; // ax
  const void *v57; // r15
  __int64 v58; // rax
  const void *v59; // r15
  const void *v60; // rax
  unsigned __int16 v61; // r9
  _FX_DRIVER_GLOBALS *v62; // rdx
  unsigned __int16 v63; // ax
  unsigned __int8 v64; // r8
  const _GUID *_a4; // [rsp+20h] [rbp-78h]
  const _GUID *_a4a; // [rsp+20h] [rbp-78h]
  FxVerifierLock *VerifierLock[2]; // [rsp+50h] [rbp-48h] BYREF
  FxPoolTypeOrPoolFlags v68; // [rsp+60h] [rbp-38h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  id = 0;
  *Request = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, RequestAttributes, 0);
  if ( result < 0 )
    return result;
  flags = 0LL;
  Tag = FxDriverGlobals->Tag;
  v68.u.PoolFlags = 64LL;
  if ( !RequestAttributes || (ContextTypeInfo = RequestAttributes->ContextTypeInfo) == 0LL )
  {
LABEL_6:
    v18 = 416LL;
    if ( !flags )
      goto LABEL_7;
    goto LABEL_60;
  }
  flags = RequestAttributes->ContextSizeOverride;
  if ( !flags )
  {
    flags = ContextTypeInfo->ContextSize;
    goto LABEL_6;
  }
LABEL_60:
  v41 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v41 < flags )
    goto LABEL_64;
  v18 = v41 + 416;
  v42 = v18;
  if ( v18 < 0x1A0 )
  {
    v18 = -1LL;
    id = v42 < 0x1A0 ? 0xC0000095 : 0;
    goto LABEL_63;
  }
  id = v18 < 0x1A0 ? 0xC0000095 : 0;
LABEL_7:
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    v52 = v18 + 48;
    v53 = v18;
    v13 = -1LL;
    if ( v18 + 48 >= v18 )
      v13 = v18 + 48;
    v18 = v13;
    id = v52 < v53 ? 0xC0000095 : 0;
  }
  if ( id < 0 )
  {
LABEL_63:
    WPP_IFR_SF_DDid(FxDriverGlobals, flags, v13, v14, _a4, 0x168u, 0, flags, id);
    if ( id < 0 )
      goto LABEL_64;
  }
  v19 = FxDriverGlobals->FxPoolTrackingOn == 0;
  *(_QWORD *)&v68.UsePoolType = 0LL;
  v68.u.PoolFlags = 64LL;
  if ( v19 )
    v20 = 0LL;
  else
    v20 = retaddr;
  v21 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v68, v18, Tag, v20);
  v23 = (FxRequest *)v21;
  if ( v21 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      v23 = (FxRequest *)(v21 + 3);
      *v21 = 0LL;
      v21[1] = 0LL;
      v21[2] = 0LL;
      *((_DWORD *)v21 + 8) = 1146058822;
    }
    Driver = 0LL;
    v23[1].m_Globals = 0LL;
    *(_QWORD *)&v23[1].m_ObjectFlags = 0LL;
    v23[1].m_ChildListHead.Flink = 0LL;
    v23[1].m_ChildListHead.Blink = 0LL;
    *(_QWORD *)&v23[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
    *(_QWORD *)&v23[1].m_Type = v23;
    if ( RequestAttributes )
    {
      v25 = RequestAttributes->ContextTypeInfo;
      if ( v25 )
      {
        ContextSizeOverride = RequestAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = v25->ContextSize;
        memset(&v23[1].m_SpinLock.m_Lock, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v23[1].m_ChildListHead.Blink = (_LIST_ENTRY *)RequestAttributes->ContextTypeInfo;
    }
  }
  else
  {
    Driver = 0LL;
  }
  if ( v23 )
  {
    v23->m_Globals = FxDriverGlobals;
    v23->__vftable = (FxRequest_vtbl *)FxObject::`vftable';
    *(_DWORD *)&v23->m_Type = 24121352;
    v23->m_SpinLock.m_Lock = 0LL;
    v23->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v23->m_Refcnt = 1;
    *(_DWORD *)&v23->m_ObjectFlags = 0x10000;
    v23->m_ParentObject = 0LL;
    v23->m_ChildListHead.Blink = &v23->m_ChildListHead;
    v23->m_ChildListHead.Flink = &v23->m_ChildListHead;
    v23->m_ChildEntry.Blink = &v23->m_ChildEntry;
    v23->m_ChildEntry.Flink = &v23->m_ChildEntry;
    m_Globals = v23->m_Globals;
    v23->m_DisposeSingleEntry.Next = 0LL;
    v23->m_DeviceBase = 0LL;
    if ( m_Globals->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v23, v22, 0);
    v23->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
    v23->m_NPLock.m_Lock = 0LL;
    v23->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v23->m_ObjectFlags) < 0 )
    {
      v62 = v23->m_Globals;
      if ( v62->FxVerifierLock )
      {
        VerifierLock[0] = 0LL;
        FxVerifierLock::CreateAndInitialize(VerifierLock, v62, v23);
        v23[-1].m_ForwardProgressList.Flink = (_LIST_ENTRY *)VerifierLock[0];
      }
    }
    v23->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
    v23->m_Irp.m_Irp = Irp;
    v23->m_CancelRoutine.m_Cancel = 0LL;
    v23->m_CompletionRoutine.m_Completion = 0LL;
    v23->m_CanComplete = 0;
    if ( Caller == FxRequestConstructorCallerIsDriver )
    {
      v23->m_IrpAllocation = (Ownership != 1) + 1;
      WdfBindInfo = FxDriverGlobals->WdfBindInfo;
      if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
      {
        v47 = KeAcquireSpinLockRaiseToDpc(&v23->m_SpinLock.m_Lock);
        v23->m_ObjectFlags |= 0x800u;
        KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v47);
        m_Irp = v23->m_Irp.m_Irp;
        Driver = 0LL;
        goto LABEL_28;
      }
    }
    else if ( Ownership == 1 )
    {
      v23->m_IrpAllocation = 1;
    }
    else
    {
      v23->m_IrpAllocation = 0;
      v23->m_CanComplete = 1;
    }
    m_Irp = Irp;
LABEL_28:
    v23->m_Target = 0LL;
    v23->m_TargetFlags = 0;
    v23->m_TargetCompletionContext = 0LL;
    v23->m_Completed = m_Irp == 0LL;
    v23->m_Canceled = 0;
    v23->m_PriorityBoost = 0;
    v23->m_RequestContext = 0LL;
    v23->m_Timer = 0LL;
    v23->m_CsqContext.Irp = (_IRP *)&v23->120;
    v23->m_ListEntry.Flink = (_LIST_ENTRY *)&v23->120;
    v23->__vftable = (FxRequest_vtbl *)FxRequest::`vftable';
    v23->m_DrainSingleEntry.Next = 0LL;
    *(_QWORD *)&v23->m_SystemBufferOffset = 216LL;
    v23->m_IrpQueue = 0LL;
    v23->m_IrpCompletionReferenceCount = 0;
    v23->m_AllocatedMdl = 0LL;
    *(_DWORD *)&v23->m_OutputBufferOffset = 232;
    v23->m_CompletionState = 0;
    v23->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)FxRequestSystemBuffer::`vftable';
    v23->m_SystemBuffer.m_Buffer = 0LL;
    v23->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)FxRequestOutputBuffer::`vftable';
    v23->m_OutputBuffer.m_Buffer = 0LL;
    v23->m_IoQueue = 0LL;
    v23->m_PowerStopState = 0;
    v23->m_OwnerListEntry.Blink = &v23->m_OwnerListEntry;
    v23->m_OwnerListEntry.Flink = &v23->m_OwnerListEntry;
    v23->m_OwnerListEntry2.Blink = &v23->m_OwnerListEntry2;
    v23->m_OwnerListEntry2.Flink = &v23->m_OwnerListEntry2;
    v23->m_ForwardProgressList.Blink = &v23->m_ForwardProgressList;
    v23->m_ForwardProgressList.Flink = &v23->m_ForwardProgressList;
    v23->m_Presented = Caller == FxRequestConstructorCallerIsDriver;
    *(_WORD *)&v23->m_Reserved = 0;
    v23->m_ForwardProgressQueue = 0LL;
    v23->m_InternalContext = 0LL;
    if ( !Target )
      goto LABEL_38;
    m_RequestContext = v23->m_RequestContext;
    v30 = v23->m_Irp.m_Irp;
    if ( m_RequestContext )
    {
      if ( v30 )
      {
        m_RequestContext->ReleaseAndRestore(m_RequestContext, v23);
        v31 = v23->m_Globals;
        if ( v31->FxVerifierOn )
        {
          if ( v31->FxVerifierIO )
            FxRequestBase::ClearVerifierFlags(v23, 128);
        }
      }
    }
    v32 = *(_BYTE *)(Target + 336);
    if ( !v32 )
    {
      v33 = -1073741436;
      v56 = *(_WORD *)(Target + 10);
      v57 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v56 )
        v57 = 0LL;
      WPP_IFR_SF_qd(v23->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v57, -1073741436);
      goto LABEL_36;
    }
    if ( !v30 )
      goto LABEL_66;
    if ( v30->CurrentLocation > v32 )
    {
LABEL_35:
      v33 = 0;
LABEL_36:
      if ( v33 < 0 )
      {
LABEL_122:
        WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, v33);
        if ( Irp )
          FxRequestBase::SetSubmitIrp(v23, 0LL, v64);
        FxObject::DeleteFromFailedCreate(v23);
        goto LABEL_65;
      }
      Driver = 0LL;
LABEL_38:
      v19 = v23->m_ObjectSize == 0;
      VerifierLock[0] = 0LL;
      if ( v19 )
      {
        v33 = -1073741816;
      }
      else
      {
        if ( !RequestAttributes )
          goto LABEL_127;
        if ( RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
        {
          v51 = KeAcquireSpinLockRaiseToDpc(&v23->m_SpinLock.m_Lock);
          v23->m_ObjectFlags |= 0x11u;
          KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v51);
          Driver = VerifierLock[0];
        }
        ParentObject = (unsigned __int64)RequestAttributes->ParentObject;
        if ( ParentObject )
        {
          LOWORD(m_Globals_low) = 0;
          Driver = (FxVerifierLock *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
          if ( (ParentObject & 1) != 0 )
          {
            m_Globals_low = LOWORD(Driver->m_Globals);
            Driver = (FxVerifierLock *)((char *)Driver - m_Globals_low);
          }
          if ( Driver->m_Type == 4096 )
          {
            VerifierLock[0] = Driver;
          }
          else
          {
            LOWORD(v68.u.PoolType) = 4096;
            *(_QWORD *)&v68.UsePoolType = VerifierLock;
            WORD1(v68.u.PoolFlags) = m_Globals_low;
            HIDWORD(v68.u.PoolFlags) = 0;
            if ( ((int (__fastcall *)(FxVerifierLock *, FxPoolTypeOrPoolFlags *))Driver->m_Globals->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
                   Driver,
                   &v68) < 0 )
            {
              WPP_IFR_SF_qDqD(
                *(_FX_DRIVER_GLOBALS **)&Driver->m_Lock.m_DbgFlagIsInitialized,
                v48,
                v49,
                v50,
                _a4a,
                (const void *)ParentObject,
                0x1000u,
                Driver,
                Driver->m_Type);
              FxVerifierBugCheckWorker(
                *(_FX_DRIVER_GLOBALS **)&Driver->m_Lock.m_DbgFlagIsInitialized,
                WDF_INVALID_HANDLE,
                ParentObject,
                0x1000uLL);
            }
            Driver = VerifierLock[0];
          }
        }
        else
        {
LABEL_127:
          if ( !v23->m_ParentObject )
          {
            v45 = v23->m_Globals;
            if ( (FxRequest *)v45->Driver != v23 )
            {
              Driver = (FxVerifierLock *)v45->Driver;
              VerifierLock[0] = Driver;
            }
          }
        }
        if ( !Driver || (v33 = FxObject::AssignParentObject(v23, (FxObject *)Driver), v33 >= 0) )
        {
          if ( RequestAttributes )
          {
            m_ObjectSize = v23->m_ObjectSize;
            if ( (_WORD)m_ObjectSize )
              v37 = (char *)v23 + m_ObjectSize;
            else
              v37 = 0LL;
            EvtDestroyCallback = RequestAttributes->EvtDestroyCallback;
            if ( EvtDestroyCallback )
              *((_QWORD *)v37 + 3) = EvtDestroyCallback;
            EvtCleanupCallback = RequestAttributes->EvtCleanupCallback;
            if ( EvtCleanupCallback )
            {
              *((_QWORD *)v37 + 2) = EvtCleanupCallback;
              v23->m_ObjectFlags |= 0x400u;
            }
          }
          v23->m_ObjectFlags |= 8u;
          FxObject::DetectExcessiveAllocation(v23);
          v40 = (const void **)Request;
          v33 = 0;
          *Request = v23;
          goto LABEL_56;
        }
      }
      goto LABEL_122;
    }
    if ( v23->m_IrpAllocation == 1 )
    {
LABEL_66:
      v43 = IoAllocateIrp(v32, 0);
      if ( v43 )
      {
        v44 = v23->m_Irp.m_Irp;
        v23->m_Irp.m_Irp = v43;
        v23->m_Completed = 0;
        if ( v44 && v44 != v43 && v23->m_IrpAllocation == 1 )
        {
          v23->m_IrpAllocation = 1;
          v33 = 0;
          v54 = v23->m_Globals;
          if ( v54->FxVerboseOn )
          {
            if ( !v23->m_ObjectSize || (v55 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
              v55 = v23;
            WPP_IFR_SF_qq(v54, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v44, v55);
          }
          IoFreeIrp(v44);
          goto LABEL_36;
        }
        v23->m_IrpAllocation = 1;
        goto LABEL_35;
      }
      v33 = -1073741670;
      v58 = *(unsigned __int16 *)(Target + 10);
      v59 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)v58 )
        v59 = 0LL;
      if ( !v23->m_ObjectSize || (v60 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v60 = v23;
      v61 = 12;
    }
    else
    {
      v33 = -1073741616;
      v63 = *(_WORD *)(Target + 10);
      v59 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v63 )
        v59 = 0LL;
      if ( !v23->m_ObjectSize || (v60 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v60 = v23;
      v61 = 13;
    }
    WPP_IFR_SF_qqd(v23->m_Globals, 2u, 0xEu, v61, WPP_FxRequestBase_cpp_Traceguids, v60, v59, v33);
    goto LABEL_36;
  }
LABEL_64:
  v33 = -1073741670;
LABEL_65:
  v40 = (const void **)Request;
LABEL_56:
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_qLqd(FxDriverGlobals, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, Irp, Ownership, *v40, v33);
  return v33;
}
