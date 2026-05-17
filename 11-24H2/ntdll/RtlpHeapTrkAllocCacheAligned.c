/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x1801138EC
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1801134A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(__int64 *a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 Heap; // rax
  unsigned __int64 v10; // r8
  unsigned int v11; // ebp
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  _DWORD v19[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v19[0] = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, v19, 4u, 0LL) < 0 )
    return 0;
  if ( !v19[0] )
    return 0;
  Heap = RtlAllocateHeap(qword_1801CE808, 0, 8 * a4);
  *a1 = Heap;
  v10 = Heap;
  if ( !Heap )
    return 0;
  v11 = v19[0] * ((unsigned int)(a3 + v19[0] - 1) / v19[0]);
  v12 = v11 * a4;
  v13 = qword_1801CE808;
  if ( !is_mul_ok(v11, a4) || v12 + v19[0] < v12 )
  {
LABEL_8:
    RtlFreeHeap(v13, 0, v10);
    *a1 = 0LL;
    return 0;
  }
  v14 = RtlAllocateHeap(qword_1801CE808, 8u, v12 + v19[0]);
  *a2 = v14;
  if ( !v14 )
  {
    v10 = *a1;
    v13 = qword_1801CE808;
    goto LABEL_8;
  }
  v16 = v14 + v19[0] - v14 % v19[0];
  if ( a4 )
  {
    v17 = 0LL;
    do
    {
      v18 = v11 * v4++;
      *(_QWORD *)(*a1 + 8 * v17) = v16 + v18;
      v17 = v4;
    }
    while ( v4 < a4 );
  }
  return 1;
}
