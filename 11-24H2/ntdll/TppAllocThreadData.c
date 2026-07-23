/*
 * XREFs of TppAllocThreadData @ 0x1800EA5A0
 * Callers:
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 */

_DWORD *__fastcall TppAllocThreadData(_QWORD *a1)
{
  struct _TEB *v2; // rbx
  _DWORD *result; // rax
  _QWORD *v4; // rdx

  *a1 = 0LL;
  v2 = NtCurrentTeb();
  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 2883584) | 8, 0x88uLL);
  v4 = result;
  if ( result )
  {
    result[2] |= 3u;
    result = (_DWORD *)MEMORY[0x7FFE03B0];
    v4[3] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v2->ThreadPoolData = v4;
    *a1 = v4;
  }
  else
  {
    v2->ThreadPoolData = 0LL;
  }
  return result;
}
