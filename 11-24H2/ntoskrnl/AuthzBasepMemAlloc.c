/*
 * XREFs of AuthzBasepMemAlloc @ 0x140346440
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140346B70 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140356CD0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403642B0 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A5E328 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 AuthzBasepMemAlloc()
{
  ULONG_PTR v0; // rcx

  v0 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v0 = 64LL;
  return ExAllocatePool2(v0);
}
