/*
 * XREFs of ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z @ 0x1400378D8
 * Callers:
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140427530 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefCountedBuffer::AllocateRefCountedBuffer(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  if ( a1 + 16 < a1 )
  {
    WdLogSingleEntry1(3LL, a1);
    result = 0LL;
    WdLogGlobalForLineNumber = 394;
    return result;
  }
  v3 = a1 + 16;
  result = 0LL;
  if ( a1 == -16 )
  {
    v3 = 1LL;
  }
  else if ( v3 > 0x7FFFFFFF )
  {
    return result;
  }
  return ExAllocatePool2(a3, v3, 1265072196LL);
}
