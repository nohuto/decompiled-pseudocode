/*
 * XREFs of HalpDmaProcessMapRegisterQueueV3 @ 0x1403320C0
 * Callers:
 *     IoFreeMapRegistersV3 @ 0x140331F10 (IoFreeMapRegistersV3.c)
 *     HalpGrowMapBufferWorker @ 0x1404B7110 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpAllocateDmaResourcesInternal @ 0x140331C00 (HalpAllocateDmaResourcesInternal.c)
 *     HalpDmaDequeueAdapter @ 0x140337000 (HalpDmaDequeueAdapter.c)
 */

char __fastcall HalpDmaProcessMapRegisterQueueV3(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rax

  v2 = a2;
  do
  {
    LOBYTE(a2) = v2;
    v4 = HalpDmaDequeueAdapter(a1, a2);
    if ( !v4 )
      break;
    LOBYTE(v4) = HalpAllocateDmaResourcesInternal(v4, 1, 0LL);
  }
  while ( (_BYTE)v4 );
  return v4;
}
