/*
 * XREFs of PsGetServerSiloActiveConsoleId @ 0x1403C1D48
 * Callers:
 *     IopGetThreadActiveConsoleId @ 0x140A9982C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloActiveConsoleId(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(PsGetServerSiloGlobals(a1) + 1288) + 4LL);
}
