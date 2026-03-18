/*
 * XREFs of ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x14003AB60
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x14003A924 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x14003ADA4 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x14003B104 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 */

__int64 __fastcall FxIoQueue::_Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_IO_QUEUE_CONFIG *Config,
        FxDriver *Caller,
        FxPkgIo *PkgIo,
        unsigned __int8 InitialPowerStateOn,
        FxIoQueue **Object)
{
  FX_POOL **v11; // rax
  FxIoQueue *v12; // rax
  FxIoQueue *v13; // rbx
  signed int _a1; // eax
  unsigned int v15; // edi

  *Object = 0LL;
  v11 = FxObjectHandleAlloc2(
          DriverGlobals,
          (unsigned __int64)Attributes,
          0x3A8uLL,
          (__int64)Caller,
          Attributes,
          0,
          FxObjectTypeExternal);
  if ( v11 && (FxIoQueue::FxIoQueue((FxIoQueue *)v11, DriverGlobals, PkgIo), (v13 = v12) != 0LL) )
  {
    _a1 = FxIoQueue::Initialize(v12, Config, Attributes, Caller, InitialPowerStateOn);
    v15 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(DriverGlobals, 2u, 0xDu, 0xBu, WPP_FxIoQueue_cpp_Traceguids, _a1);
      FxObject::DeleteFromFailedCreate(v13);
    }
    else
    {
      *Object = v13;
    }
    return v15;
  }
  else
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xDu, 0xAu, WPP_FxIoQueue_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
