/*
 * XREFs of ULongLongMult @ 0x140441690
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140696028 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFreeAppAttributes @ 0x14080457C (SdbpFreeAppAttributes.c)
 *     AslPathWildcardFindFirst @ 0x14080A0A4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080A69C (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x14080B3B4 (AslpPathWildcardFreeFindContext.c)
 *     VrpDestroyNamespaceNode @ 0x140929080 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x14092A0C4 (VrpAddNamespaceNodeToList.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
    return 0;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
}
