/*
 * XREFs of RtlpHeapTrkAllocCacheAligned @ 0x18011687C
 * Callers:
 *     RtlHeapTrkInitialize @ 0x180116430 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 */

char __fastcall RtlpHeapTrkAllocCacheAligned(__int64 *a1, unsigned __int64 *a2, int a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 Heap; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebp
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  _DWORD v20[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v20[0] = 0;
  if ( NtQuerySystemInformation(SystemRecommendedSharedDataAlignment, v20, 4u, 0LL) < 0 )
    return 0;
  if ( !v20[0] )
    return 0;
  Heap = RtlAllocateHeap((char *)qword_1801D0840, 0, 8 * a4);
  *a1 = Heap;
  v10 = Heap;
  if ( !Heap )
    return 0;
  v11 = v20[0];
  v12 = v20[0] * ((unsigned int)(a3 + v20[0] - 1) / v20[0]);
  v13 = v12 * a4;
  v14 = qword_1801D0840;
  if ( !is_mul_ok(v12, a4) || v13 + v20[0] < v13 )
  {
LABEL_8:
    RtlFreeHeap(v14, 0, v10, v11);
    *a1 = 0LL;
    return 0;
  }
  v15 = RtlAllocateHeap((char *)qword_1801D0840, 8u, v13 + v20[0]);
  *a2 = v15;
  if ( !v15 )
  {
    v10 = *a1;
    v14 = qword_1801D0840;
    goto LABEL_8;
  }
  v17 = v15 + v20[0] - v15 % v20[0];
  if ( a4 )
  {
    v18 = 0LL;
    do
    {
      v19 = v12 * v4++;
      *(_QWORD *)(*a1 + 8 * v18) = v17 + v19;
      v18 = v4;
    }
    while ( v4 < a4 );
  }
  return 1;
}
