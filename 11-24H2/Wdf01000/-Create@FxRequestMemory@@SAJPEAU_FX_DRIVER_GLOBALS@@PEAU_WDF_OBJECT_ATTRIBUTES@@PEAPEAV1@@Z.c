/*
 * XREFs of ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14002080C
 * Callers:
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140020120 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140020544 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x140013954 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 */

__int64 __fastcall FxRequestMemory::Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Object,
        FxRequestMemory **a3,
        __int64 a4)
{
  FX_POOL **v6; // rax
  FxRequestMemory *v7; // rbx
  __int64 result; // rax

  v6 = FxObjectHandleAlloc2(DriverGlobals, (unsigned __int64)Object, 0x98uLL, a4, 0LL, 0, FxObjectTypeExternal);
  v7 = (FxRequestMemory *)v6;
  if ( !v6 )
    return 3221225626LL;
  FxMemoryObject::FxMemoryObject((FxMemoryObject *)v6, DriverGlobals, 0x98u, 0LL);
  v7->m_pBuffer = 0LL;
  v7->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxRequestMemory_vtbl *)FxRequestMemory::`vftable'{for `FxObject'};
  v7->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxRequestMemory::`vftable'{for `IFxMemory'};
  result = 0LL;
  v7->m_Request = 0LL;
  v7->m_Mdl = 0LL;
  v7->m_Flags = 0;
  *a3 = v7;
  return result;
}
