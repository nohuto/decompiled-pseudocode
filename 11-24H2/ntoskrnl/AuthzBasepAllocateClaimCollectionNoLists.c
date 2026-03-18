/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140A5E328
 * Callers:
 *     SepCreateClaimAttributes @ 0x140A56BE0 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140A5E1D0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140346440 (AuthzBasepMemAlloc.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
