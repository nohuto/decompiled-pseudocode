/*
 * XREFs of ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x140013010
 * Callers:
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1400462C0 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1400470E4 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     imp_WdfRegistryQueryMemory @ 0x140078BE0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009CDD0 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400111CC (WPP_IFR_SF_DDid.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxMemoryBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x140012EF8 (--0FxMemoryBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140012FE8 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140013910 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x140013954 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall FxMemoryObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        __int64 PoolTag,
        unsigned __int64 BufferSize,
        FxMemoryObject **Object)
{
  unsigned int v7; // ebx
  POOL_TYPE v9; // ebp
  unsigned __int64 v11; // rdx
  char v12; // r14
  FX_POOL **v13; // rax
  FxMemoryObject *v14; // rdi
  SIZE_T v15; // rax
  FxMemoryObject_vtbl *PoolWithTag; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r13
  int id; // edi
  void *v22; // rax
  FX_POOL **v23; // rax
  FxMemoryBuffer *v24; // rdi
  _OWORD *v25; // r14
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  FxMemoryObject *v29; // rax
  unsigned int v30; // r8d
  unsigned __int64 flags; // r9
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r10
  FX_POOL **v37; // rax
  _WDF_OBJECT_ATTRIBUTES *ObjectType; // [rsp+20h] [rbp-78h]
  __m128i v39; // [rsp+50h] [rbp-48h] BYREF
  __int128 v40; // [rsp+60h] [rbp-38h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int Tag; // [rsp+B8h] [rbp+20h]
  FxDeviceBase *v43; // [rsp+C0h] [rbp+28h]

  Tag = PoolTag;
  v7 = 0;
  v9 = PoolType;
  v11 = 4294967039LL;
  if ( BufferSize < 0x1000
    && (!FxDriverGlobals->FxVerifierOn || !FxDriverGlobals->FxPoolTrackingOn)
    && (PoolType & 0xFFFFFEFF) != 1
    && (PoolType & 0xFFFFFEFF) != 5 )
  {
    if ( PoolType == NonPagedPoolMustSucceed
      || PoolType == NonPagedPoolCacheAligned
      || PoolType == NonPagedPoolCacheAlignedMustS )
    {
      v9 = ExDefaultNonPagedPoolType;
    }
    v40 = 0LL;
    LOBYTE(v40) = 1;
    if ( !(_DWORD)PoolTag )
      Tag = FxDriverGlobals->Tag;
    flags = FxGetContextSize(Attributes);
    *(_QWORD *)&v40 = (unsigned int)(BufferSize + 15);
    v32 = (((unsigned __int16)(BufferSize + 15) & 0xFFF0) + 128LL) & 0xFFFFFFFFFFFFFFF0uLL;
    v33 = v32 + 48;
    if ( v32 + 48 >= v32 )
    {
      v19 = -1LL;
      v20 = v32 + 48;
      id = 0;
      v30 = -1073741675;
      if ( !flags )
        goto LABEL_61;
      v34 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v34 < flags )
        return (unsigned int)-1073741670;
      v35 = v33 + v34;
      v20 = -1LL;
      if ( v35 >= v33 )
        v20 = v35;
      id = v35 < v33 ? 0xC0000095 : 0;
      if ( v35 >= v33 )
      {
LABEL_61:
        v36 = v20;
        if ( !FxDriverGlobals->FxVerifierHandle )
          goto LABEL_15;
        v17 = v20 + 48;
        v18 = v20;
        if ( v20 + 48 >= v20 )
          v19 = v20 + 48;
        v20 = v19;
        id = v17 < v18 ? 0xC0000095 : 0;
        if ( v17 >= v36 )
        {
LABEL_15:
          if ( id >= 0 )
          {
            v22 = retaddr;
            v39 = 0LL;
            v39.m128i_i8[0] = 1;
            v39.m128i_i32[2] = v9;
            if ( !FxDriverGlobals->FxPoolTrackingOn )
              v22 = 0LL;
            v23 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v39, v20, Tag, v22);
            v24 = (FxMemoryBuffer *)v23;
            if ( v23 )
            {
              if ( FxDriverGlobals->FxVerifierHandle )
              {
                v24 = (FxMemoryBuffer *)(v23 + 6);
                *(_OWORD *)v23 = 0LL;
                *((_OWORD *)v23 + 1) = 0LL;
                *((_OWORD *)v23 + 2) = 0LL;
                *((_DWORD *)v23 + 8) = 1146058822;
              }
              v25 = (_OWORD *)((char *)v24 + (unsigned __int16)((v40 & 0xFFF0) + 128));
              *v25 = 0LL;
              v25[1] = 0LL;
              v25[2] = 0LL;
              *(_QWORD *)v25 = v24;
              if ( Attributes )
              {
                ContextTypeInfo = Attributes->ContextTypeInfo;
                if ( ContextTypeInfo )
                {
                  ContextSizeOverride = Attributes->ContextSizeOverride;
                  if ( !ContextSizeOverride )
                    ContextSizeOverride = ContextTypeInfo->ContextSize;
                  memset(v25 + 3, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                }
                *((_QWORD *)v25 + 4) = Attributes->ContextTypeInfo;
              }
            }
            if ( v24 )
            {
              FxMemoryBuffer::FxMemoryBuffer(v24, FxDriverGlobals, BufferSize);
              if ( v29 )
              {
                *Object = v29;
                return v7;
              }
            }
          }
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      v20 = -1LL;
      id = -1073741675;
    }
    WPP_IFR_SF_DDid(
      FxDriverGlobals,
      v19,
      v30,
      flags,
      (const _GUID *)ObjectType,
      0x78u,
      (unsigned __int16)BufferSize,
      flags,
      id);
    goto LABEL_15;
  }
  if ( (PoolType & 0xFFFFFEFF) == 1 || (PoolType & 0xFFFFFEFF) == 5 )
  {
    v43 = FxDeviceBase::_SearchForDevice(FxDriverGlobals, Attributes);
    v12 = 1;
    if ( v43 )
    {
      v37 = FxObjectHandleAlloc2(FxDriverGlobals, v11, 0x80uLL, PoolTag, Attributes, 0, FxObjectTypeExternal);
      v14 = (FxMemoryObject *)v37;
      if ( v37 )
      {
        FxMemoryObject::FxMemoryObject((FxMemoryObject *)v37, FxDriverGlobals, 0x80u, BufferSize);
        v14[1].FxObject::__vftable = 0LL;
        v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
        v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
        v14->m_DeviceBase = v43;
      }
      else
      {
        v14 = 0LL;
      }
      if ( !v14 )
        return (unsigned int)-1073741670;
      goto LABEL_10;
    }
  }
  else
  {
    v12 = 0;
  }
  v13 = FxObjectHandleAlloc2(FxDriverGlobals, v11, 0x80uLL, PoolTag, Attributes, 0, FxObjectTypeExternal);
  v14 = (FxMemoryObject *)v13;
  if ( !v13 )
    return (unsigned int)-1073741670;
  FxMemoryObject::FxMemoryObject((FxMemoryObject *)v13, FxDriverGlobals, 0x80u, BufferSize);
  v14[1].FxObject::__vftable = 0LL;
  v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
  v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
LABEL_10:
  v15 = v14->GetBufferSize(&v14->IFxMemory);
  PoolWithTag = (FxMemoryObject_vtbl *)ExAllocatePoolWithTag(v9, v15, Tag);
  v14[1].FxObject::__vftable = PoolWithTag;
  if ( !PoolWithTag )
  {
    FxObject::DeleteFromFailedCreate(v14);
    return (unsigned int)-1073741670;
  }
  if ( v12 )
    v14->m_ObjectFlags |= 0x11u;
  *Object = v14;
  return v7;
}
