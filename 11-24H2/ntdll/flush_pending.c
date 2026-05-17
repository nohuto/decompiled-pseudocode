/*
 * XREFs of flush_pending @ 0x180154658
 * Callers:
 *     deflate @ 0x1801529BC (deflate.c)
 *     deflate_fast @ 0x180152E80 (deflate_fast.c)
 *     deflate_huff @ 0x1801533DC (deflate_huff.c)
 *     deflate_rle @ 0x18015354C (deflate_rle.c)
 *     deflate_slow @ 0x180153830 (deflate_slow.c)
 *     deflate_stored @ 0x180153E80 (deflate_stored.c)
 * Callees:
 *     bi_flush @ 0x180155E98 (bi_flush.c)
 *     memmove @ 0x180167400 (memmove.c)
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
