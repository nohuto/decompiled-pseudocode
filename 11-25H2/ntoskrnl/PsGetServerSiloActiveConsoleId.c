/*
 * XREFs of PsGetServerSiloActiveConsoleId @ 0x1403D82FC
 * Callers:
 *     IopGetThreadActiveConsoleId @ 0x140A988A4 (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloActiveConsoleId(__int64 a1)
{
  return *(unsigned int *)(*((_QWORD *)PsGetServerSiloGlobals(a1) + 161) + 4LL);
}
