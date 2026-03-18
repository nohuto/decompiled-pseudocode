/*
 * XREFs of ?SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z @ 0x140032368
 * Callers:
 *     ?DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14000482C (-DispatchSystemSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x140032720 (-DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDevicePowerIrpTracker::SaveStateFromSystemPowerIrp(FxDevicePowerIrpTracker *this, FxIrp *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int LowPart; // r10d
  POWER_ACTION ShutdownType; // r9d
  unsigned int Length; // r8d
  unsigned int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d

  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  ShutdownType = CurrentStackLocation->Parameters.Power.ShutdownType;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( LowPart == 1 )
    v6 = HIWORD(Length);
  else
    v6 = Length >> 12;
  v7 = (v6 & 0xF) - 1;
  if ( !v7 )
    goto LABEL_15;
  v8 = v7 - 1;
  if ( !v8 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 )
  {
    ShutdownType = PowerActionSleep;
    goto LABEL_9;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    ShutdownType = PowerActionHibernate;
    goto LABEL_9;
  }
  if ( v11 != 1 )
LABEL_15:
    ShutdownType = PowerActionNone;
LABEL_9:
  if ( LowPart == 1 )
    this->m_S0PowerAction = ShutdownType;
  else
    this->m_SxPowerAction = ShutdownType;
}
