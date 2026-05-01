/*
 * XREFs of ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D6FA8
 * Callers:
 *     ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x1804C9C60 (-v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??_GGridRow@@QEAAPEAXI@Z @ 0x1804C7ABC (--_GGridRow@@QEAAPEAXI@Z.c)
 *     ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D6E14 (-LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

void __fastcall GridLayout::LayoutRows(GridLayout *this, const RECT *a2)
{
  __int64 v2; // r14
  GridRow **v3; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  GridRow *v8; // rdx
  int v9; // r9d
  int v10; // r8d
  int v11; // r10d
  int v12; // eax
  int v13; // esi
  GridRow *v14; // r14
  int v15; // r8d
  __int64 v16; // r15
  GridRow *v17; // r15
  RECT si128; // xmm0
  RECT *v19; // rdi
  int v20; // eax
  RECT v21; // xmm0
  RECT v22; // xmm1
  RECT v23; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT rcDst; // [rsp+30h] [rbp-40h] BYREF
  RECT v25; // [rsp+40h] [rbp-30h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 7);
  v3 = (GridRow **)((char *)this + 48);
  if ( v2 )
  {
    v6 = v2 - 1;
    v7 = 56 * v2 - 56;
    do
    {
      if ( !*(_QWORD *)((char *)*v3 + v7 + 32) && v6 < (unsigned __int64)v3[1] )
      {
        GridRow::`scalar deleting destructor'((GridRow *)((char *)*v3 + v7));
        v8 = v3[1];
        if ( (GridRow *)v6 != (GridRow *)((char *)v8 - 1) )
          memmove_0((char *)*v3 + v7, (char *)*v3 + v7 + 56, 56 * ((_QWORD)v8 - v6) - 56);
        v3[1] = (GridRow *)((char *)v3[1] - 1);
      }
      --v6;
      v7 -= 56LL;
      --v2;
    }
    while ( v2 );
  }
  v9 = *((_DWORD *)this + 1);
  v10 = a2->bottom - a2->top;
  v11 = *((_DWORD *)this + 2);
  v12 = (v9 + v10) / (v11 + v9);
  if ( v12 >= *((_DWORD *)this + 14) )
    v12 = *((_DWORD *)this + 14);
  if ( v12 <= 0 )
    v13 = a2->bottom - a2->top;
  else
    v13 = v12 * v11 + v9 * (v12 - 1);
  v14 = *v3;
  v15 = v10 - v13;
  v16 = 56LL * (_QWORD)v3[1];
  v23 = *a2;
  v17 = (GridRow *)((char *)v14 + v16);
  si128 = 0LL;
  rcDst = 0LL;
  v23.bottom = v15 / 2 + v11 + v23.top;
  v23.top += v15 / 2;
  if ( v14 != v17 )
  {
    v19 = (RECT *)((char *)v14 + 8);
    do
    {
      GridRow::LayoutRow(v14, (const struct Geometry::CRect *)&v23);
      v20 = *((_DWORD *)this + 1) + *((_DWORD *)this + 2);
      v21 = *v19;
      v23.bottom += v20;
      v23.top += v20;
      rcSrc2 = v21;
      UnionRect(&rcDst, &rcDst, &rcSrc2);
      v14 = (GridRow *)((char *)v14 + 56);
      v19 = (RECT *)((char *)v19 + 56);
    }
    while ( v14 != v17 );
    si128 = (RECT)_mm_load_si128((const __m128i *)&rcDst);
  }
  v25 = si128;
  v25.bottom = v13 + si128.top;
  IntersectRect(&v25, a2, &v25);
  v22 = v25;
  *((struct tagRECT *)this + 2) = rcDst;
  *((RECT *)this + 1) = v22;
  *((_BYTE *)this + 12) = *((_DWORD *)this + 11) - *((_DWORD *)this + 9) > *((_DWORD *)this + 7) - *((_DWORD *)this + 5);
}
