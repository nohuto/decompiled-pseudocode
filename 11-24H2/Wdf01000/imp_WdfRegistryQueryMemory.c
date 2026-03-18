/*
 * XREFs of imp_WdfRegistryQueryMemory @ 0x140078BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x140013010 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z @ 0x1400450E8 (-QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14004533C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1400454A4 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qZd @ 0x140099444 (WPP_IFR_SF_qZd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

__int64 __fastcall imp_WdfRegistryQueryMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        WDFMEMORY__ **Memory,
        unsigned int *ValueType)
{
  void **v9; // r14
  _FX_DRIVER_GLOBALS *v10; // rbx
  _FX_DRIVER_GLOBALS *v11; // rcx
  __int64 result; // rax
  unsigned int v13; // r8d
  unsigned int v14; // r15d
  ULONG Tag; // ecx
  void *v16; // rax
  FX_POOL **v17; // rax
  FX_POOL **v18; // r12
  int v19; // edi
  int v20; // eax
  unsigned int v21; // r15d
  __int64 v22; // r9
  FxMemoryObject *v23; // rbx
  void *v24; // rax
  unsigned __int16 v25; // r9
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-40h]
  int v27; // [rsp+38h] [rbp-28h]
  FxRegKey *pKey; // [rsp+40h] [rbp-20h] BYREF
  __m128i v29; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int dataLength; // [rsp+A0h] [rbp+40h] BYREF
  FxMemoryObject *pObject; // [rsp+B0h] [rbp+50h] BYREF
  _POOL_TYPE v33; // [rsp+B8h] [rbp+58h]

  v33 = PoolType;
  pKey = 0LL;
  pObject = 0LL;
  dataLength = 0;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey,
    (_FX_DRIVER_GLOBALS **)&pObject);
  if ( !ValueName )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)pObject, retaddr);
  v9 = (void **)Memory;
  if ( !Memory )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)pObject, retaddr);
  v10 = (_FX_DRIVER_GLOBALS *)pObject;
  v11 = (_FX_DRIVER_GLOBALS *)pObject;
  *Memory = 0LL;
  result = FxVerifierCheckIrqlLevel(v11, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v10, MemoryAttributes, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v10, ValueName);
      if ( (int)result >= 0 )
      {
        result = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, &dataLength, 0LL);
        if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -2147483643 )
        {
          v14 = dataLength;
          if ( !dataLength )
          {
            WPP_IFR_SF_qZd(v10, 0, v13, 0xFu, (const _GUID *)ObjectGlobals, Key, ValueName, v27);
            return 3221225609LL;
          }
          Tag = v10->Tag;
          v16 = retaddr;
          v29.m128i_i64[0] = 0LL;
          v29.m128i_i64[1] = 256LL;
          if ( !v10->FxPoolTrackingOn )
            v16 = 0LL;
          v17 = FxPoolAllocator(v10, &v10->FxPoolFrameworks, &v29, dataLength, Tag, v16);
          v18 = v17;
          if ( !v17 )
          {
            v19 = -1073741670;
            WPP_IFR_SF_qd(v10, 2u, 2u, 0x10u, WPP_FxRegistryAPI_cpp_Traceguids, Key, -1073741670);
            return (unsigned int)v19;
          }
          v20 = FxRegKey::QueryValue(pKey, ValueName, v14, v17, &dataLength, ValueType);
          v19 = v20;
          if ( v20 < 0 )
          {
            v25 = 18;
          }
          else
          {
            v21 = dataLength;
            v22 = v10->Tag;
            pObject = 0LL;
            v20 = FxMemoryObject::_Create(v10, MemoryAttributes, v33, v22, dataLength, &pObject);
            v19 = v20;
            if ( v20 >= 0 )
            {
              v23 = pObject;
              v19 = FxObject::Commit(pObject, MemoryAttributes, v9, 0LL, 1u);
              if ( v19 < 0 )
              {
                FxObject::DeleteFromFailedCreate(v23);
              }
              else
              {
                v24 = (void *)v23->GetBuffer(&v23->IFxMemory);
                memmove(v24, v18, v21);
              }
              goto LABEL_24;
            }
            v25 = 17;
          }
          WPP_IFR_SF_qd(v10, 2u, 2u, v25, WPP_FxRegistryAPI_cpp_Traceguids, Key, v20);
LABEL_24:
          FxPoolFree(v18);
          return (unsigned int)v19;
        }
      }
    }
  }
  return result;
}
