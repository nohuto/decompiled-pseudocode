/*
 * XREFs of ULongLongMult @ 0x140437FD0
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFreeAppAttributes @ 0x140804CBC (SdbpFreeAppAttributes.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080ADDC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x14080BAF4 (AslpPathWildcardFreeFindContext.c)
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x14092C204 (VrpAddNamespaceNodeToList.c)
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
