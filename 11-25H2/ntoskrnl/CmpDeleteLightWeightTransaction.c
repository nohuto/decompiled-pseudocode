/*
 * XREFs of CmpDeleteLightWeightTransaction @ 0x140A684E0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteLightWeightTransaction(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72544D43u);
}
