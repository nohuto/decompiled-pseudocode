/*
 * XREFs of RtlEnableThreadProfiling @ 0x1801328C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlEnableThreadProfiling(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  void *Heap; // rax
  unsigned __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+2Ch] [rbp-2Ch]
  unsigned __int64 v15; // [rsp+30h] [rbp-28h]

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    return 3221225713LL;
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x1C0uLL);
  v10 = (unsigned __int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap, 0, 0x1C0uLL);
  *(_DWORD *)v10 = 65984;
  *(_QWORD *)(v10 + 32) = a3;
  v14 = 1;
  v13 = a2;
  v12 = a3;
  v15 = v10;
  v11 = NtSetInformationThread(a1, 32LL, &v12);
  if ( v11 < 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  else
    *a4 = v10;
  return (unsigned int)v11;
}
