/*
 * XREFs of DbgkpGetServerSiloState @ 0x140A7B92C
 * Callers:
 *     DbgkInitialize @ 0x140C04FD4 (DbgkInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140C05058 (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 936;
}
