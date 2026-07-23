/*
 * XREFs of EtwpFillProcessorStreamIndexMap @ 0x1800B6868
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

__int64 __fastcall EtwpFillProcessorStreamIndexMap(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v6; // r10d
  unsigned int i; // r11d
  _QWORD *Heap; // rax
  _QWORD *v11; // r8
  char *v12; // r14
  unsigned __int16 v13; // r11
  unsigned __int16 v14; // dx
  unsigned int j; // r9d
  unsigned __int16 v16; // si
  __int64 v17; // rcx
  __int64 result; // rax

  v4 = a2;
  v6 = 8 * a2;
  for ( i = 0; i < a4; i += (*(unsigned __int16 *)(i + a3 + 4) + 7) & 0xFFFFFFF8 )
    v6 += 2 * *(_DWORD *)(i + a3 + 44);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
  v11 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v12 = (char *)&Heap[v4];
  v13 = 0;
  v14 = 0;
  for ( j = 0; j < a4; j += (*(unsigned __int16 *)(j + a3 + 4) + 7) & 0xFFFFFFF8 )
  {
    v16 = 0;
    for ( Heap[v14] = &v12[2 * v13]; (unsigned int)v16 < *(_DWORD *)(j + a3 + 44); ++v16 )
    {
      v17 = v13;
      *(_WORD *)&v12[2 * v13] = v13;
      ++v13;
      *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v17) = v14;
      *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v17 + 2) = v16;
    }
    ++v14;
  }
  *(_DWORD *)(a1 + 480) = v14;
  result = 0LL;
  *(_QWORD *)(a1 + 488) = v11;
  return result;
}
