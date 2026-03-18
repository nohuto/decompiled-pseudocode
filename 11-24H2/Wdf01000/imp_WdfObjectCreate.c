/*
 * XREFs of imp_WdfObjectCreate @ 0x140069D00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140020DF4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x140069DF8 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfObjectCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Object)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  void *ParentObject; // rdx
  __int64 result; // rax
  int v8; // edi
  void *_a1; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxUserObject *pUserObject; // [rsp+60h] [rbp+18h] BYREF
  FxObject *pParent; // [rsp+68h] [rbp+20h] BYREF

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  pUserObject = 0LL;
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 0) >= 0 )
  {
    ParentObject = Attributes->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v3, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
    v3 = pFxDriverGlobals;
  }
  if ( !Object )
    FxVerifierNullBugCheck(v3, retaddr);
  result = FxValidateObjectAttributes(v3, Attributes, 2);
  if ( (int)result >= 0 )
  {
    v8 = FxUserObject::_Create(v3, Attributes, &pUserObject);
    if ( v8 >= 0 )
    {
      if ( pUserObject->m_ObjectSize )
        _a1 = (void *)((unsigned __int64)pUserObject ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      *Object = _a1;
      if ( v3->FxVerboseOn )
        WPP_IFR_SF_q(v3, 5u, 0x13u, 0xAu, WPP_FxUserObjectApi_cpp_Traceguids, _a1);
    }
    return (unsigned int)v8;
  }
  return result;
}
