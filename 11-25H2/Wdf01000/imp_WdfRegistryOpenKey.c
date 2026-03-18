/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x140052930
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
 *     ?_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z @ 0x140053388 (-_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x140053538 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        const _UNICODE_STRING *KeyName,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // rsi
  _FX_DRIVER_GLOBALS *v7; // rbx
  _FX_DRIVER_GLOBALS *v10; // rcx
  WDFKEY__ **v11; // r14
  int result; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  FX_POOL **v15; // rax
  FX_POOL **v16; // rdi
  int v17; // esi
  signed int v18; // eax
  unsigned __int64 ParentObject; // rdx
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+90h] [rbp+40h] BYREF
  FxObject *pParent; // [rsp+98h] [rbp+48h] BYREF
  void *v24; // [rsp+A0h] [rbp+50h]

  v6 = KeyAttributes;
  v7 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  keyHandle = 0LL;
  v10 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( ParentKey )
  {
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v10, (unsigned __int64)ParentKey, 0x1006u, (void **)&pParent, &pFxDriverGlobals);
    v24 = *(void **)&pParent[1].m_Type;
LABEL_3:
    v7 = pFxDriverGlobals;
    goto LABEL_4;
  }
  v24 = 0LL;
  if ( (int)FxValidateObjectAttributesForParentHandle(v10, KeyAttributes, 0) >= 0 )
  {
    ParentObject = (unsigned __int64)v6->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v7, ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
    goto LABEL_3;
  }
LABEL_4:
  if ( !KeyName )
    FxVerifierNullBugCheck(v7, retaddr);
  v11 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(v7, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v7, 0);
  if ( result >= 0 )
  {
    result = FxValidateObjectAttributes(v7, v6, 0);
    if ( result >= 0 )
    {
      result = FxValidateUnicodeString(v7, KeyName);
      if ( result >= 0 )
      {
        v15 = FxObjectHandleAlloc2(v7, v13, 0x78uLL, v14, v6, 0, FxObjectTypeExternal);
        v16 = v15;
        if ( !v15 )
        {
          WPP_IFR_SF_D(v7, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, 0xC000009A);
          return -1073741670;
        }
        FxObject::FxObject((FxObject *)v15, 0x1006u, 0x78u, v7);
        *((_WORD *)v16 + 12) |= 0x11u;
        *v16 = (FX_POOL *)FxRegKey::`vftable';
        v16[13] = 0LL;
        v16[14] = 0LL;
        v17 = FxObject::Commit((FxObject *)v16, v6, (void **)&keyHandle, 0LL, 1u);
        if ( v17 >= 0 )
        {
          v18 = FxRegKey::_OpenKey(v24, KeyName, (void **)v16 + 14, DesiredAccess);
          v17 = v18;
          if ( v18 >= 0 )
          {
            if ( (DesiredAccess & 0x50030006) != 0 )
              FxRegKey::_VerifyStateSeparationRegistryPolicy((_FX_DRIVER_GLOBALS *)v16[2], v16[14]);
            *v11 = keyHandle;
            return v17;
          }
          WPP_IFR_SF_D(v7, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, v18);
        }
        FxObject::DeleteFromFailedCreate((FxObject *)v16);
        return v17;
      }
    }
  }
  return result;
}
