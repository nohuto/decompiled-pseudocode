/*
 * XREFs of flush_pending @ 0x180152A18
 * Callers:
 *     deflate @ 0x180150D7C (deflate.c)
 *     deflate_fast @ 0x180151240 (deflate_fast.c)
 *     deflate_huff @ 0x18015179C (deflate_huff.c)
 *     deflate_rle @ 0x18015190C (deflate_rle.c)
 *     deflate_slow @ 0x180151BF0 (deflate_slow.c)
 *     deflate_stored @ 0x180152240 (deflate_stored.c)
 * Callees:
 *     bi_flush @ 0x180154258 (bi_flush.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

void *__fastcall flush_pending(__int64 a1)
{
  __int64 v1; // rdi
  void *result; // rax
  unsigned int v4; // ebp
  bool v5; // zf

  v1 = *(_QWORD *)(a1 + 40);
  result = (void *)bi_flush(v1);
  v4 = *(_DWORD *)(a1 + 24);
  if ( *(_DWORD *)(v1 + 40) <= v4 )
    v4 = *(_DWORD *)(v1 + 40);
  if ( v4 )
  {
    result = memmove(*(void **)(a1 + 16), *(const void **)(v1 + 32), v4);
    *(_QWORD *)(a1 + 16) += v4;
    *(_QWORD *)(v1 + 32) += v4;
    *(_DWORD *)(a1 + 28) += v4;
    *(_DWORD *)(a1 + 24) -= v4;
    v5 = *(_DWORD *)(v1 + 40) == v4;
    *(_DWORD *)(v1 + 40) -= v4;
    if ( v5 )
    {
      result = *(void **)(v1 + 16);
      *(_QWORD *)(v1 + 32) = result;
    }
  }
  return result;
}
