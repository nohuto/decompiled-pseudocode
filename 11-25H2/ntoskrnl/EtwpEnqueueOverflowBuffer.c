/*
 * XREFs of EtwpEnqueueOverflowBuffer @ 0x1403E4824
 * Callers:
 *     EtwpSwitchBuffer @ 0x1403E45C0 (EtwpSwitchBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x1403E4D34 (EtwpDequeueFreeBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x1403E4F1C (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403E4FA8 (EtwpLockBufferList.c)
 */

__int64 __fastcall EtwpEnqueueOverflowBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 44), 0, 1);
  EtwpLockBufferList(a1, &v7, a3, a4);
  *(_QWORD *)(a2 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = a2 + 32;
  *(_QWORD *)(a1 + 64) = a2 + 32;
  result = EtwpUnlockBufferList(a1, &v7);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
  return result;
}
