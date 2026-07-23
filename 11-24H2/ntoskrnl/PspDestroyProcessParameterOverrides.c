/*
 * XREFs of PspDestroyProcessParameterOverrides @ 0x140A3564C
 * Callers:
 *     PspDeleteCreateProcessContext @ 0x1408FAD80 (PspDeleteCreateProcessContext.c)
 *     PspGetProcessParameterOverrides @ 0x140A46F20 (PspGetProcessParameterOverrides.c)
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
