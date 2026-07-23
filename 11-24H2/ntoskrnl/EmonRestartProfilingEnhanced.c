/*
 * XREFs of EmonRestartProfilingEnhanced @ 0x140B51650
 * Callers:
 *     <none>
 * Callees:
 *     EmonRestartProfilingInternalEnhanced @ 0x14055BD10 (EmonRestartProfilingInternalEnhanced.c)
 */

unsigned __int64 __fastcall EmonRestartProfilingEnhanced()
{
  __int64 v0; // rbx
  unsigned __int64 result; // rax

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  EmonRestartProfilingInternalEnhanced(0, v0);
  result = EmonRestartProfilingInternalEnhanced(1, v0);
  if ( EmonPebsAvailable )
  {
    result = EmonDsManagementAreas + 160 * v0;
    __writemsr(0x600u, result);
  }
  return result;
}
