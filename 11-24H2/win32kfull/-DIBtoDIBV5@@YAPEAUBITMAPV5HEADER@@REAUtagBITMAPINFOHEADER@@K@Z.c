/*
 * XREFs of ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z @ 0x1402B2050
 * Callers:
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B281C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1402B2288 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

struct BITMAPV5HEADER *__fastcall DIBtoDIBV5(struct tagBITMAPINFOHEADER *volatile a1)
{
  unsigned __int64 v2; // r9
  LONG biHeight; // ecx
  int v4; // eax
  size_t v5; // rdi
  unsigned int v6; // r9d
  unsigned __int64 v7; // r10
  unsigned int v8; // eax
  size_t v9; // r14
  _OWORD *v10; // rax
  _OWORD *v11; // rbx

  if ( a1->biSize != 40 )
    return 0LL;
  v2 = (unsigned int)a1->biWidth * (unsigned __int64)a1->biBitCount;
  if ( v2 > 0xFFFFFFFF )
    return 0LL;
  biHeight = a1->biHeight;
  v4 = -a1->biHeight;
  if ( v4 < 0 )
    v4 = biHeight;
  if ( (unsigned int)v4 * (unsigned __int64)(((unsigned int)(v2 + 31) >> 3) & 0x1FFFFFFC) > 0xFFFFFFFF )
    return 0LL;
  v5 = SizeOfDibColorTable(a1);
  v8 = v6 + 124;
  if ( v6 + 124 < v6 )
    return 0LL;
  if ( v8 + (unsigned int)v5 < (unsigned int)v5 )
    return 0LL;
  v9 = v6;
  if ( v7 < v6 + v5 + 40 )
    return 0LL;
  v10 = (_OWORD *)Win32AllocPoolZInit(v8 + (unsigned int)v5, 1650684757LL);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  memset_0(v10, 0, 0x7CuLL);
  *v11 = *(_OWORD *)&a1->biSize;
  v11[1] = *(_OWORD *)&a1->biCompression;
  *((_QWORD *)v11 + 4) = *(_QWORD *)&a1->biClrUsed;
  *(_DWORD *)v11 = 124;
  *((_DWORD *)v11 + 14) = 1934772034;
  *((_DWORD *)v11 + 27) = 4;
  if ( a1->biCompression == 3 && (a1->biBitCount == 16 || a1->biBitCount == 32) )
  {
    *((_DWORD *)v11 + 10) = a1[1].biSize;
    *((_DWORD *)v11 + 11) = a1[1].biWidth;
    *((_DWORD *)v11 + 12) = a1[1].biHeight;
  }
  if ( (_DWORD)v5 )
    memmove((char *)v11 + 124, &a1[1], v5);
  memmove((char *)v11 + v5 + 124, (char *)&a1[1] + v5, v9);
  return (struct BITMAPV5HEADER *)v11;
}
