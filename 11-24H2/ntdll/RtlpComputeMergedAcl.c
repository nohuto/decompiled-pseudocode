/*
 * XREFs of RtlpComputeMergedAcl @ 0x1800C6C64
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpComputeMergedAcl2 @ 0x1800CD654 (RtlpComputeMergedAcl2.c)
 */

__int64 __fastcall RtlpComputeMergedAcl(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned __int64 *a9,
        __int64 a10)
{
  unsigned int v10; // edi
  unsigned int v15; // ebp
  void *ProcessHeap; // rsi
  unsigned int v17; // eax
  __int64 Heap; // rax
  int v20[4]; // [rsp+60h] [rbp-38h] BYREF

  v10 = 0;
  v15 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v17 = 1024;
  v20[0] = 1024;
  while ( 1 )
  {
    if ( v15 >= 2 )
      return v10;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, v17);
    *a9 = Heap;
    if ( !Heap )
      break;
    v10 = RtlpComputeMergedAcl2(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)v20, Heap, a10);
    if ( (v10 & 0x80000000) == 0 )
    {
      if ( !v20[0] )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, *a9);
        *a9 = 0LL;
      }
      return v10;
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, *a9);
    *a9 = 0LL;
    if ( v10 != -1073741789 )
      return v10;
    v17 = v20[0];
    ++v15;
  }
  return 3221225495LL;
}
