/*
 * XREFs of PsIumResumeAfterHibernate @ 0x1404F71AC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     PspIumInitialize @ 0x140C35E54 (PspIumInitialize.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1404C95C0 (VslRegisterLogPages.c)
 */

__int64 PsIumResumeAfterHibernate()
{
  __int64 result; // rax

  result = PspIumLogBuffer;
  if ( PspIumLogBuffer )
  {
    *(_DWORD *)PspIumLogBuffer = -1;
    return VslRegisterLogPages();
  }
  return result;
}
