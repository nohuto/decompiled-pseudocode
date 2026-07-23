/*
 * XREFs of MiDeleteProcessHotPatchContext @ 0x140A5C174
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteProcessHotPatchContext(__int64 a1, int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 1912);
  if ( v2 )
  {
    if ( !a2 )
      ExFreePoolWithTag(v2, 0);
  }
}
