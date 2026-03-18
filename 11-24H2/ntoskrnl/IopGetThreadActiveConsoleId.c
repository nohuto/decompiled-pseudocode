/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140A9E2BC
 * Callers:
 *     IoRaiseHardError @ 0x1403D5B40 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140348A90 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x140349ECC (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
