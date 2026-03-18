/*
 * XREFs of ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x140048474
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140048558 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14007A070 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x14007AEF8 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::_Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        FxDevice *Device,
        FxPkgFdo **PkgFdo,
        __int64 a4)
{
  FX_POOL **v7; // rax
  FxEventQueue *v8; // rax
  _FX_DRIVER_GLOBALS *v9; // rdx
  FxPkgFdo *v10; // rdi
  _FX_DRIVER_GLOBALS *v11; // rdx
  int v12; // ebx
  _FX_DRIVER_GLOBALS *v13; // rdx

  v7 = FxObjectHandleAlloc2(DriverGlobals, (unsigned __int64)Device, 0x708uLL, a4, 0LL, 0, FxObjectTypeInternal);
  if ( v7 && (FxPkgFdo::FxPkgFdo((FxPkgFdo *)v7, DriverGlobals, Device), (v10 = (FxPkgFdo *)v8) != 0LL) )
  {
    v12 = FxEventQueue::Initialize(v8 + 3, v9);
    if ( v12 < 0
      || (v12 = FxEventQueue::Initialize(&v10->m_PowerMachine, v11), v12 < 0)
      || (v12 = FxEventQueue::Initialize(&v10->m_PowerPolicyMachine, v13), v12 < 0) )
    {
      FxObject::DeleteFromFailedCreate(v10);
    }
    else
    {
      *PkgFdo = v10;
    }
    return (unsigned int)v12;
  }
  else
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xDu, 0xAu, WPP_fxpkgfdo_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
