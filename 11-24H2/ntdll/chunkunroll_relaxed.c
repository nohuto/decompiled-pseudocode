/*
 * XREFs of chunkunroll_relaxed @ 0x180153174
 * Callers:
 *     chunkset_core_0 @ 0x180153024 (chunkset_core_0.c)
 *     inflate_fast_chunk_ @ 0x1801531B4 (inflate_fast_chunk_.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall chunkunroll_relaxed(_OWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9
  _OWORD *v4; // r10
  __int64 v5; // rax

  v3 = (unsigned int)*a2;
  v4 = (_OWORD *)((char *)a1 - v3);
  if ( (unsigned int)v3 < *a3 )
  {
    do
    {
      if ( (unsigned int)v3 >= 0x10 )
        break;
      *a1 = *v4;
      v5 = (unsigned int)*a2;
      *a3 -= v5;
      a1 = (_OWORD *)((char *)a1 + v5);
      LODWORD(v5) = 2 * *a2;
      *a2 = v5;
      LODWORD(v3) = v5;
    }
    while ( (unsigned int)v5 < *a3 );
  }
  return a1;
}
