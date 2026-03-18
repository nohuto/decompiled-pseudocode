/*
 * XREFs of ?IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ @ 0x1400693E4
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140068FD0 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1400691CC (-Connect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxInterrupt::IsSoftDisconnectCapable(FxInterrupt *this)
{
  bool result; // al

  result = 0;
  if ( FxLibraryGlobals.IoReportInterruptInactive && this->m_UseSoftDisconnect )
  {
    if ( this->m_Interrupt )
      return this->m_Connected != 0;
  }
  return result;
}
