/*
 * XREFs of imp_WdfStringCreate @ 0x140020B30
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
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140020EC0 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x140031530 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14004533C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfStringCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        const _UNICODE_STRING *UnicodeString,
        _WDF_OBJECT_ATTRIBUTES *StringAttributes,
        WDFSTRING__ **String)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  void *ParentObject; // rdx
  int result; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // ebx
  FX_POOL **v13; // rax
  __int64 v14; // rax
  FxObject *v15; // rsi
  void *retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  FxObject *pParent; // [rsp+88h] [rbp+20h] BYREF

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  if ( FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], StringAttributes, 0) >= 0 )
  {
    ParentObject = StringAttributes->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v5, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
    v5 = pFxDriverGlobals;
  }
  if ( !String )
    FxVerifierNullBugCheck(v5, retaddr);
  *String = 0LL;
  result = FxVerifierCheckIrqlLevel(v5, 0);
  if ( result >= 0 )
  {
    result = FxValidateObjectAttributes(v5, StringAttributes, 0);
    v12 = result;
    if ( result >= 0 )
    {
      if ( !UnicodeString || (result = FxValidateUnicodeString(v5, UnicodeString), v12 = result, result >= 0) )
      {
        v13 = FxObjectHandleAlloc2(v5, v10, 0x78uLL, v11, StringAttributes, 0, FxObjectTypeExternal);
        if ( v13 && (FxString::FxString((FxString *)v13, v5), (v15 = (FxObject *)v14) != 0LL) )
        {
          if ( UnicodeString )
            v12 = FxDuplicateUnicodeString(
                    *(_FX_DRIVER_GLOBALS **)(v14 + 16),
                    UnicodeString,
                    (_UNICODE_STRING *)(v14 + 104));
          if ( v12 < 0 || (v12 = FxObject::Commit(v15, StringAttributes, (void **)String, 0LL, 1u), v12 < 0) )
            FxObject::DeleteFromFailedCreate(v15);
        }
        else
        {
          v12 = -1073741670;
          WPP_IFR_SF_D(v5, 2u, 2u, 0xAu, WPP_FxStringAPI_cpp_Traceguids, 0xC000009A);
        }
        return v12;
      }
    }
  }
  return result;
}
