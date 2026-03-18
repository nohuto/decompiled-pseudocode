/*
 * XREFs of ?pbmiConvertInfo@@YAPEAUtagBITMAPINFO@@PEBU1@K@Z @ 0x140336C14
 * Callers:
 *     GreSetDIBits @ 0x140311DBC (GreSetDIBits.c)
 * Callees:
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 */

struct tagBITMAPINFO *__fastcall pbmiConvertInfo(const struct tagBITMAPINFO *a1)
{
  int biHeight_high; // edx
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  WORD *p_biPlanes; // r8
  _BYTE *v8; // rdx
  __int16 v9; // ax
  char v10; // al

  biHeight_high = HIWORD(a1->bmiHeader.biHeight);
  if ( biHeight_high == 1 )
  {
    v3 = 2;
  }
  else if ( HIWORD(a1->bmiHeader.biHeight) == 4 )
  {
    v3 = 16;
  }
  else if ( HIWORD(a1->bmiHeader.biHeight) == 8 )
  {
    v3 = 256;
  }
  else
  {
    v3 = 0;
    if ( biHeight_high != 16 && biHeight_high != 24 && biHeight_high != 32 )
      return 0LL;
  }
  v4 = PALLOCNOZ(4 * v3 + 40, 1886221383LL);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  *(_DWORD *)v4 = 40;
  p_biPlanes = &a1->bmiHeader.biPlanes;
  v8 = (_BYTE *)(v4 + 40);
  *(_DWORD *)(v4 + 4) = LOWORD(a1->bmiHeader.biWidth);
  *(_DWORD *)(v4 + 8) = HIWORD(a1->bmiHeader.biWidth);
  *(_WORD *)(v4 + 12) = a1->bmiHeader.biHeight;
  v9 = HIWORD(a1->bmiHeader.biHeight);
  *(_DWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 28) = 0;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0;
  for ( *(_WORD *)(v5 + 14) = v9; v3; --v3 )
  {
    v8[2] = *((_BYTE *)p_biPlanes + 2);
    v8[1] = *((_BYTE *)p_biPlanes + 1);
    v10 = *(_BYTE *)p_biPlanes;
    p_biPlanes = (WORD *)((char *)p_biPlanes + 3);
    *v8 = v10;
    v8[3] = 0;
    v8 += 4;
  }
  return (struct tagBITMAPINFO *)v5;
}
