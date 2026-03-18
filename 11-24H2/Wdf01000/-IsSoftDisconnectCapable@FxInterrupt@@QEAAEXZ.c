/*
 * XREFs of ?IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ @ 0x140067A24
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140067610 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x14006780C (-Connect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxInterrupt::IsSoftDisconnectCapable(FxInterrupt *this)
{
  bool result; // al

  result = 0;
  if ( unk_1400C7ED8 && this->m_UseSoftDisconnect )
  {
    if ( this->m_Interrupt )
      return this->m_Connected != 0;
  }
  return result;
}
