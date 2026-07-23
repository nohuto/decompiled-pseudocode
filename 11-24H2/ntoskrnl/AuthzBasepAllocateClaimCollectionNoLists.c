/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140A56748
 * Callers:
 *     SepCreateClaimAttributes @ 0x140A4EA70 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140A565F0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140324D30 (AuthzBasepMemAlloc.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall AuthzBasepAllocateClaimCollectionNoLists(__int64 a1, __int64 a2)
{
  void *result; // rax
  void *v3; // rbx

  result = (void *)AuthzBasepMemAlloc(0x260uLL, a2, 0x74416553u);
  v3 = result;
  if ( result )
  {
    memset_0(result, 0, 0x260uLL);
    return v3;
  }
  return result;
}
