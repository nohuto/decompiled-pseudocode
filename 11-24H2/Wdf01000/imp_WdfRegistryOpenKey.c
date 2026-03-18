/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1400810E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140020DF4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14004533C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140046AE8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14006D5F4 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z @ 0x14006FF90 (-_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?DvIsolationRulesClearCallerContext@FxRegKey@@SAXXZ @ 0x140099F08 (-DvIsolationRulesClearCallerContext@FxRegKey@@SAXXZ.c)
 *     ?DvIsolationRulesSetCallerContext@FxRegKey@@SAEPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x140099F34 (-DvIsolationRulesSetCallerContext@FxRegKey@@SAEPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // rsi
  _FX_DRIVER_GLOBALS *v7; // r14
  _FX_DRIVER_GLOBALS *v8; // rbx
  _FX_DRIVER_GLOBALS *v9; // rcx
  ACCESS_MASK v10; // r13d
  unsigned __int64 ParentObject; // rdx
  WDFKEY__ **v13; // r12
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  FX_POOL **v17; // rax
  FX_POOL **v18; // rdi
  signed int v19; // esi
  unsigned __int8 v20; // r13
  void **v21; // r14
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+98h] [rbp+40h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+A0h] [rbp+48h] BYREF
  void *v25; // [rsp+A8h] [rbp+50h]
  FxObject *pParent; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+60h]

  v27 = DesiredAccess;
  v6 = KeyAttributes;
  v7 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  v8 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  keyHandle = 0LL;
  v10 = DesiredAccess;
  if ( ParentKey )
  {
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v9, (unsigned __int64)ParentKey, 0x1006u, (void **)&pParent, &pFxDriverGlobals);
    v25 = *(void **)&pParent[1].m_Type;
  }
  else
  {
    v25 = 0LL;
    if ( (int)FxValidateObjectAttributesForParentHandle(v9, KeyAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = (unsigned __int64)v6->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v8, ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
  }
  v8 = pFxDriverGlobals;
LABEL_6:
  if ( !KeyName )
    FxVerifierNullBugCheck(v8, retaddr);
  v13 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(v8, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v8, v6, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v8, KeyName);
      if ( (int)result >= 0 )
      {
        v17 = FxObjectHandleAlloc2(v8, v15, 0x78uLL, v16, v6, 0, FxObjectTypeExternal);
        v18 = v17;
        if ( v17 )
        {
          FxObject::FxObject((FxObject *)v17, (_FX_DRIVER_GLOBALS *)0x1006, 0x78u, v8);
          v18[13] = 0LL;
          *((_WORD *)v18 + 12) |= 0x11u;
          v18[14] = 0LL;
          *v18 = (FX_POOL *)FxRegKey::`vftable';
          v19 = FxObject::Commit((FxObject *)v18, v6, (void **)&keyHandle, 0LL, 1u);
          if ( v19 >= 0 )
          {
            if ( unk_1400C80DC )
            {
              v20 = 0;
              if ( v7 && v7->FxVerifierOn )
                v20 = FxRegKey::DvIsolationRulesSetCallerContext(v7, v7->ImageAddress);
              v21 = (void **)(v18 + 14);
              v19 = FxRegKey::_OpenKey(v25, KeyName, (void **)v18 + 14, v27);
              if ( v20 )
                FxRegKey::DvIsolationRulesClearCallerContext();
              v10 = v27;
            }
            else
            {
              v21 = (void **)(v18 + 14);
              v19 = FxRegKey::_OpenKey(v25, KeyName, (void **)v18 + 14, v10);
            }
            if ( v19 >= 0 )
            {
              if ( (v10 & 0x50030006) != 0 )
                FxRegKey::_VerifyStateSeparationRegistryPolicy((_FX_DRIVER_GLOBALS *)v18[2], *v21);
              *v13 = keyHandle;
              return (unsigned int)v19;
            }
            WPP_IFR_SF_D(v8, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, v19);
          }
          FxObject::DeleteFromFailedCreate((FxObject *)v18);
          return (unsigned int)v19;
        }
        WPP_IFR_SF_D(v8, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, 0xC000009A);
        return 3221225626LL;
      }
    }
  }
  return result;
}
