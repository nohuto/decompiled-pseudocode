/*
 * XREFs of PspDestroyProcessParameterOverrides @ 0x1408F1D24
 * Callers:
 *     PspDeleteCreateProcessContext @ 0x1408F1B10 (PspDeleteCreateProcessContext.c)
 *     PspGetProcessParameterOverrides @ 0x1409BDF68 (PspGetProcessParameterOverrides.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDestroyProcessParameterOverrides(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return PsDestroyProcessParameterOverrides();
  return result;
}
