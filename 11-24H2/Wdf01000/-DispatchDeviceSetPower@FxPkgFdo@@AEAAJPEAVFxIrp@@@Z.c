/*
 * XREFs of ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400346A0
 * Callers:
 *     ?_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400326F0 (-_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400337CC (-RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x140034EA8 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     WPP_IFR_SF_qqq @ 0x140041538 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxPkgFdo::DispatchDeviceSetPower(FxPkgFdo *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v6; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a2; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    if ( m_Owner->m_RequestedPowerUpIrp )
    {
      m_Owner->m_RequestedPowerUpIrp = 0;
    }
    else
    {
      if ( !m_Owner->m_RequestedPowerDownIrp )
      {
        m_DeviceBase = this->m_DeviceBase;
        _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_DeviceBase->m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qqq(
          this->m_Globals,
          2u,
          0xCu,
          0xAu,
          WPP_fdopower_cpp_Traceguids,
          Irp->m_Irp,
          _a2,
          m_DeviceBase->m_DeviceObject.m_DeviceObject);
        FxVerifierBugCheckWorker(
          this->m_Globals,
          WDF_POWER_MULTIPLE_PPO,
          (unsigned __int64)this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
          (unsigned __int64)Irp->m_Irp);
      }
      m_Owner->m_RequestedPowerDownIrp = 0;
    }
  }
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    return FxPkgFdo::RaiseDevicePower(this, Irp);
  CurrentStackLocation->Control |= 1u;
  this->m_PendingDevicePowerIrp = Irp->m_Irp;
  v6 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (int)v6->Parameters.Read.ByteOffset.LowPart > 1 )
    this->m_SystemPowerAction = v6->Parameters.SetFile.ReplaceIfExists;
  FxPkgPnp::PowerProcessEvent(this, PowerDx, 0);
  return 259LL;
}
