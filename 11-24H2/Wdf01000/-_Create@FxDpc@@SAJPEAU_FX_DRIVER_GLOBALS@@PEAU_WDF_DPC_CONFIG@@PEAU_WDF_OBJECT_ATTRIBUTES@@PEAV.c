/*
 * XREFs of ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14006AEC8
 * Callers:
 *     imp_WdfDpcCreate @ 0x14006ADB0 (imp_WdfDpcCreate.c)
 * Callees:
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14006AF7C (--0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14006AFE0 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 */

__int64 __fastcall FxDpc::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_DPC_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFDPC__ **Dpc)
{
  FX_POOL **v9; // rax
  FxDpc *v10; // rax
  FxObject *v11; // rbx
  int v12; // edi

  v9 = FxObjectHandleAlloc2(
         FxDriverGlobals,
         (unsigned __int64)Config,
         0xE0uLL,
         (__int64)ParentObject,
         Attributes,
         0,
         FxObjectTypeExternal);
  if ( !v9 )
    return 3221225626LL;
  FxDpc::FxDpc((FxDpc *)v9, FxDriverGlobals);
  v11 = v10;
  if ( !v10 )
    return 3221225626LL;
  v12 = FxDpc::Initialize(v10, Attributes, Config, ParentObject, Dpc);
  if ( v12 < 0 )
    FxObject::DeleteFromFailedCreate(v11);
  return (unsigned int)v12;
}
