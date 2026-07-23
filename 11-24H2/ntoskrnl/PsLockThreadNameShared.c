/*
 * XREFs of PsLockThreadNameShared @ 0x1405E2874
 * Callers:
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 * Callees:
 *     PspLockThreadSecurityShared @ 0x140414FB0 (PspLockThreadSecurityShared.c)
 */

signed __int64 __fastcall PsLockThreadNameShared(__int64 a1, __int64 a2)
{
  return PspLockThreadSecurityShared(a1, a2);
}
