/*
 * XREFs of ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x140022118
 * Callers:
 *     imp_WdfWorkItemCreate @ 0x140022280 (imp_WdfWorkItemCreate.c)
 * Callees:
 *     ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400221CC (--0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x140022EC4 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 */

__int64 __fastcall FxWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  FxWorkItem *v9; // rax
  FxWorkItem *v10; // rax
  FxObject *v11; // rbx
  int v12; // edi

  v9 = (FxWorkItem *)FxObjectHandleAlloc2(
                       FxDriverGlobals,
                       (unsigned __int64)Config,
                       0xD0uLL,
                       (unsigned int)ParentObject,
                       Attributes,
                       0,
                       FxObjectTypeExternal);
  if ( !v9 )
    return 3221225626LL;
  FxWorkItem::FxWorkItem(v9, FxDriverGlobals);
  v11 = v10;
  if ( !v10 )
    return 3221225626LL;
  v12 = FxWorkItem::Initialize(v10, Attributes, Config, ParentObject, WorkItem);
  if ( v12 < 0 )
    FxObject::DeleteFromFailedCreate(v11);
  return (unsigned int)v12;
}
