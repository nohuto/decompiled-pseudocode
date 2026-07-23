/*
 * XREFs of EmonRestartProfilingOriginal @ 0x140B516B0
 * Callers:
 *     <none>
 * Callees:
 *     EmonRestartProfilingInternalOriginal @ 0x14055BE2C (EmonRestartProfilingInternalOriginal.c)
 */

void __fastcall EmonRestartProfilingOriginal()
{
  __int64 v0; // rbx

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  EmonRestartProfilingInternalOriginal(0, v0);
  EmonRestartProfilingInternalOriginal(1, v0);
  if ( EmonPebsAvailable )
    __writemsr(0x600u, EmonDsManagementAreas + 160 * v0);
}
