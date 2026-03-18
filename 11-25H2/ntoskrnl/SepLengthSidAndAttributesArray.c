/*
 * XREFs of SepLengthSidAndAttributesArray @ 0x1408A3830
 * Callers:
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepDuplicateClaimAttributes @ 0x140999D24 (SepDuplicateClaimAttributes.c)
 *     SepSetTokenCapabilities @ 0x140A08CB8 (SepSetTokenCapabilities.c)
 *     SepCreateClaimAttributes @ 0x140A53380 (SepCreateClaimAttributes.c)
 * Callees:
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepLengthSidAndAttributesArray(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  void *v8; // rdi
  unsigned int v9; // eax

  v3 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  v8 = (void *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v9 = SeCaptureSidAndAttributesArray(a1, a2, 0LL, Pool2, 8);
  *a3 = 0;
  if ( v9 != -1073741789 )
    v3 = v9;
  ExFreePoolWithTag(v8, 0);
  return v3;
}
