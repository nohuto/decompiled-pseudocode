/*
 * XREFs of imp_WdfRequestCreate @ 0x140035CE0
 * Callers:
 *     <none>
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
 *     WPP_IFR_SF_qLqd @ 0x14007F2E4 (WPP_IFR_SF_qLqd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AFC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfRequestCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        unsigned __int64 Target,
        WDFREQUEST__ **Request)
{
  _FX_DRIVER_GLOBALS *v4; // r15
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  int _a1; // edi
  __int64 v11; // r8
  unsigned __int16 v12; // r9
  unsigned __int64 flags; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v15; // rdi
  int id; // ebx
  bool v17; // zf
  void *v18; // rax
  _OWORD *v19; // rax
  _FX_DRIVER_GLOBALS *v20; // rdx
  FxRequestBase *v21; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v22; // rax
  unsigned __int64 ContextSizeOverride; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  KIRQL v26; // al
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  _FX_DRIVER_GLOBALS *v29; // rax
  CCHAR v30; // cl
  __int16 v31; // ax
  unsigned __int64 v32; // r13
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rax
  PIRP Irp; // rax
  _IRP *v37; // r12
  unsigned __int16 *Driver; // rdi
  unsigned __int64 v39; // r12
  __int64 v40; // rcx
  __int64 m_ObjectSize; // rax
  char *v42; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // dl
  unsigned int v48; // r8d
  unsigned __int16 v49; // r9
  unsigned __int64 ParentObject; // rbx
  __int64 v51; // rcx
  unsigned __int16 *v52; // r15
  unsigned __int8 v53; // dl
  unsigned int v54; // r8d
  unsigned __int16 v55; // r9
  KIRQL v56; // al
  __int64 v57; // rax
  unsigned __int8 v58; // dl
  unsigned int v59; // r8d
  unsigned __int16 v60; // r9
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  _FX_DRIVER_GLOBALS *v63; // rcx
  const void *v64; // rax
  const void *v65; // r12
  const void *v66; // r12
  const void *v67; // rax
  unsigned __int16 v68; // r9
  _FX_DRIVER_GLOBALS *v69; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-50h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-50h]
  FxIoTarget **p_pTarget; // [rsp+50h] [rbp-20h] BYREF
  __int16 v73; // [rsp+58h] [rbp-18h]
  __int16 v74; // [rsp+5Ah] [rbp-16h]
  int v75; // [rsp+5Ch] [rbp-14h]
  FxPoolTypeOrPoolFlags v76; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  const _GUID *_a4; // [rsp+B0h] [rbp+40h] BYREF
  FxIoTarget *pTarget; // [rsp+C0h] [rbp+50h] BYREF
  WDFREQUEST__ **v80; // [rsp+C8h] [rbp+58h]

  v80 = Request;
  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( Target )
  {
    LOWORD(v7) = 0;
    v8 = ~Target & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Target & 1) != 0 )
    {
      v7 = *(unsigned __int16 *)v8;
      v8 -= v7;
    }
    if ( *(_WORD *)(v8 + 8) == 4608 )
    {
      pTarget = (FxIoTarget *)v8;
    }
    else
    {
      pTarget = 0LL;
      p_pTarget = &pTarget;
      v74 = v7;
      v75 = 0;
      v46 = *(_QWORD *)v8;
      v73 = 4608;
      if ( (*(int (__fastcall **)(unsigned __int64, FxIoTarget ***))(v46 + 40))(v8, &p_pTarget) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *(_FX_DRIVER_GLOBALS **)(v8 + 16),
          v47,
          v48,
          v49,
          traceGuid,
          (const void *)Target,
          0x1200u,
          (const void *)v8,
          *(unsigned __int16 *)(v8 + 8));
        FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v8 + 16), WDF_INVALID_HANDLE, Target, 0x1200uLL);
      }
      v8 = (unsigned __int64)pTarget;
      Request = v80;
    }
    v4 = *(_FX_DRIVER_GLOBALS **)(v8 + 16);
  }
  else
  {
    pTarget = 0LL;
    v8 = 0LL;
    if ( RequestAttributes )
    {
      ParentObject = (unsigned __int64)RequestAttributes->ParentObject;
      if ( ParentObject )
      {
        LOWORD(v51) = 0;
        v52 = (unsigned __int16 *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (ParentObject & 1) != 0 )
        {
          v51 = *v52;
          v52 = (unsigned __int16 *)((char *)v52 - v51);
        }
        if ( v52[4] == 4096 )
        {
          p_pTarget = (FxIoTarget **)v52;
        }
        else
        {
          p_pTarget = 0LL;
          *(_QWORD *)&v76.UsePoolType = &p_pTarget;
          WORD1(v76.u.PoolFlags) = v51;
          HIDWORD(v76.u.PoolFlags) = 0;
          v57 = *(_QWORD *)v52;
          LOWORD(v76.u.PoolType) = 4096;
          if ( (*(int (__fastcall **)(unsigned __int16 *, FxPoolTypeOrPoolFlags *))(v57 + 40))(v52, &v76) < 0 )
          {
            WPP_IFR_SF_qDqD(
              *((_FX_DRIVER_GLOBALS **)v52 + 2),
              v58,
              v59,
              v60,
              traceGuid,
              (const void *)ParentObject,
              0x1000u,
              v52,
              v52[4]);
            FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v52 + 2), WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          v8 = (unsigned __int64)pTarget;
          v52 = (unsigned __int16 *)p_pTarget;
          Request = v80;
        }
        v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v52 + 2);
      }
    }
  }
  if ( !Request )
    FxVerifierNullBugCheck(v4, retaddr);
  *Request = 0LL;
  v9 = 0LL;
  _a1 = FxValidateObjectAttributes(v4, RequestAttributes, 0);
  if ( _a1 >= 0 )
  {
    flags = 0LL;
    LODWORD(_a4) = v4->Tag;
    v76.u.PoolFlags = 64LL;
    if ( RequestAttributes )
    {
      ContextTypeInfo = RequestAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        flags = RequestAttributes->ContextSizeOverride;
        if ( flags )
        {
LABEL_52:
          v34 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( v34 < flags )
            goto LABEL_56;
          v15 = v34 + 416;
          v35 = v15;
          if ( v15 < 0x1A0 )
          {
            v15 = -1LL;
            id = v35 < 0x1A0 ? 0xC0000095 : 0;
            goto LABEL_55;
          }
          id = v15 < 0x1A0 ? 0xC0000095 : 0;
LABEL_14:
          if ( v4->FxVerifierHandle )
          {
            v61 = v15 + 48;
            v62 = v15;
            v11 = -1LL;
            if ( v15 + 48 >= v15 )
              v11 = v15 + 48;
            v15 = v11;
            id = v61 < v62 ? 0xC0000095 : 0;
          }
          if ( id >= 0 )
          {
LABEL_16:
            v17 = v4->FxPoolTrackingOn == 0;
            *(_QWORD *)&v76.UsePoolType = 0LL;
            v76.u.PoolFlags = 64LL;
            if ( v17 )
              v18 = 0LL;
            else
              v18 = retaddr;
            v19 = FxPoolAllocator(v4, &v4->FxPoolFrameworks, &v76, v15, (unsigned int)_a4, v18);
            v21 = (FxRequestBase *)v19;
            if ( v19 )
            {
              if ( v4->FxVerifierHandle )
              {
                v21 = (FxRequestBase *)(v19 + 3);
                *v19 = 0LL;
                v19[1] = 0LL;
                v19[2] = 0LL;
                *((_DWORD *)v19 + 8) = 1146058822;
              }
              v21[1].m_CsqContext.Irp = 0LL;
              v21[1].m_CsqContext.Csq = 0LL;
              v21[1].m_DrainSingleEntry.Next = 0LL;
              v21[1].m_Irp.m_Irp = 0LL;
              v21[1].m_Target = 0LL;
              v21[1].m_ListEntry.Flink = (_LIST_ENTRY *)v21;
              if ( RequestAttributes )
              {
                v22 = RequestAttributes->ContextTypeInfo;
                if ( v22 )
                {
                  ContextSizeOverride = RequestAttributes->ContextSizeOverride;
                  if ( !ContextSizeOverride )
                    ContextSizeOverride = v22->ContextSize;
                  memset(&v21[1].m_RequestContext, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                }
                v21[1].m_Irp.m_Irp = (_IRP *)RequestAttributes->ContextTypeInfo;
              }
            }
            if ( v21 )
            {
              v21->m_Globals = v4;
              v21->__vftable = (FxRequestBase_vtbl *)FxObject::`vftable';
              *(_DWORD *)&v21->m_Type = 24121352;
              v21->m_SpinLock.m_Lock = 0LL;
              v21->m_SpinLock.m_DbgFlagIsInitialized = 1;
              v21->m_Refcnt = 1;
              *(_DWORD *)&v21->m_ObjectFlags = 0x10000;
              v21->m_ParentObject = 0LL;
              v21->m_ChildListHead.Blink = &v21->m_ChildListHead;
              v21->m_ChildListHead.Flink = &v21->m_ChildListHead;
              v21->m_ChildEntry.Blink = &v21->m_ChildEntry;
              v21->m_ChildEntry.Flink = &v21->m_ChildEntry;
              m_Globals = v21->m_Globals;
              v21->m_DisposeSingleEntry.Next = 0LL;
              v21->m_DeviceBase = 0LL;
              if ( m_Globals->FxVerifierOn )
                FxObject::Vf_VerifyConstruct(v21, v20, 0);
              v21->__vftable = (FxRequestBase_vtbl *)FxNonPagedObject::`vftable';
              v21->m_NPLock.m_Lock = 0LL;
              v21->m_NPLock.m_DbgFlagIsInitialized = 1;
              if ( SLOBYTE(v21->m_ObjectFlags) < 0 )
              {
                v69 = v21->m_Globals;
                if ( v69->FxVerifierLock )
                {
                  _a4 = 0LL;
                  FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&_a4, v69, v21);
                  *(_QWORD *)&v21[-1].m_IrpCompletionReferenceCount = _a4;
                }
              }
              v21->__vftable = (FxRequestBase_vtbl *)FxRequestBase::`vftable';
              v21->m_Irp.m_Irp = 0LL;
              v21->m_CancelRoutine.m_Cancel = 0LL;
              v21->m_CompletionRoutine.m_Completion = 0LL;
              v21->m_CanComplete = 0;
              v21->m_IrpAllocation = 1;
              WdfBindInfo = v4->WdfBindInfo;
              if ( WdfBindInfo->Version.Major > 1
                || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
              {
                v26 = KeAcquireSpinLockRaiseToDpc(&v21->m_SpinLock.m_Lock);
                v21->m_ObjectFlags |= 0x800u;
                KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v26);
              }
              v17 = v21->m_Irp.m_Irp == 0LL;
              v21->m_Target = 0LL;
              v21->m_TargetFlags = 0;
              v21->m_Completed = v17;
              v21->m_TargetCompletionContext = 0LL;
              v21->m_Canceled = 0;
              v21->m_PriorityBoost = 0;
              v21->m_RequestContext = 0LL;
              v21->m_Timer = 0LL;
              v21->m_CsqContext.Irp = (_IRP *)&v21->120;
              v21->m_ListEntry.Flink = (_LIST_ENTRY *)&v21->120;
              v21->__vftable = (FxRequestBase_vtbl *)FxRequest::`vftable';
              v21->m_DrainSingleEntry.Next = 0LL;
              *(_QWORD *)&v21->m_SystemBufferOffset = 216LL;
              v21->m_IrpQueue = 0LL;
              v21->m_IrpCompletionReferenceCount = 0;
              v21->m_AllocatedMdl = 0LL;
              *(_DWORD *)&v21->m_OutputBufferOffset = 232;
              v21->m_CompletionState = 0;
              *(_QWORD *)&v21[1].m_Type = FxRequestSystemBuffer::`vftable';
              v21[1].m_Globals = 0LL;
              *(_QWORD *)&v21[1].m_ObjectFlags = FxRequestOutputBuffer::`vftable';
              v21[1].m_ChildListHead.Flink = 0LL;
              v21[1].__vftable = 0LL;
              *(&v21[1].m_NPLock.m_DbgFlagIsInitialized + 1) = 0;
              *(_QWORD *)&v21[1].m_SpinLock.m_DbgFlagIsInitialized = (char *)v21 + 288;
              v21[1].m_ChildListHead.Blink = (_LIST_ENTRY *)&v21[1].m_ChildListHead.Blink;
              v21[1].m_ParentObject = (FxRequestBase *)((char *)v21 + 304);
              v21[1].m_SpinLock.m_Lock = (unsigned __int64)&v21[1].m_SpinLock.m_Lock;
              v21[1].m_ChildEntry.Blink = &v21[1].m_ChildEntry;
              v21[1].m_ChildEntry.Flink = &v21[1].m_ChildEntry;
              v21[1].m_NPLock.m_DbgFlagIsInitialized = 1;
              *((_WORD *)&v21[1].m_NPLock.m_DbgFlagIsInitialized + 1) = 0;
              v21[1].m_DisposeSingleEntry.Next = 0LL;
              v21[1].m_DeviceBase = 0LL;
              if ( !v8 )
                goto LABEL_60;
              m_RequestContext = v21->m_RequestContext;
              m_Irp = v21->m_Irp.m_Irp;
              if ( m_RequestContext )
              {
                if ( m_Irp )
                {
                  m_RequestContext->ReleaseAndRestore(m_RequestContext, v21);
                  v29 = v21->m_Globals;
                  if ( v29->FxVerifierOn )
                  {
                    if ( v29->FxVerifierIO )
                      FxRequestBase::ClearVerifierFlags(v21, 128);
                  }
                }
              }
              v30 = *(_BYTE *)(v8 + 336);
              if ( v30 )
              {
                if ( m_Irp )
                {
                  if ( m_Irp->CurrentLocation > v30 )
                  {
LABEL_42:
                    _a1 = 0;
                    goto LABEL_43;
                  }
                  if ( v21->m_IrpAllocation != 1 )
                  {
                    _a1 = -1073741616;
                    if ( *(_WORD *)(v8 + 10) )
                      v66 = (const void *)(v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v66 = 0LL;
                    if ( !v21->m_ObjectSize
                      || (v67 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                    {
                      v67 = v21;
                    }
                    v68 = 13;
LABEL_120:
                    WPP_IFR_SF_qqd(v21->m_Globals, 2u, 0xEu, v68, WPP_FxRequestBase_cpp_Traceguids, v67, v66, _a1);
                    goto LABEL_43;
                  }
                }
                Irp = IoAllocateIrp(v30, 0);
                if ( !Irp )
                {
                  _a1 = -1073741670;
                  if ( *(_WORD *)(v8 + 10) )
                    v66 = (const void *)(v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v66 = 0LL;
                  if ( !v21->m_ObjectSize
                    || (v67 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                  {
                    v67 = v21;
                  }
                  v68 = 12;
                  goto LABEL_120;
                }
                v37 = v21->m_Irp.m_Irp;
                v21->m_Irp.m_Irp = Irp;
                v21->m_Completed = 0;
                if ( !v37 || v37 == Irp || v21->m_IrpAllocation != 1 )
                {
                  v21->m_IrpAllocation = 1;
                  goto LABEL_42;
                }
                v21->m_IrpAllocation = 1;
                _a1 = 0;
                v63 = v21->m_Globals;
                if ( v63->FxVerboseOn )
                {
                  if ( !v21->m_ObjectSize
                    || (v64 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                  {
                    v64 = v21;
                  }
                  WPP_IFR_SF_qq(v63, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v37, v64);
                }
                IoFreeIrp(v37);
              }
              else
              {
                _a1 = -1073741436;
                if ( *(_WORD *)(v8 + 10) )
                  v65 = (const void *)(v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v65 = 0LL;
                WPP_IFR_SF_qd(v21->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v65, -1073741436);
              }
LABEL_43:
              if ( _a1 < 0 )
              {
LABEL_44:
                WPP_IFR_SF_D(v4, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, _a1);
                FxObject::DeleteFromFailedCreate(v21);
LABEL_45:
                if ( v4->FxVerboseOn )
                  WPP_IFR_SF_qLqd(v4, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, 0LL, 1u, (const void *)v9, _a1);
                if ( _a1 >= 0 )
                {
                  v31 = *(_WORD *)(v9 + 10);
                  v32 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
                  if ( !v31 )
                    v32 = 0LL;
                  *v80 = (WDFREQUEST__ *)v32;
                }
                return (unsigned int)_a1;
              }
LABEL_60:
              v17 = v21->m_ObjectSize == 0;
              Driver = 0LL;
              _a4 = 0LL;
              if ( v17 )
              {
                _a1 = -1073741816;
              }
              else
              {
                if ( !RequestAttributes )
                  goto LABEL_144;
                if ( RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
                {
                  v56 = KeAcquireSpinLockRaiseToDpc(&v21->m_SpinLock.m_Lock);
                  v21->m_ObjectFlags |= 0x11u;
                  KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v56);
                  Driver = (unsigned __int16 *)_a4;
                }
                v39 = (unsigned __int64)RequestAttributes->ParentObject;
                if ( v39 )
                {
                  LOWORD(v40) = 0;
                  Driver = (unsigned __int16 *)(~v39 & 0xFFFFFFFFFFFFFFF8uLL);
                  if ( (v39 & 1) != 0 )
                  {
                    v40 = *Driver;
                    Driver = (unsigned __int16 *)((char *)Driver - v40);
                  }
                  if ( Driver[4] == 4096 )
                  {
                    _a4 = (const _GUID *)Driver;
                  }
                  else
                  {
                    LOWORD(v76.u.PoolType) = 4096;
                    *(_QWORD *)&v76.UsePoolType = &_a4;
                    WORD1(v76.u.PoolFlags) = v40;
                    HIDWORD(v76.u.PoolFlags) = 0;
                    if ( (*(int (__fastcall **)(unsigned __int16 *, FxPoolTypeOrPoolFlags *))(*(_QWORD *)Driver + 40LL))(
                           Driver,
                           &v76) < 0 )
                    {
                      WPP_IFR_SF_qDqD(
                        *((_FX_DRIVER_GLOBALS **)Driver + 2),
                        v53,
                        v54,
                        v55,
                        traceGuida,
                        (const void *)v39,
                        0x1000u,
                        Driver,
                        Driver[4]);
                      FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)Driver + 2), WDF_INVALID_HANDLE, v39, 0x1000uLL);
                    }
                    Driver = (unsigned __int16 *)_a4;
                  }
                }
                else
                {
LABEL_144:
                  if ( !v21->m_ParentObject )
                  {
                    v45 = v21->m_Globals;
                    if ( (FxRequestBase *)v45->Driver != v21 )
                    {
                      Driver = (unsigned __int16 *)v45->Driver;
                      _a4 = (const _GUID *)Driver;
                    }
                  }
                }
                if ( !Driver || (_a1 = FxObject::AssignParentObject(v21, (FxObject *)Driver), _a1 >= 0) )
                {
                  if ( RequestAttributes )
                  {
                    m_ObjectSize = v21->m_ObjectSize;
                    if ( (_WORD)m_ObjectSize )
                      v42 = (char *)v21 + m_ObjectSize;
                    else
                      v42 = 0LL;
                    EvtDestroyCallback = RequestAttributes->EvtDestroyCallback;
                    if ( EvtDestroyCallback )
                      *((_QWORD *)v42 + 3) = EvtDestroyCallback;
                    EvtCleanupCallback = RequestAttributes->EvtCleanupCallback;
                    if ( EvtCleanupCallback )
                    {
                      *((_QWORD *)v42 + 2) = EvtCleanupCallback;
                      v21->m_ObjectFlags |= 0x400u;
                    }
                  }
                  v21->m_ObjectFlags |= 8u;
                  FxObject::DetectExcessiveAllocation(v21);
                  _a1 = 0;
                  v9 = (unsigned __int64)v21;
                  goto LABEL_45;
                }
              }
              goto LABEL_44;
            }
LABEL_56:
            _a1 = -1073741670;
            goto LABEL_45;
          }
LABEL_55:
          WPP_IFR_SF_DDid(v4, flags, v11, v12, traceGuid, 0x168u, 0, flags, id);
          if ( id < 0 )
            goto LABEL_56;
          goto LABEL_16;
        }
        flags = ContextTypeInfo->ContextSize;
      }
    }
    v15 = 416LL;
    id = 0;
    if ( !flags )
      goto LABEL_14;
    goto LABEL_52;
  }
  return (unsigned int)_a1;
}
