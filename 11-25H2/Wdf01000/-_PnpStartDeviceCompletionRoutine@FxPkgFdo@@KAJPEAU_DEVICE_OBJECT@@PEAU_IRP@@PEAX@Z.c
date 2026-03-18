/*
 * XREFs of ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14003EB50
 * Callers:
 *     ?_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400A7140 (-_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1400161AC (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x14003D074 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x14003DF60 (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpStartDeviceCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxPkgPnp *Context)
{
  signed int _a1; // eax
  unsigned __int8 v6; // r8
  KIRQL v8; // bl
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  FxIrp v11; // [rsp+48h] [rbp+10h] BYREF

  _a1 = Irp->IoStatus.Status;
  v11.m_Irp = Irp;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(Context->m_Globals, 2u, 0xCu, 0x18u, WPP_fxpkgfdo_cpp_Traceguids, _a1);
    FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceFailed, v10);
    FxPkgPnp::CompletePnpRequest(Context, &v11, Irp->IoStatus.Status);
  }
  else
  {
    FxPkgPnp::SetPendingPnpIrp(Context, &v11, 1u);
    if ( Context->m_PowerPolicyMachine.m_Owner )
    {
      v8 = KfRaiseIrql(2u);
      FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceComplete, v9);
      KeLowerIrql(v8);
    }
    else
    {
      FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceComplete, v6);
    }
  }
  return 3221225494LL;
}
