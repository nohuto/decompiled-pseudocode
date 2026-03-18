/*
 * XREFs of PsGetServerSiloActiveConsoleId @ 0x140349ECC
 * Callers:
 *     IopGetThreadActiveConsoleId @ 0x140A9E2BC (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloActiveConsoleId(__int64 a1)
{
  return *(unsigned int *)(*((_QWORD *)PsGetServerSiloGlobals(a1) + 161) + 4LL);
}
