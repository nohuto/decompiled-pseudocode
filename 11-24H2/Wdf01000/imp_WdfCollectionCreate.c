/*
 * XREFs of imp_WdfCollectionCreate @ 0x14006EC50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140020DF4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140039854 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCollectionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *CollectionAttributes,
        WDFCOLLECTION__ **Collection)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  FX_POOL **v9; // rax
  FX_POOL **v10; // r14
  signed int v11; // eax
  unsigned int v12; // edi
  void *ParentObject; // rdx
  void *retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  WDFCOLLECTION__ *hCol; // [rsp+80h] [rbp+18h] BYREF
  FxObject *pParent; // [rsp+88h] [rbp+20h] BYREF

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  hCol = 0LL;
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], CollectionAttributes, 0) >= 0 )
  {
    ParentObject = CollectionAttributes->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v3, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
    v3 = pFxDriverGlobals;
  }
  if ( !Collection )
    FxVerifierNullBugCheck(v3, retaddr);
  *Collection = 0LL;
  result = FxValidateObjectAttributes(v3, CollectionAttributes, 0);
  if ( (int)result >= 0 )
  {
    v9 = FxObjectHandleAlloc2(v3, v7, 0x90uLL, v8, CollectionAttributes, 0, FxObjectTypeExternal);
    v10 = v9;
    if ( v9 )
    {
      FxNonPagedObject::FxNonPagedObject((FxNonPagedObject *)v9, (_FX_DRIVER_GLOBALS *)0x100E, 0x90u, v3);
      *((_DWORD *)v10 + 30) = 0;
      v10[17] = (FX_POOL *)(v10 + 16);
      v10[16] = (FX_POOL *)(v10 + 16);
      *v10 = (FX_POOL *)FxIoResList::`vftable';
      v11 = FxObject::Commit((FxObject *)v10, CollectionAttributes, (void **)&hCol, 0LL, 1u);
      v12 = v11;
      if ( v11 < 0 )
      {
        WPP_IFR_SF_D(v3, 2u, 2u, 0xAu, WPP_FxCollectionApi_cpp_Traceguids, v11);
        FxObject::DeleteFromFailedCreate((FxObject *)v10);
      }
      else
      {
        *Collection = hCol;
      }
    }
    else
    {
      WPP_IFR_SF_(v3, 2u, 2u, 0xBu, WPP_FxCollectionApi_cpp_Traceguids);
      return (unsigned int)-1073741670;
    }
    return v12;
  }
  return result;
}
