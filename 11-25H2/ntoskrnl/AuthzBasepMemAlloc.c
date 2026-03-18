/*
 * XREFs of AuthzBasepMemAlloc @ 0x140369D70
 * Callers:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14029040C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140310348 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140999E7C (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 AuthzBasepMemAlloc()
{
  ULONG_PTR v0; // rcx

  v0 = 64LL;
  if ( KeGetCurrentIrql() < 2u )
    v0 = 256LL;
  return ExAllocatePool2(v0);
}
