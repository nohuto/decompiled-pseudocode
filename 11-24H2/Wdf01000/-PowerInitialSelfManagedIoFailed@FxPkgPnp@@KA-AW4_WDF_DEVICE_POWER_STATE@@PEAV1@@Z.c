/*
 * XREFs of ?PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5340
 * Callers:
 *     <none>
 * Callees:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x140033988 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialSelfManagedIoFailed(
        FxPkgPnp *This,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4)
{
  FxPkgIo::StopProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink, 1u, a3, a4);
  return 872LL;
}
