/*
 * XREFs of PsIumResumeAfterHibernate @ 0x1404F463C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PspIumInitialize @ 0x140C24B88 (PspIumInitialize.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1402D2200 (VslRegisterLogPages.c)
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
