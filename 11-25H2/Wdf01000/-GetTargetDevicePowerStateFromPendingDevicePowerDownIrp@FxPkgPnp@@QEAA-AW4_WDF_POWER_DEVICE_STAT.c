/*
 * XREFs of ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x14001BB04
 * Callers:
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x14001B594 (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x14001C82C (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x14001BB6C (-GetSystemPowerAction@FxPkgPnp@@QEAA-AW4POWER_ACTION@@XZ.c)
 */

__int64 __fastcall FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(FxPkgPnp *this)
{
  __int32 v1; // eax
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 result; // rax

  if ( !this->m_PendingDevicePowerIrp )
    return 5LL;
  v1 = FxPkgPnp::GetSystemPowerAction(this) - 4;
  if ( v1 && (unsigned int)(v1 - 1) >= 2 )
    result = *(unsigned int *)(*(_QWORD *)(v3 + 184) + 24LL);
  else
    result = 5LL;
  if ( *(_BYTE *)(v2 + 157) == 5 )
  {
    if ( *(_DWORD *)(v2 + 284) )
      return 6LL;
  }
  return result;
}
