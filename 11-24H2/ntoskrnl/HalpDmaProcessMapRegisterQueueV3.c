/*
 * XREFs of HalpDmaProcessMapRegisterQueueV3 @ 0x1403927A8
 * Callers:
 *     IoFreeMapRegistersV3 @ 0x140392C60 (IoFreeMapRegistersV3.c)
 *     HalpGrowMapBufferWorker @ 0x1404B6BE0 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpDmaDequeueAdapter @ 0x140390CA0 (HalpDmaDequeueAdapter.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140392950 (HalpAllocateDmaResourcesInternal.c)
 */

_QWORD *__fastcall HalpDmaProcessMapRegisterQueueV3(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  _QWORD *result; // rax
  __int64 v6; // rdx

  v3 = a2;
  do
  {
    LOBYTE(a2) = v3;
    result = HalpDmaDequeueAdapter(a1, a2, a3);
    if ( !result )
      break;
    LOBYTE(v6) = 1;
    result = (_QWORD *)HalpAllocateDmaResourcesInternal(result, v6, 0LL);
  }
  while ( (_BYTE)result );
  return result;
}
