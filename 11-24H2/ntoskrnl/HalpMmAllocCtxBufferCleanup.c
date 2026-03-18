/*
 * XREFs of HalpMmAllocCtxBufferCleanup @ 0x14037CDE4
 * Callers:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAllocBuffer @ 0x14037DBE0 (HalpMmAllocCtxAllocBuffer.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpMmAllocCtxBufferCleanup(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx

  v2 = (void *)a2[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(a2, 0);
}
