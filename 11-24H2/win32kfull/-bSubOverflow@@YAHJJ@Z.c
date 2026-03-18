/*
 * XREFs of ?bSubOverflow@@YAHJJ@Z @ 0x1401987D8
 * Callers:
 *     ?lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z @ 0x140143350 (-lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z.c)
 *     ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x140143410 (-bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall bSubOverflow(int a1, int a2)
{
  if ( (a2 ^ a1) >= 0 )
    return 0;
  if ( a1 < 0 )
    return a1 < (int)(a2 + 0x80000000);
  return a1 > a2 + 0x7FFFFFFF;
}
