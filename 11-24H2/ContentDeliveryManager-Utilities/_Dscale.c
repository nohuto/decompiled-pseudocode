/*
 * XREFs of _Dscale @ 0x18000D064
 * Callers:
 *     _Stodx @ 0x1800059FC (_Stodx.c)
 *     _Xp_addh @ 0x18000D320 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18000D7B0 (_Xp_mulh.c)
 *     _Xp_setw @ 0x18000DAF0 (_Xp_setw.c)
 *     _LDscale @ 0x18000DE88 (_LDscale.c)
 * Callees:
 *     _Dnorm @ 0x1800216E8 (_Dnorm.c)
 */

__int16 __fastcall Dscale(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 *v2; // r14
  unsigned __int16 v4; // ax
  int v5; // esi
  __int16 v6; // cx
  unsigned __int16 *v9; // r8
  double Double; // xmm0_8
  __int16 v11; // r11
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // r11
  unsigned int v14; // ebp
  unsigned __int16 v15; // r15
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // dx
  __int64 v18; // r8
  __int16 v19; // bp
  unsigned __int16 *v20; // r14
  unsigned __int16 v21; // r9
  _WORD *v22; // r8
  unsigned __int16 v23; // dx
  unsigned __int16 v24; // r11
  _WORD *v25; // rcx
  _WORD *v26; // rax
  _WORD *v27; // r9
  _WORD *v28; // rdx
  bool v29; // zf

  v2 = a1 + 3;
  v4 = a1[3];
  v5 = a2;
  v6 = (v4 >> 4) & 0x7FF;
  if ( v6 == 2047 )
  {
    if ( (v4 & 0xF) != 0 || a1[2] || a1[1] || *a1 )
      return 2;
    else
      return 1;
  }
  v9 = v2;
  if ( !v6 )
  {
    v6 = Dnorm(a1, a2, v2);
    if ( v6 > 0 )
      return 0;
    v9 = a1 + 3;
  }
  if ( v5 <= 0 || 2047 - v6 > v5 )
  {
    v11 = *v2;
    if ( -v6 < v5 )
    {
      *v2 = v11 & 0x800F | (16 * (v6 + v5));
      return -1;
    }
    v12 = v11 & 0x8000;
    v13 = *v2 & 0xF | 0x10;
    v14 = v6 + v5 - 1;
    *v2 = v13;
    if ( v14 > 0xFFFFFFCA )
    {
      v15 = 0;
      if ( (__int16)v14 <= -16 )
      {
        v16 = a1[2];
        v17 = a1[1];
        v18 = (unsigned __int16)(((unsigned __int16)(-16 - v14) >> 4) + 1);
        LOWORD(v14) = 16 * v18 + v14;
        do
        {
          v15 = *a1 | (v15 != 0);
          *a1 = v17;
          v17 = v16;
          v16 = v13;
          v13 = 0;
          --v18;
        }
        while ( v18 );
        a1[2] = v16;
        a1[1] = v17;
      }
      v19 = -(__int16)v14;
      v20 = a1 + 1;
      if ( v19 )
      {
        v21 = *v20;
        v15 = (v15 != 0) | (unsigned __int16)(*a1 << (16 - v19));
        v22 = a1 + 2;
        v23 = a1[2];
        *a1 = (*a1 >> v19) | (*v20 << (16 - v19));
        *v20 = (v21 >> v19) | (v23 << (16 - v19));
        a1[2] = (v23 >> v19) | (v13 << (16 - v19));
        v13 >>= v19;
      }
      else
      {
        v22 = a1 + 2;
      }
      v24 = v12 | v13;
      a1[3] = v24;
      if ( v15 > 0x8000u )
      {
        v27 = v22;
        v28 = a1 + 1;
      }
      else
      {
        v25 = v22;
        v26 = a1 + 1;
        if ( v15 != 0x8000 || (*(_BYTE *)a1 & 1) == 0 )
        {
LABEL_37:
          if ( v24 == v12 && !*v25 && !*v26 )
            return -(*a1 != 0);
          return -1;
        }
        v27 = a1 + 2;
        v28 = a1 + 1;
      }
      v29 = (*a1)++ == 0xFFFF;
      v25 = v22;
      v26 = v28;
      if ( v29 )
      {
        v29 = (*v20)++ == 0xFFFF;
        v25 = v27;
        if ( v29 )
        {
          v29 = (*v22)++ == 0xFFFF;
          if ( v29 )
          {
            a1[3] = v24 + 1;
            return -1;
          }
        }
      }
      goto LABEL_37;
    }
    *v9 = v12;
    *(_DWORD *)(a1 + 1) = 0;
    *a1 = 0;
    return 0;
  }
  Double = Inf._Double;
  if ( (*v2 & 0x8000u) != 0 )
    *(_QWORD *)&Double = *(_QWORD *)&Inf._Double ^ _xmm;
  *(double *)a1 = Double;
  return 1;
}
