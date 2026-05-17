/*
 * XREFs of RtlEnableThreadProfiling @ 0x1801343A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlEnableThreadProfiling(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  void *Heap; // rax
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // r9
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  __int64 v16; // [rsp+30h] [rbp-28h]

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    return 3221225713LL;
  Heap = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x1C0uLL);
  v10 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap, 0, 0x1C0uLL);
  *(_DWORD *)v10 = 65984;
  *(_QWORD *)(v10 + 32) = a3;
  v15 = 1;
  v14 = a2;
  v13 = a3;
  v16 = v10;
  v11 = NtSetInformationThread(a1, 32LL, &v13);
  if ( v11 < 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10, v12);
  else
    *a4 = v10;
  return (unsigned int)v11;
}
