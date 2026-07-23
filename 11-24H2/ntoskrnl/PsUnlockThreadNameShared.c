/*
 * XREFs of PsUnlockThreadNameShared @ 0x1405E2A20
 * Callers:
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 * Callees:
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 */

__int64 __fastcall PsUnlockThreadNameShared(__int64 a1)
{
  return PspUnlockThreadSecurityShared(a1);
}
