/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x1403482A0
 * Callers:
 *     AdtpWriteToEtwEx @ 0x140453140 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x140AE821C (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwWriteKMSecurityEvent()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEventWriteFull(
           &CurrentServerSiloGlobals[52].Flink[1].Blink,
           (unsigned __int16)CurrentServerSiloGlobals[52].Flink[271].Flink,
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
