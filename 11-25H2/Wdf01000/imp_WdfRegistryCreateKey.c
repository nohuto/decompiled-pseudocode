/*
 * XREFs of imp_WdfRegistryCreateKey @ 0x140054A10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400086C4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140052C6C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400532F8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x140053538 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z @ 0x1400564AC (-_Create@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXKKPEAK@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryCreateKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        const _UNICODE_STRING *KeyName,
        unsigned int DesiredAccess,
        unsigned int CreateOptions,
        unsigned int *CreateDisposition,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v8; // rsi
  _FX_DRIVER_GLOBALS *v9; // rbx
  _FX_DRIVER_GLOBALS *v11; // rcx
  void *v12; // r13
  WDFKEY__ **v13; // r14
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  FX_POOL **v17; // rax
  FX_POOL **v18; // rdi
  int v19; // esi
  unsigned __int64 ParentObject; // rdx
  signed int v21; // eax
  void *retaddr; // [rsp+88h] [rbp+40h]
  unsigned int localDisposition; // [rsp+90h] [rbp+48h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+98h] [rbp+50h] BYREF
  FxObject *pParent; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+60h]

  v26 = DesiredAccess;
  v8 = KeyAttributes;
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  localDisposition = 0;
  v11 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( ParentKey )
  {
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v11, (unsigned __int64)ParentKey, 0x1006u, (void **)&pParent, &pFxDriverGlobals);
    v12 = *(void **)&pParent[1].m_Type;
LABEL_3:
    v9 = pFxDriverGlobals;
    goto LABEL_4;
  }
  v12 = 0LL;
  if ( (int)FxValidateObjectAttributesForParentHandle(v11, KeyAttributes, 0) >= 0 )
  {
    ParentObject = (unsigned __int64)v8->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v9, ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
    goto LABEL_3;
  }
LABEL_4:
  if ( !KeyName )
    FxVerifierNullBugCheck(v9, retaddr);
  v13 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  pFxDriverGlobals = 0LL;
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v9, v8, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v9, KeyName);
      if ( (int)result >= 0 )
      {
        v17 = FxObjectHandleAlloc2(v9, v15, 0x78uLL, v16, v8, 0, FxObjectTypeExternal);
        v18 = v17;
        if ( !v17 )
        {
          WPP_IFR_SF_D(v9, 2u, 2u, 0xCu, WPP_FxRegistryAPI_cpp_Traceguids, 0xC000009A);
          return 3221225626LL;
        }
        FxObject::FxObject((FxObject *)v17, (_FX_DRIVER_GLOBALS *)0x1006, 0x78u, v9);
        *((_WORD *)v18 + 12) |= 0x11u;
        *v18 = (FX_POOL *)FxRegKey::`vftable';
        v18[13] = 0LL;
        v18[14] = 0LL;
        v19 = FxObject::Commit((FxObject *)v18, v8, (void **)&pFxDriverGlobals, 0LL, 1u);
        if ( v19 >= 0 )
        {
          v21 = FxRegKey::_Create(v12, KeyName, (void **)v18 + 14, v26, CreateOptions, &localDisposition);
          v19 = v21;
          if ( v21 >= 0 )
          {
            FxRegKey::_VerifyStateSeparationRegistryPolicy((_FX_DRIVER_GLOBALS *)v18[2], v18[14]);
            if ( CreateDisposition )
              *CreateDisposition = localDisposition;
            *v13 = (WDFKEY__ *)pFxDriverGlobals;
            return (unsigned int)v19;
          }
          WPP_IFR_SF_D(v9, 2u, 2u, 0xDu, WPP_FxRegistryAPI_cpp_Traceguids, v21);
        }
        FxObject::DeleteFromFailedCreate((FxObject *)v18);
        return (unsigned int)v19;
      }
    }
  }
  return result;
}
