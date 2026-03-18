/*
 * XREFs of ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14004E2AC
 * Callers:
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004CD14 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14004DFD4 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F6B0 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14004E344 (--0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x14004F66C (-Initialize@FxDisposeList@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall FxDisposeList::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *WdmObject,
        FxDisposeList **pObject,
        __int64 a4)
{
  FX_POOL **v7; // rax
  FxDisposeList *v8; // rax
  FxDisposeList *v9; // rbx
  int v11; // edi

  *pObject = 0LL;
  v7 = FxObjectHandleAlloc2(FxDriverGlobals, (unsigned __int64)WdmObject, 0xA0uLL, a4, 0LL, 0, FxObjectTypeInternal);
  if ( !v7 )
    return 3221225626LL;
  FxDisposeList::FxDisposeList((FxDisposeList *)v7, FxDriverGlobals);
  v9 = v8;
  if ( !v8 )
    return 3221225626LL;
  v11 = FxDisposeList::Initialize(v8, WdmObject);
  if ( v11 < 0 )
    FxObject::DeleteFromFailedCreate(v9);
  else
    *pObject = v9;
  return (unsigned int)v11;
}
