/*
 * XREFs of ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14006B8D8
 * Callers:
 *     imp_WdfObjectCreate @ 0x14006B7E0 (imp_WdfObjectCreate.c)
 *     imp_WdfCxDeviceInitAllocateContext @ 0x140092B90 (imp_WdfCxDeviceInitAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140022034 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxUserObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxUserObject **pUserObject,
        __int64 a4)
{
  FX_POOL **v7; // rax
  FxUserObject *v8; // rbx
  signed int _a1; // eax
  unsigned int v10; // esi
  void *handle; // [rsp+78h] [rbp+20h] BYREF

  v7 = FxObjectHandleAlloc2(
         FxDriverGlobals,
         (unsigned __int64)Attributes,
         0x78uLL,
         a4,
         Attributes,
         0,
         FxObjectTypeExternal);
  v8 = (FxUserObject *)v7;
  if ( v7 )
  {
    FxNonPagedObject::FxNonPagedObject((FxNonPagedObject *)v7, (_FX_DRIVER_GLOBALS *)0x100C, 0x78u, FxDriverGlobals);
    v8->__vftable = (FxUserObject_vtbl *)FxUserObject::`vftable';
    _a1 = FxObject::Commit(v8, Attributes, &handle, 0LL, 1u);
    v10 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x14u, 0xBu, WPP_FxUserObject_cpp_Traceguids, _a1);
      FxObject::DeleteFromFailedCreate(v8);
    }
    else
    {
      *pUserObject = v8;
    }
    return v10;
  }
  else
  {
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0x14u, 0xAu, WPP_FxUserObject_cpp_Traceguids);
    return 3221225626LL;
  }
}
