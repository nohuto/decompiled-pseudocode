/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140A9982C
 * Callers:
 *     IoRaiseHardError @ 0x1403C1290 (IoRaiseHardError.c)
 * Callees:
 *     PsGetServerSiloActiveConsoleId @ 0x1403C1D48 (PsGetServerSiloActiveConsoleId.c)
 *     PsGetThreadServerSilo @ 0x1403C24D0 (PsGetThreadServerSilo.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
