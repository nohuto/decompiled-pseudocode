/*
 * XREFs of imp_WdfRegistryCreateKey @ 0x140080E20
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
 *     ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x1400740B4 (-_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?DvIsolationRulesClearCallerContext@FxRegKey@@SAXXZ @ 0x140099F08 (-DvIsolationRulesClearCallerContext@FxRegKey@@SAXXZ.c)
 *     ?DvIsolationRulesSetCallerContext@FxRegKey@@SAEPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x140099F34 (-DvIsolationRulesSetCallerContext@FxRegKey@@SAEPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryCreateKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        unsigned int DesiredAccess,
        ULONG CreateOptions,
        unsigned int *CreateDisposition,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v8; // rsi
  _FX_DRIVER_GLOBALS *v9; // r14
  _FX_DRIVER_GLOBALS *v10; // rbx
  _FX_DRIVER_GLOBALS *v11; // rcx
  void *v13; // r13
  unsigned __int64 ParentObject; // rdx
  WDFKEY__ **v15; // r15
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  FX_POOL **v19; // rax
  FX_POOL **v20; // rdi
  signed int v21; // esi
  unsigned __int8 v22; // r13
  void **v23; // r14
  void *v24; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+98h] [rbp+40h]
  unsigned int localDisposition; // [rsp+A0h] [rbp+48h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+A8h] [rbp+50h] BYREF
  FxObject *pParent; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+60h]

  v29 = DesiredAccess;
  v8 = KeyAttributes;
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  v10 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  v11 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  localDisposition = 0;
  if ( ParentKey )
  {
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v11, (unsigned __int64)ParentKey, 0x1006u, (void **)&pParent, &pFxDriverGlobals);
    v13 = *(void **)&pParent[1].m_Type;
    v24 = v13;
  }
  else
  {
    v24 = 0LL;
    v13 = 0LL;
    if ( (int)FxValidateObjectAttributesForParentHandle(v11, KeyAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = (unsigned __int64)v8->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v10, ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
  }
  v10 = pFxDriverGlobals;
LABEL_6:
  if ( !KeyName )
    FxVerifierNullBugCheck(v10, retaddr);
  v15 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(v10, retaddr);
  *Key = 0LL;
  pFxDriverGlobals = 0LL;
  result = FxVerifierCheckIrqlLevel(v10, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v10, v8, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v10, KeyName);
      if ( (int)result >= 0 )
      {
        v19 = FxObjectHandleAlloc2(v10, v17, 0x78uLL, v18, v8, 0, FxObjectTypeExternal);
        v20 = v19;
        if ( v19 )
        {
          FxObject::FxObject((FxObject *)v19, (_FX_DRIVER_GLOBALS *)0x1006, 0x78u, v10);
          v20[13] = 0LL;
          *((_WORD *)v20 + 12) |= 0x11u;
          v20[14] = 0LL;
          *v20 = (FX_POOL *)FxRegKey::`vftable';
          v21 = FxObject::Commit((FxObject *)v20, v8, (void **)&pFxDriverGlobals, 0LL, 1u);
          if ( v21 >= 0 )
          {
            if ( unk_1400C80DC )
            {
              v22 = 0;
              if ( v9 && v9->FxVerifierOn )
                v22 = FxRegKey::DvIsolationRulesSetCallerContext(v9, v9->ImageAddress);
              v23 = (void **)(v20 + 14);
              v21 = FxRegKey::_Create(v24, KeyName, (void **)v20 + 14, v29, CreateOptions, &localDisposition);
              if ( v22 )
                FxRegKey::DvIsolationRulesClearCallerContext();
            }
            else
            {
              v23 = (void **)(v20 + 14);
              v21 = FxRegKey::_Create(v13, KeyName, (void **)v20 + 14, v29, CreateOptions, &localDisposition);
            }
            if ( v21 >= 0 )
            {
              FxRegKey::_VerifyStateSeparationRegistryPolicy((_FX_DRIVER_GLOBALS *)v20[2], *v23);
              if ( CreateDisposition )
                *CreateDisposition = localDisposition;
              *v15 = (WDFKEY__ *)pFxDriverGlobals;
              return (unsigned int)v21;
            }
            WPP_IFR_SF_D(v10, 2u, 2u, 0xDu, WPP_FxRegistryAPI_cpp_Traceguids, v21);
          }
          FxObject::DeleteFromFailedCreate((FxObject *)v20);
          return (unsigned int)v21;
        }
        WPP_IFR_SF_D(v10, 2u, 2u, 0xCu, WPP_FxRegistryAPI_cpp_Traceguids, 0xC000009A);
        return 3221225626LL;
      }
    }
  }
  return result;
}
