/*
 * XREFs of ?PnpEventStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140072DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400050C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x140072EF8 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     IsLoggingEnabledAndNeeded @ 0x140072F4C (IsLoggingEnabledAndNeeded.c)
 *     LogDriverInfoStream @ 0x14007C650 (LogDriverInfoStream.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventStarted(FxPkgPnp *This)
{
  FxDevice *m_Device; // rdi
  unsigned __int8 v3; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rsi

  m_Device = This->m_Device;
  This->m_AchievedStart = 1;
  if ( !FxDevice::IsPdo(m_Device) )
  {
    m_Globals = m_Device->m_Globals;
    if ( IsLoggingEnabledAndNeeded(m_Globals) )
      LogDriverInfoStream(m_Globals, m_Device);
  }
  FxPkgPnp::PnpFinishProcessingIrp(This, v3);
  return 314LL;
}
