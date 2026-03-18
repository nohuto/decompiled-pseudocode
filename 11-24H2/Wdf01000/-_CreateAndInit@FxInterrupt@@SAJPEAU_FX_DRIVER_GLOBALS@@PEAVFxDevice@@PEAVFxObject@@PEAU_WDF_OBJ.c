/*
 * XREFs of ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1400A9B10
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1400A2120 (imp_WdfInterruptCreate.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400A8F6C (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1400A9210 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A9650 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 */

__int64 __fastcall FxInterrupt::_CreateAndInit(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        FxDevice *Parent,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_INTERRUPT_CONFIG *Configuration,
        FxInterrupt **Interrupt)
{
  FX_POOL **v10; // rax
  FxInterrupt *v11; // rax
  FxInterrupt *v12; // rdi
  FxDevice *v13; // rbp
  int WakeInterruptMachine; // ebx
  signed int _a1; // eax

  v10 = FxObjectHandleAlloc2(
          FxDriverGlobals,
          (unsigned __int64)Device,
          0x1C8uLL,
          (__int64)Attributes,
          Attributes,
          0,
          FxObjectTypeExternal);
  if ( v10 )
  {
    FxInterrupt::FxInterrupt((FxInterrupt *)v10, FxDriverGlobals);
    v12 = v11;
    if ( v11 )
    {
      v13 = Device;
      if ( Parent )
        v13 = Parent;
      WakeInterruptMachine = FxInterrupt::Initialize(v11, Device, v13, Configuration);
      if ( WakeInterruptMachine >= 0 )
      {
        _a1 = FxObject::Commit(v12, Attributes, 0LL, v13, 1u);
        WakeInterruptMachine = _a1;
        if ( _a1 >= 0 )
        {
          *Interrupt = v12;
          if ( !Configuration->CanWakeDevice )
            return (unsigned int)WakeInterruptMachine;
          WakeInterruptMachine = FxInterrupt::CreateWakeInterruptMachine(v12);
          if ( WakeInterruptMachine >= 0 )
            return (unsigned int)WakeInterruptMachine;
        }
        else
        {
          WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, 0x11u, WPP_InterruptObject_cpp_Traceguids, _a1);
        }
      }
      FxObject::DeleteFromFailedCreate(v12);
      return (unsigned int)WakeInterruptMachine;
    }
  }
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xCu, 0x10u, WPP_InterruptObject_cpp_Traceguids, Device, -1073741670);
  return 3221225626LL;
}
