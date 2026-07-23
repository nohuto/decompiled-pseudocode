/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x140326CA0
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1404481F0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x140AEB4C0 (AdtpWriteToEtw.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 */

__int64 EtwWriteKMSecurityEvent()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           (unsigned int)CurrentServerSiloGlobals[52].Flink + 24,
           LOWORD(CurrentServerSiloGlobals[52].Flink[271].Flink),
           0,
           0,
           v3,
           0,
           0,
           0LL,
           0LL,
           v1,
           v2,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
