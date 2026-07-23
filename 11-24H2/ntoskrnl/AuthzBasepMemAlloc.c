/*
 * XREFs of AuthzBasepMemAlloc @ 0x140324D30
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1403255E4 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403B972C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A56748 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AuthzBasepMemAlloc(ULONG_PTR a1, __int64 a2, ULONG a3)
{
  ULONG_PTR v4; // rcx

  v4 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v4 = 64LL;
  return ExAllocatePool2(v4, a1, a3);
}
