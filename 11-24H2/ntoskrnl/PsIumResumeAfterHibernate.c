/*
 * XREFs of PsIumResumeAfterHibernate @ 0x1404F4A8C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     PspIumInitialize @ 0x140C37F94 (PspIumInitialize.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1404C2A70 (VslRegisterLogPages.c)
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
