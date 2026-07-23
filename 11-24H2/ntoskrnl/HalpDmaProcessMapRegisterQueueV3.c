/*
 * XREFs of HalpDmaProcessMapRegisterQueueV3 @ 0x14038C0D8
 * Callers:
 *     IoFreeMapRegistersV3 @ 0x14038C590 (IoFreeMapRegistersV3.c)
 *     HalpGrowMapBufferWorker @ 0x1404B13C0 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpDmaDequeueAdapter @ 0x14038A5E0 (HalpDmaDequeueAdapter.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14038C280 (HalpAllocateDmaResourcesInternal.c)
 */

_QWORD *__fastcall HalpDmaProcessMapRegisterQueueV3(__int64 a1, char a2)
{
  _QWORD *result; // rax
  __int64 v5; // rdx

  do
  {
    result = HalpDmaDequeueAdapter(a1, a2);
    if ( !result )
      break;
    LOBYTE(v5) = 1;
    result = (_QWORD *)HalpAllocateDmaResourcesInternal(result, v5, 0LL);
  }
  while ( (_BYTE)result );
  return result;
}
