/*
 * XREFs of ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x14013F090
 * Callers:
 *     pprFlattenRec @ 0x14008E470 (pprFlattenRec.c)
 * Callees:
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x14013F220 (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 */

void __fastcall BEZIER64::vInit(struct _RECTFX *this, struct _POINTFIX *a2, struct _RECTFX *a3, const __int64 *a4)
{
  struct _RECTFX *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax

  this[10].yTop = 0;
  this[10].xLeft = 1;
  HFDBASIS64::vInit((HFDBASIS64 *)&this[4], a2->x, a2[1].x, a2[2].x, a2[3].x);
  HFDBASIS64::vInit((HFDBASIS64 *)&this[6], a2->y, a2[1].y, a2[2].y, a2[3].y);
  *(_QWORD *)&this[8].xLeft = *a4;
  if ( a3 )
  {
    v8 = this + 9;
    this[9] = *a3;
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)&this[8].xRight = v8;
  v9 = *(_QWORD *)&this[7].xLeft;
  v10 = *(_QWORD *)&this[7].xRight;
  while ( 1 )
  {
    v11 = *(_QWORD *)&this[5].xLeft;
    v12 = *(_QWORD *)&this[5].xRight;
    v13 = -v11;
    v14 = -v11;
    v15 = -v12;
    if ( v12 >= 0 )
      v15 = *(_QWORD *)&this[5].xRight;
    if ( v11 >= 0 )
      v14 = *(_QWORD *)&this[5].xLeft;
    if ( v14 <= v15 )
    {
      v13 = *(_QWORD *)&this[5].xRight;
      if ( v12 < 0 )
        v13 = -*(_QWORD *)&this[5].xRight;
    }
    else if ( v11 >= 0 )
    {
      v13 = *(_QWORD *)&this[5].xLeft;
    }
    if ( v13 <= 0x300000000000LL )
    {
      v16 = -v9;
      v17 = -v10;
      v18 = -v9;
      if ( v10 >= 0 )
        v17 = v10;
      if ( v9 >= 0 )
        v18 = v9;
      if ( v18 <= v17 )
      {
        v16 = v10;
        if ( v10 < 0 )
          v16 = -v10;
      }
      else if ( v9 >= 0 )
      {
        v16 = v9;
      }
      if ( v16 <= 0x300000000000LL )
        break;
    }
    this[10].xLeft *= 2;
    v19 = (v11 + v12) >> 3;
    v20 = *(_QWORD *)&this[4].xRight - v19;
    *(_QWORD *)&this[5].xLeft = v19;
    *(_QWORD *)&this[4].xRight = v20 >> 1;
    v9 = (v10 + v9) >> 3;
    *(_QWORD *)&this[5].xRight = v12 >> 2;
    v21 = *(_QWORD *)&this[6].xRight - v9;
    *(_QWORD *)&this[7].xLeft = v9;
    v10 >>= 2;
    *(_QWORD *)&this[7].xRight = v10;
    *(_QWORD *)&this[6].xRight = v21 >> 1;
  }
}
