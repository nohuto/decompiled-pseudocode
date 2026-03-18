/*
 * XREFs of EtwWriteKMSecurityEvent @ 0x140310C8C
 * Callers:
 *     AdtpWriteToEtwEx @ 0x140451C08 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x140AD5F20 (AdtpWriteToEtw.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
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
           (unsigned __int8)CurrentServerSiloGlobals[52].Flink[254].Flink,
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
