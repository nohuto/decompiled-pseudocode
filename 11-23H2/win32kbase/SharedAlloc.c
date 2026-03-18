/*
 * XREFs of SharedAlloc @ 0x1C00BA5B0
 * Callers:
 *     HMAllocObjectEx @ 0x1C0012A1C (HMAllocObjectEx.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SharedAlloc(SIZE_T Size)
{
  return RtlAllocateHeap(gpvSharedAlloc, 0, (unsigned int)Size);
}
