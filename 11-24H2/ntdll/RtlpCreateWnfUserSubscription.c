/*
 * XREFs of RtlpCreateWnfUserSubscription @ 0x180099984
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateWnfUserSubscription(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 Heap; // rax
  __int64 v12; // rbx
  __int64 result; // rax

  *a1 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v12 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_thunk_772440563353939046((void *)(Heap + 4), 0, 0x9CuLL);
  *(_DWORD *)v12 = 10488084;
  *(_QWORD *)(v12 + 56) = NtCurrentTeb()->SubProcessTag;
  *(_QWORD *)(v12 + 80) = a5;
  *(_DWORD *)(v12 + 68) = a6;
  *(_DWORD *)(v12 + 72) = a7;
  result = 0LL;
  *(_QWORD *)(v12 + 40) = a3;
  *(_QWORD *)(v12 + 48) = a4;
  *(_DWORD *)(v12 + 64) = a2;
  *(_QWORD *)(v12 + 32) = 1LL;
  *a1 = v12;
  return result;
}
