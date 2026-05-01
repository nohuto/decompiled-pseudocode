/*
 * XREFs of ULongLongMult @ 0x180091D08
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180099014 (SdbpCheckApplicationTypeAttributes.c)
 *     AslPathWildcardFindFirst @ 0x1800A4220 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A4854 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A59D0 (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  HRESULT v3; // r9d

  v3 = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  return v3;
}
