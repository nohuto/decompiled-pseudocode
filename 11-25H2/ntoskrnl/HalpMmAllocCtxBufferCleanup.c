/*
 * XREFs of HalpMmAllocCtxBufferCleanup @ 0x140338004
 * Callers:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAllocBuffer @ 0x1403394D8 (HalpMmAllocCtxAllocBuffer.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpMmAllocCtxBufferCleanup(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx

  v2 = (void *)a2[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(a2, 0);
}
