/*
 * XREFs of imp_WdfDriverOpenPersistentStateRegistryKey @ 0x140094220
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140046AE8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverOpenPersistentStateRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  WDFKEY__ **v5; // r14
  _FX_DRIVER_GLOBALS *v6; // rdi
  _FX_DRIVER_GLOBALS *v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  FX_POOL **v14; // rax
  FX_POOL **v15; // rbx
  int v16; // esi
  signed int v17; // eax
  void *hKey; // [rsp+40h] [rbp-28h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h]
  FxDriver *pDriver; // [rsp+70h] [rbp+8h] BYREF

  v5 = Key;
  v6 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDriver = 0LL;
  hKey = 0LL;
  keyHandle = 0LL;
  v10 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !Key )
    FxVerifierNullBugCheck(v10, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v10, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v6, KeyAttributes, 0);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(v6, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
      v14 = FxObjectHandleAlloc2(v6, v12, 0x78uLL, v13, KeyAttributes, 0, FxObjectTypeExternal);
      v15 = v14;
      if ( v14 )
      {
        FxObject::FxObject((FxObject *)v14, (_FX_DRIVER_GLOBALS *)0x1006, 0x78u, v6);
        *((_WORD *)v15 + 12) |= 0x11u;
        *v15 = (FX_POOL *)FxRegKey::`vftable';
        v15[13] = 0LL;
        v15[14] = 0LL;
        v16 = FxObject::Commit((FxObject *)v15, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
        if ( v16 >= 0 )
        {
          v17 = IoOpenDriverRegistryKey(pDriver->m_DriverObject.m_DriverObject, 1LL, DesiredAccess, 0LL, &hKey);
          v16 = v17;
          if ( v17 >= 0 )
          {
            v15[14] = (FX_POOL *)hKey;
            *v5 = keyHandle;
            return (unsigned int)v16;
          }
          WPP_IFR_SF_D(v6, 2u, 6u, 0xCu, WPP_FxDriverApiKm_cpp_Traceguids, v17);
        }
        FxObject::DeleteFromFailedCreate((FxObject *)v15);
        return (unsigned int)v16;
      }
      return 3221225626LL;
    }
  }
  return result;
}
