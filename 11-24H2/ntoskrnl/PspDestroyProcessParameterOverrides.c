/*
 * XREFs of PspDestroyProcessParameterOverrides @ 0x1408A496C
 * Callers:
 *     PspDeleteCreateProcessContext @ 0x1408A4758 (PspDeleteCreateProcessContext.c)
 *     PspGetProcessParameterOverrides @ 0x140A50170 (PspGetProcessParameterOverrides.c)
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
