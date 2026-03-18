/*
 * XREFs of ?bAddOverflow@@YAH_J0@Z @ 0x140144A04
 * Callers:
 *     ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x140143410 (-bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall bAddOverflow(signed __int64 a1, __int64 a2)
{
  if ( (a2 ^ a1) < 0 )
    return 0;
  if ( a2 >= 0 )
    return 0x7FFFFFFFFFFFFFFFLL - a1 < a2;
  return a1 < (__int64)(0x8000000000000000uLL - a2);
}
