/*
 * XREFs of chunkcopy_core @ 0x18014F89C
 * Callers:
 *     chunkset_core @ 0x18014F8E0 (chunkset_core.c)
 *     inflate @ 0x18014FA34 (inflate.c)
 *     chunkset_core_0 @ 0x180153024 (chunkset_core_0.c)
 *     inflate_fast_chunk_ @ 0x1801531B4 (inflate_fast_chunk_.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall chunkcopy_core(_OWORD *a1, _OWORD *a2, int a3)
{
  unsigned int v3; // r8d
  char v4; // al
  unsigned int v5; // r8d
  __int64 v6; // rax
  _OWORD *v7; // rcx
  __int128 *i; // rdx
  __int128 v9; // xmm0

  v3 = a3 - 1;
  v4 = v3;
  v5 = v3 >> 4;
  v6 = (v4 & 0xFu) + 1;
  *a1 = *a2;
  v7 = (_OWORD *)((char *)a1 + v6);
  for ( i = (_OWORD *)((char *)a2 + v6); v5; --v5 )
  {
    v9 = *i++;
    *v7++ = v9;
  }
  return v7;
}
