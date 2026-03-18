/*
 * XREFs of ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x14003A52C
 * Callers:
 *     imp_WdfTimerCreate @ 0x14003B7B0 (imp_WdfTimerCreate.c)
 * Callees:
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x14003A14C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ??0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14003A5E0 (--0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxTimer::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  FX_POOL **v9; // rax
  FxTimer *v10; // rax
  FxObject *v11; // rbx
  int v12; // edi

  v9 = FxObjectHandleAlloc2(
         FxDriverGlobals,
         (unsigned __int64)Config,
         0x160uLL,
         (__int64)ParentObject,
         Attributes,
         0,
         FxObjectTypeExternal);
  if ( !v9 )
    return 3221225626LL;
  FxTimer::FxTimer((FxTimer *)v9, FxDriverGlobals);
  v11 = v10;
  if ( !v10 )
    return 3221225626LL;
  v12 = FxTimer::Initialize(v10, Attributes, Config, ParentObject, Timer);
  if ( v12 < 0 )
    FxObject::DeleteFromFailedCreate(v11);
  return (unsigned int)v12;
}
