/*
 * XREFs of RtlpWnfMetaCallbackProc @ 0x180020C70
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpWnfMetaCallbackProc(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx

  if ( !_InterlockedExchange((volatile __int32 *)(a2 + 16), 1) )
  {
    v4 = *(_QWORD *)(a2 + 8);
    *(_DWORD *)a2 = a3;
    ZwSetEvent(v4, 0LL);
  }
  return 0LL;
}
