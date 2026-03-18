/*
 * XREFs of imp_WdfMemoryCreate @ 0x140011E50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1400076CC (WPP_IFR_SF_dd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400111CC (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?DetectExcessiveAllocation@FxObject@@AEAAXXZ @ 0x140011B20 (-DetectExcessiveAllocation@FxObject@@AEAAXXZ.c)
 *     ??0FxMemoryBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x140012EF8 (--0FxMemoryBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140012FE8 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1400138F4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140013910 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x140013954 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14001CFC0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall imp_WdfMemoryCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        ULONG PoolTag,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **Memory,
        void **Buffer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxMemoryObject *v10; // rdi
  unsigned __int64 ParentObject; // rsi
  __int64 v12; // rcx
  FxObject *v13; // rbx
  WDFMEMORY__ **v14; // rdx
  unsigned __int8 v15; // r15
  unsigned __int64 v16; // r13
  __int64 result; // rax
  ULONG v18; // r10d
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  unsigned __int16 v21; // r11
  FxDeviceBase *v22; // rax
  FX_POOL **v23; // rax
  FxMemoryObject *v24; // rsi
  SIZE_T v25; // rax
  FxMemoryObject_vtbl *PoolWithTag; // rax
  WDFMEMORY__ *v27; // rbx
  int v28; // esi
  void **v29; // rbx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // r13
  int id; // esi
  void *v35; // rax
  FX_POOL **v36; // rax
  FxMemoryBuffer *v37; // rsi
  _OWORD *v38; // r15
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  FxObject *flags; // rbx
  unsigned __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 m_ObjectSize; // rax
  char *v45; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *v48; // rax
  FxMemoryObject *v49; // rax
  unsigned __int8 v50; // dl
  unsigned int v51; // r8d
  unsigned __int16 v52; // r9
  FxObject_vtbl *v53; // rax
  unsigned __int8 v54; // dl
  unsigned int v55; // r8d
  unsigned __int16 v56; // r9
  unsigned __int64 ContextSize; // r9
  void *v58; // r11
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  KIRQL v63; // al
  KIRQL CurrentIrql; // al
  _WDF_OBJECT_ATTRIBUTES *ObjectType; // [rsp+20h] [rbp-40h]
  __m128i v66; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  FxObject *v68; // [rsp+A0h] [rbp+40h] BYREF
  FxObject *pParent; // [rsp+A8h] [rbp+48h] BYREF
  ULONG Tag; // [rsp+B8h] [rbp+58h]

  Tag = PoolTag;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  v10 = 0LL;
  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        LOWORD(v12) = 0;
        v13 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (ParentObject & 1) != 0 )
        {
          v12 = LOWORD(v13->__vftable);
          v13 = (FxObject *)((char *)v13 - v12);
        }
        if ( v13->m_Type == 4096 )
        {
          pParent = v13;
        }
        else
        {
          pParent = 0LL;
          v66.m128i_i64[0] = (__int64)&pParent;
          v66.m128i_i16[5] = v12;
          v66.m128i_i32[3] = 0;
          v53 = v13->__vftable;
          v66.m128i_i16[4] = 4096;
          if ( v53->QueryInterface(v13, (FxQueryInterfaceParams *)&v66) < 0 )
          {
            WPP_IFR_SF_qDqD(
              v13->m_Globals,
              v54,
              v55,
              v56,
              (const _GUID *)ObjectType,
              (const void *)ParentObject,
              0x1000u,
              v13,
              v13->m_Type);
            FxVerifierBugCheckWorker(v13->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          v13 = pParent;
        }
        m_Globals = v13->m_Globals;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
        (unsigned __int8)Attributes,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  v14 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( (PoolType & 0xFFFFFEFF) == 1 || (v15 = 2, (PoolType & 0xFFFFFEFF) == 5) )
    v15 = 1;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > v15 )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, v15);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
    v14 = Memory;
  }
  v16 = BufferSize;
  if ( !BufferSize )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferApi_cpp_Traceguids, 0xC000000D);
    return 3221225485LL;
  }
  *v14 = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
  if ( (int)result < 0 )
    return result;
  v18 = Tag;
  if ( !Tag )
  {
    v18 = m_Globals->Tag;
    Tag = v18;
  }
  if ( v16 < 0x1000
    && (!m_Globals->FxVerifierOn || !m_Globals->FxPoolTrackingOn)
    && (PoolType & 0xFFFFFEFF) != 1
    && (PoolType & 0xFFFFFEFF) != 5 )
  {
    if ( PoolType == NonPagedPoolMustSucceed
      || PoolType == NonPagedPoolCacheAligned
      || PoolType == NonPagedPoolCacheAlignedMustS )
    {
      PoolType = ExDefaultNonPagedPoolType;
    }
    v66 = 0LL;
    v66.m128i_i8[0] = 1;
    if ( !v18 )
      Tag = m_Globals->Tag;
    ContextSize = FxGetContextSize(Attributes);
    v59 = ((((int)v16 + 15) & 0xFFF0LL) + 128) & 0xFFFFFFFFFFFFFFF0uLL;
    v60 = v59 + 48;
    if ( v59 + 48 >= v59 )
    {
      v32 = -1LL;
      v33 = v59 + 48;
      id = (int)v58;
      if ( !ContextSize )
        goto LABEL_119;
      v61 = (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v61 < ContextSize )
        goto LABEL_49;
      v62 = v60 + v61;
      v33 = -1LL;
      if ( v62 >= v60 )
        v33 = v62;
      id = v62 < v60 ? 0xC0000095 : 0;
      if ( v62 >= v60 )
      {
LABEL_119:
        v60 = v33;
        if ( m_Globals->FxVerifierHandle == (_BYTE)v58 )
          goto LABEL_36;
        v30 = v33 + 48;
        v31 = v33;
        if ( v33 + 48 >= v33 )
          v32 = v33 + 48;
        v33 = v32;
        id = v30 < v31 ? 0xC0000095 : 0;
        if ( v30 >= v60 )
          goto LABEL_36;
      }
    }
    else
    {
      v33 = -1LL;
      id = -1073741675;
    }
    WPP_IFR_SF_DDid(
      m_Globals,
      v32,
      v60,
      ContextSize,
      (const _GUID *)ObjectType,
      0x78u,
      (unsigned __int16)BufferSize,
      ContextSize,
      id);
    v58 = 0LL;
LABEL_36:
    if ( id < 0 )
      goto LABEL_49;
    v35 = retaddr;
    v66 = 0LL;
    v66.m128i_i8[0] = 1;
    v66.m128i_i32[2] = PoolType;
    if ( m_Globals->FxPoolTrackingOn == (_BYTE)v58 )
      v35 = v58;
    v36 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v66, v33, Tag, v35);
    v37 = (FxMemoryBuffer *)v36;
    if ( v36 )
    {
      if ( m_Globals->FxVerifierHandle )
      {
        v37 = (FxMemoryBuffer *)(v36 + 6);
        *(_OWORD *)v36 = 0LL;
        *((_OWORD *)v36 + 1) = 0LL;
        *((_OWORD *)v36 + 2) = 0LL;
        *((_DWORD *)v36 + 8) = 1146058822;
      }
      v38 = (_OWORD *)((char *)v37 + (unsigned __int16)(((BufferSize + 15) & 0xFFF0) + 128));
      *v38 = 0LL;
      v38[1] = 0LL;
      v38[2] = 0LL;
      *(_QWORD *)v38 = v37;
      if ( Attributes )
      {
        ContextTypeInfo = Attributes->ContextTypeInfo;
        if ( ContextTypeInfo )
        {
          ContextSizeOverride = Attributes->ContextSizeOverride;
          if ( !ContextSizeOverride )
            ContextSizeOverride = ContextTypeInfo->ContextSize;
          memset(v38 + 3, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        *((_QWORD *)v38 + 4) = Attributes->ContextTypeInfo;
      }
    }
    if ( !v37 )
      goto LABEL_49;
    FxMemoryBuffer::FxMemoryBuffer(v37, m_Globals, BufferSize);
    if ( !v49 )
      goto LABEL_49;
    v10 = v49;
    result = 0LL;
    goto LABEL_50;
  }
  LOBYTE(v68) = FxIsPagedPoolType(PoolType);
  if ( (_BYTE)v68
    && (v22 = FxDeviceBase::_SearchForDevice(m_Globals, Attributes), v21 = 0, (v66.m128i_i64[0] = (__int64)v22) != 0) )
  {
    v24 = (FxMemoryObject *)FxObjectHandleAlloc2(m_Globals, v19, 0x80uLL, v20, Attributes, 0, FxObjectTypeExternal);
    if ( v24 )
    {
      FxMemoryObject::FxMemoryObject(v24, m_Globals, 0x80u, v16);
      v24[1].FxObject::__vftable = 0LL;
      v24->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
      v24->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
      v24->m_DeviceBase = (FxDeviceBase *)v66.m128i_i64[0];
    }
    else
    {
      v24 = 0LL;
    }
    if ( !v24 )
      goto LABEL_49;
  }
  else
  {
    v23 = FxObjectHandleAlloc2(m_Globals, v19, 0x80uLL, v20, Attributes, v21, FxObjectTypeExternal);
    v24 = (FxMemoryObject *)v23;
    if ( !v23 )
    {
LABEL_49:
      result = 3221225626LL;
      goto LABEL_50;
    }
    FxMemoryObject::FxMemoryObject((FxMemoryObject *)v23, m_Globals, 0x80u, v16);
    v24->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
    v24->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
    v24[1].FxObject::__vftable = 0LL;
  }
  v25 = v24->GetBufferSize(&v24->IFxMemory);
  PoolWithTag = (FxMemoryObject_vtbl *)ExAllocatePoolWithTag(PoolType, v25, Tag);
  v24[1].FxObject::__vftable = PoolWithTag;
  if ( !PoolWithTag )
  {
    FxObject::DeleteFromFailedCreate(v24);
    goto LABEL_49;
  }
  if ( (_BYTE)v68 )
    v24->m_ObjectFlags |= 0x11u;
  v10 = v24;
  result = 0LL;
LABEL_50:
  if ( (int)result >= 0 )
  {
    flags = 0LL;
    v68 = 0LL;
    if ( v10->m_ObjectSize )
    {
      if ( !Attributes )
        goto LABEL_120;
      if ( Attributes->ExecutionLevel == WdfExecutionLevelPassive )
      {
        v63 = KeAcquireSpinLockRaiseToDpc(&v10->m_SpinLock.m_Lock);
        v10->m_ObjectFlags |= 0x11u;
        KeReleaseSpinLock(&v10->m_SpinLock.m_Lock, v63);
        flags = v68;
      }
      v42 = (unsigned __int64)Attributes->ParentObject;
      if ( v42 )
      {
        LOWORD(v43) = 0;
        flags = (FxObject *)(~v42 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (v42 & 1) != 0 )
        {
          v43 = LOWORD(flags->__vftable);
          flags = (FxObject *)((char *)flags - v43);
        }
        if ( flags->m_Type == 4096 )
        {
          v68 = flags;
        }
        else
        {
          v66.m128i_i16[5] = v43;
          v66.m128i_i64[0] = (__int64)&v68;
          v66.m128i_i16[4] = 4096;
          v66.m128i_i32[3] = 0;
          if ( flags->QueryInterface(flags, (FxQueryInterfaceParams *)&v66) < 0 )
          {
            WPP_IFR_SF_qDqD(
              flags->m_Globals,
              v50,
              v51,
              v52,
              (const _GUID *)ObjectType,
              (const void *)v42,
              0x1000u,
              flags,
              flags->m_Type);
            FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, v42, 0x1000uLL);
          }
          flags = v68;
        }
      }
      else
      {
LABEL_120:
        if ( !v10->m_ParentObject )
        {
          v48 = v10->m_Globals;
          if ( (FxMemoryObject *)v48->Driver != v10 )
          {
            flags = v48->Driver;
            v68 = flags;
          }
        }
      }
      if ( !flags || (v28 = FxObject::AssignParentObject(v10, flags), v28 >= 0) )
      {
        if ( Attributes )
        {
          m_ObjectSize = v10->m_ObjectSize;
          if ( (_WORD)m_ObjectSize )
            v45 = (char *)v10 + m_ObjectSize;
          else
            v45 = 0LL;
          EvtDestroyCallback = Attributes->EvtDestroyCallback;
          if ( EvtDestroyCallback )
            *((_QWORD *)v45 + 3) = EvtDestroyCallback;
          EvtCleanupCallback = Attributes->EvtCleanupCallback;
          if ( EvtCleanupCallback )
          {
            *((_QWORD *)v45 + 2) = EvtCleanupCallback;
            v10->m_ObjectFlags |= 0x400u;
          }
        }
        v10->m_ObjectFlags |= 8u;
        if ( v10->m_ObjectSize )
          v27 = (WDFMEMORY__ *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v27 = 0LL;
        FxObject::DetectExcessiveAllocation(v10);
        v28 = 0;
        *Memory = v27;
        v29 = Buffer;
        if ( Buffer )
          *v29 = (void *)v10->GetBuffer(&v10->IFxMemory);
        return (unsigned int)v28;
      }
    }
    else
    {
      v28 = -1073741816;
    }
    FxObject::DeleteFromFailedCreate(v10);
    return (unsigned int)v28;
  }
  return result;
}
