/*
 * XREFs of SepLengthSidAndAttributesArray @ 0x14098567C
 * Callers:
 *     SepSetTokenCapabilities @ 0x1409854B8 (SepSetTokenCapabilities.c)
 *     SepCreateClaimAttributes @ 0x140A4EA70 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140A565F0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepLengthSidAndAttributesArray(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  void *v8; // rdi
  unsigned int v9; // eax

  v3 = 0;
  Pool2 = ExAllocatePool2(0x100uLL, 8uLL, 0x61536553u);
  v8 = (void *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v9 = SeCaptureSidAndAttributesArray(a1, a2, 0LL, Pool2);
  *a3 = 0;
  if ( v9 != -1073741789 )
    v3 = v9;
  ExFreePoolWithTag(v8, 0);
  return v3;
}
