/*
 * XREFs of _FDscale @ 0x18000C3DC
 * Callers:
 *     _Stofx @ 0x180004E80 (_Stofx.c)
 *     _FXp_addh @ 0x18000C5B8 (_FXp_addh.c)
 *     _FXp_mulh @ 0x18000CA34 (_FXp_mulh.c)
 *     _FXp_setw @ 0x18000CDC8 (_FXp_setw.c)
 * Callees:
 *     _FDnorm @ 0x180021404 (_FDnorm.c)
 */

__int16 __fastcall FDscale(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 *v2; // r14
  unsigned __int16 v4; // ax
  int v5; // esi
  __int16 v6; // cx
  __int16 result; // ax
  __int16 v8; // di
  unsigned __int16 *v9; // r8
  float Float; // xmm0_4
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // bp
  unsigned int v13; // r10d
  unsigned __int16 v14; // r11
  __int16 v15; // r10
  unsigned __int16 v16; // r9
  bool v17; // zf

  v2 = a1 + 1;
  v4 = a1[1];
  v5 = a2;
  v6 = (unsigned __int8)(v4 >> 7);
  if ( v6 == 255 )
  {
    if ( (v4 & 0x7F) != 0 )
      return 2;
    result = 1;
    if ( *a1 )
      return 2;
    return result;
  }
  HIBYTE(v8) = 0;
  v9 = v2;
  if ( !(unsigned __int8)(v4 >> 7) )
  {
    v6 = FDnorm(a1, a2, v2);
    if ( v6 > 0 )
      return 0;
    v9 = a1 + 1;
  }
  if ( v5 <= 0 || 255 - v6 > v5 )
  {
    if ( -v6 < v5 )
    {
      *v2 = *v2 & 0x807F | ((v6 + (_WORD)v5) << 7);
      return -1;
    }
    v11 = *v2 & 0x7F | 0x80;
    v12 = *v2 & 0x8000;
    v13 = v6 + v5 - 1;
    *v2 = v11;
    if ( v13 >= 0xFFFFFFE8 )
    {
      v14 = 0;
      if ( (__int16)v13 <= -16 )
      {
        v14 = *a1;
        LOWORD(v13) = v13 + 16;
        *a1 = v11;
        v11 = 0;
      }
      v15 = -(__int16)v13;
      if ( v15 )
      {
        LOBYTE(v8) = v14 != 0;
        v14 = v8 | (*a1 << (16 - v15));
        *a1 = (*a1 >> v15) | (v11 << (16 - v15));
        v11 >>= v15;
      }
      v16 = v12 | v11;
      a1[1] = v16;
      if ( (v14 > 0x8000u || v14 == 0x8000 && (*(_BYTE *)a1 & 1) != 0) && (v17 = *a1 == 0xFFFF, ++*a1, v17) )
      {
        a1[1] = v16 + 1;
      }
      else if ( v16 == v12 )
      {
        return -(*a1 != 0);
      }
      return -1;
    }
    *v9 = v12;
    *a1 = 0;
    return 0;
  }
  Float = FInf._Float;
  if ( (*v2 & 0x8000u) != 0 )
    LODWORD(Float) = LODWORD(FInf._Float) ^ _xmm;
  *(float *)a1 = Float;
  return 1;
}
