/*
 * XREFs of MxMarkActiveDriverBits @ 0x140C5E158
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140C5D828 (MiInitializeSystemImageRegion.c)
 *     MxMarkActiveDriverBits @ 0x140C5E158 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14026C5E4 (MiSplitBitmapPages.c)
 *     KeZeroSinglePage @ 0x1406B42F0 (KeZeroSinglePage.c)
 *     MxMarkActiveDriverBits @ 0x140C5E158 (MxMarkActiveDriverBits.c)
 */

signed __int64 *__fastcall MxMarkActiveDriverBits(
        unsigned __int64 *a1,
        signed __int64 **a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned __int64 v5; // rsi
  signed __int64 **v6; // rdi
  unsigned __int64 v7; // r15
  int v8; // r12d
  signed __int64 *result; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbp

  v5 = 0LL;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( (unsigned __int64)a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v6 = *(signed __int64 ***)(a4 + 16LL * a5);
  result = *(signed __int64 **)(a4 + 16LL * a5 + 8);
  if ( a3 > (unsigned __int64)result )
    v7 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  if ( (unsigned __int64)v6 <= v7 )
  {
    do
    {
      result = *v6;
      if ( ((unsigned __int8)*v6 & 1) != 0 )
      {
        ++v5;
        v11 = (__int64)((_QWORD)v6 << 25) >> 16;
        if ( a5 == 1 )
        {
          v12 = ((v11 << 25 >> 16) - a1[4]) >> 21;
          v13 = a1[1] + (v12 >> 3);
          if ( (*(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x800LL) == 0 )
          {
            MiSplitBitmapPages(11LL);
            KeZeroSinglePage((_OWORD *)(v13 & 0xFFFFFFFFFFFFF000uLL));
          }
          if ( *a1 <= v12 )
            *a1 = v12 + 1;
          result = (signed __int64 *)a1[1];
          _bittestandset64(result, v12);
        }
        else
        {
          result = (signed __int64 *)MxMarkActiveDriverBits(
                                       (_DWORD)a1,
                                       (__int64)((_QWORD)v6 << 25) >> 16,
                                       (int)v11 + 4088,
                                       v8,
                                       a5 - 1);
        }
      }
      ++v6;
    }
    while ( (unsigned __int64)v6 <= v7 );
    if ( v5 )
      _InterlockedAdd64(&qword_140E37720, v5);
  }
  return result;
}
