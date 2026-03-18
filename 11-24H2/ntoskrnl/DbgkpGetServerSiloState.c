/*
 * XREFs of DbgkpGetServerSiloState @ 0x140A7EBE8
 * Callers:
 *     DbgkInitialize @ 0x140C16074 (DbgkInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140C160F8 (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 936;
}
