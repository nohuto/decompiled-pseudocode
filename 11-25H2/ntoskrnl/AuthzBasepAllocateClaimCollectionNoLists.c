/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140999E7C
 * Callers:
 *     SepDuplicateClaimAttributes @ 0x140999D24 (SepDuplicateClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x140A53380 (SepCreateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140369D70 (AuthzBasepMemAlloc.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *AuthzBasepAllocateClaimCollectionNoLists()
{
  void *result; // rax
  void *v1; // rbx

  result = (void *)AuthzBasepMemAlloc();
  v1 = result;
  if ( result )
  {
    memset_0(result, 0, 0x260uLL);
    return v1;
  }
  return result;
}
