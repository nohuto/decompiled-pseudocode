/*
 * XREFs of RtlpTpWaitRundown @ 0x18008B074
 * Callers:
 *     RtlpTpWaitFinalizationCallback @ 0x18004E790 (RtlpTpWaitFinalizationCallback.c)
 *     RtlDeregisterWaitEx @ 0x18008AB90 (RtlDeregisterWaitEx.c)
 * Callees:
 *     ZwSetEvent @ 0x180160210 (ZwSetEvent.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

LOGICAL __fastcall RtlpTpWaitRundown(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
