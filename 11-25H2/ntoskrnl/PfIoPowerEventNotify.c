/*
 * XREFs of PfIoPowerEventNotify @ 0x140739AC4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140A18A88 (PopUmpoProcessPowerMessage.c)
 *     PopUmpoSendLegacyEvent @ 0x140A87C14 (PopUmpoSendLegacyEvent.c)
 * Callees:
 *     PfPowerActionNotify @ 0x140B5C910 (PfPowerActionNotify.c)
 */

__int64 __fastcall PfIoPowerEventNotify(int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  if ( a1 == 18 )
    return PfPowerActionNotify(5LL, a3);
  return result;
}
