/*
 * XREFs of RtlpCreateWnfUserSubscription @ 0x18002E7D4
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18002DFFC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpCreateWnfUserSubscription(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  char *Heap; // rax
  char *v12; // rbx
  __int64 result; // rax

  *a1 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v12 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap + 4, 0, 0x9CuLL);
  *(_DWORD *)v12 = 10488084;
  *((_QWORD *)v12 + 7) = NtCurrentTeb()->SubProcessTag;
  *((_QWORD *)v12 + 10) = a5;
  *((_DWORD *)v12 + 17) = a6;
  *((_DWORD *)v12 + 18) = a7;
  result = 0LL;
  *((_QWORD *)v12 + 5) = a3;
  *((_QWORD *)v12 + 6) = a4;
  *((_DWORD *)v12 + 16) = a2;
  *((_QWORD *)v12 + 4) = 1LL;
  *a1 = v12;
  return result;
}
