/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140A988A4
 * Callers:
 *     IoRaiseHardError @ 0x1404339B0 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140310C30 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x1403D82FC (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
