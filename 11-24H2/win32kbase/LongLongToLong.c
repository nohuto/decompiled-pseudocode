/*
 * XREFs of LongLongToLong @ 0x1400B74E0
 * Callers:
 *     rimConvertCoordinatesWithRounding @ 0x1400AFCF8 (rimConvertCoordinatesWithRounding.c)
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1400B7480 (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x140212160 (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall LongLongToLong(LONGLONG llOperand, LONG *plResult)
{
  if ( (unsigned __int64)(llOperand + 0x80000000LL) <= 0xFFFFFFFF )
  {
    *plResult = llOperand;
    return 0;
  }
  else
  {
    *plResult = -1;
    return -2147024362;
  }
}
