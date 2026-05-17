/*
 * XREFs of RtlpTpWaitRundown @ 0x18006E794
 * Callers:
 *     RtlpTpWaitFinalizationCallback @ 0x180021D90 (RtlpTpWaitFinalizationCallback.c)
 *     RtlDeregisterWaitEx @ 0x18006E2B0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall RtlpTpWaitRundown(unsigned __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
