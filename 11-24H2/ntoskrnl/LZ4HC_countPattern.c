/*
 * XREFs of LZ4HC_countPattern @ 0x1405FECE4
 * Callers:
 *     LZ4HC_compress_generic @ 0x1405F49BC (LZ4HC_compress_generic.c)
 *     LZ4HC_compress_generic_dictCtx @ 0x1405F7104 (LZ4HC_compress_generic_dictCtx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZ4HC_countPattern(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  int v4; // r10d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8

  v4 = (int)a1;
  v5 = 0x100000001LL * a3;
  v6 = a2 - 7;
  while ( (unsigned __int64)a1 < v6 )
  {
    if ( *a1 != v5 )
    {
      __asm { tzcnt   rax, rdx }
      return (unsigned int)a1 + ((unsigned int)_RAX >> 3) - v4;
    }
    ++a1;
  }
  while ( (unsigned __int64)a1 < a2 && *(_BYTE *)a1 == (_BYTE)v5 )
  {
    a1 = (_QWORD *)((char *)a1 + 1);
    v5 >>= 8;
  }
  return (unsigned int)((_DWORD)a1 - v4);
}
