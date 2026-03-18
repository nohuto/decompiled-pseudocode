/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurSurface__ @ 0x1802DFA60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurSurface__(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cp2xBlurSurface )
    return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(CProjectedShadow::s_cp2xBlurSurface, a2, a3);
  return result;
}
