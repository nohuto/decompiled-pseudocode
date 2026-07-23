/*
 * XREFs of DbgkpGetServerSiloState @ 0x140A78398
 * Callers:
 *     DbgkInitialize @ 0x140C18074 (DbgkInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140C180F8 (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 936;
}
