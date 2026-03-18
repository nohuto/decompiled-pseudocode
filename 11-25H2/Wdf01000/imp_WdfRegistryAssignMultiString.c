/*
 * XREFs of imp_WdfRegistryAssignMultiString @ 0x1400997A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140052C6C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x140053538 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x1400713D0 (-FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z.c)
 *     ?FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z @ 0x140071F00 (-FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        WDFCOLLECTION__ *StringsCollection)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  __int64 result; // rax
  FxCollectionInternal *v9; // rcx
  unsigned __int64 v10; // r14
  unsigned int v11; // esi
  bool v12; // zf
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rsi
  unsigned int v16; // edi
  FxCollectionInternal *v17; // rdx
  NTSTATUS v18; // eax
  FxRegKey *pKey; // [rsp+40h] [rbp-20h] BYREF
  __m128i v20; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+88h] [rbp+28h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+90h] [rbp+30h] BYREF
  FxCollection *pCollection; // [rsp+A0h] [rbp+40h] BYREF

  pFxDriverGlobals = 0LL;
  pCollection = 0LL;
  pKey = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey,
    &pFxDriverGlobals);
  if ( !ValueName )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( !StringsCollection )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v7 = pFxDriverGlobals;
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v7, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(v7, (unsigned __int64)StringsCollection, 0x100Eu, (void **)&pCollection);
      v9 = (FxCollectionInternal *)pCollection;
      LOBYTE(pFxDriverGlobals) = 0;
      if ( pCollection )
        v9 = &pCollection->FxCollectionInternal;
      v10 = FxCalculateTotalStringSize(v9, 1u, (unsigned __int8 *)&pFxDriverGlobals);
      if ( v10 > 0xFFFFFFFF )
      {
        v11 = -1073741675;
        WPP_IFR_SF_qd(v7, 2u, 2u, 0x28u, WPP_FxRegistryAPI_cpp_Traceguids, StringsCollection, -1073741675);
        return v11;
      }
      if ( !(_BYTE)pFxDriverGlobals )
      {
        v11 = -1073741811;
        WPP_IFR_SF_qqd(v7, 2u, 2u, 0x29u, WPP_FxRegistryAPI_cpp_Traceguids, Key, StringsCollection, 0xC000000D);
        return v11;
      }
      v12 = v7->FxPoolTrackingOn == 0;
      Tag = v7->Tag;
      v20.m128i_i64[0] = 0LL;
      v20.m128i_i64[1] = 256LL;
      if ( v12 )
        v14 = 0LL;
      else
        v14 = (void *)retaddr;
      v15 = FxPoolAllocator(v7, &v7->FxPoolFrameworks, &v20, (unsigned int)v10, Tag, v14);
      if ( v15 )
      {
        if ( pCollection )
          v17 = &pCollection->FxCollectionInternal;
        else
          v17 = 0LL;
        FxCopyMultiSz((wchar_t *)v15, v17);
        v18 = ZwSetValueKey(pKey->m_Key, ValueName, 0, 7u, v15, v10);
        v16 = v18;
        if ( v18 < 0 )
          WPP_IFR_SF_qd(v7, 2u, 2u, 0x2Bu, WPP_FxRegistryAPI_cpp_Traceguids, Key, v18);
        else
          FxRegKey::_VerifyStateSeparationRegistryPolicy(pKey->m_Globals, pKey->m_Key);
        FxPoolFree(v15);
      }
      else
      {
        v16 = -1073741670;
        WPP_IFR_SF_qd(v7, 2u, 2u, 0x2Au, WPP_FxRegistryAPI_cpp_Traceguids, Key, -1073741670);
      }
      return v16;
    }
  }
  return result;
}
