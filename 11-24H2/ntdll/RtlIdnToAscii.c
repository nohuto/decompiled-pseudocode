/*
 * XREFs of RtlIdnToAscii @ 0x1800BA110
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800BB090 (RtlpNameprepAsciiRealWorker.c)
 */

__int64 __fastcall RtlIdnToAscii(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 Heap; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // esi

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v10 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x406uLL);
  v11 = v10;
  if ( Heap && v10 )
  {
    v12 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, 1, Heap);
LABEL_4:
    RtlpSysVolFree(Heap);
    goto LABEL_5;
  }
  v12 = -1073741801;
  if ( Heap )
    goto LABEL_4;
LABEL_5:
  if ( v11 )
    RtlpSysVolFree(v11);
  return v12;
}
