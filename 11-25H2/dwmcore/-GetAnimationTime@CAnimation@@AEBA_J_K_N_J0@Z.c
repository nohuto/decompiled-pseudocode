/*
 * XREFs of ?GetAnimationTime@CAnimation@@AEBA_J_K_N_J0@Z @ 0x1801DAA20
 * Callers:
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800B0930 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::GetAnimationTime(CAnimation *this, __int64 a2, char a3, __int64 a4, unsigned __int64 a5)
{
  if ( a3 )
    return a4;
  else
    return a4 + a2 - a5;
}
