/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x14009583C
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400949E4 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     FillRect @ 0x140038250 (FillRect.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x140095C94 (GreDecBitmapExclusiveRefCnt.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1400978F0 (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400E4B00 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x14026797C (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1402C87B8 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GenerateWindowShadow(struct tagWND *a1, HDC a2)
{
  __int64 v2; // rax
  int v4; // r12d
  int v6; // r13d
  __m128i v7; // xmm0
  signed int v8; // r14d
  LONG v9; // esi
  LONG v10; // esi
  LONG v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rbx
  HBRUSH StockObject; // rax
  __int64 v21; // rcx
  HBITMAP ScaledWindowShadowFromDIB; // rax
  HBITMAP v23; // rdi
  RECT v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+74h] [rbp-8Ch]
  void *v27; // [rsp+78h] [rbp-88h] BYREF
  struct tagWND *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int64 v30[3]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v31; // [rsp+A8h] [rbp-58h]
  _BYTE v32[128]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v33[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v34; // [rsp+13Ch] [rbp+3Ch]
  __int128 v35; // [rsp+144h] [rbp+44h]
  __int64 v36; // [rsp+154h] [rbp+54h]

  v2 = *((_QWORD *)a1 + 5);
  v28 = a1;
  v4 = 0;
  v27 = 0LL;
  v25 = 0;
  v6 = 0;
  v7 = *(__m128i *)(v2 + 88);
  v8 = 1;
  v26 = *(_BYTE *)(v2 + 26) & 0x40;
  v24.bottom = v7.m128i_i32[3] - v7.m128i_i32[1];
  v9 = v7.m128i_i32[2] - _mm_cvtsi128_si32(v7);
  v24.left = 0;
  v24.right = v9;
  v24.top = 0;
  if ( v7.m128i_i32[3] - v7.m128i_i32[1] > 0 && v9 > 0 )
  {
    v10 = v9 + 5;
    v11 = v7.m128i_i32[3] - v7.m128i_i32[1] + 5;
    v24.right = v10;
    v24.bottom = v11;
    if ( PtiCurrent(0LL, 0LL) )
    {
      if ( *((_QWORD *)PtiCurrent(v13, v12) + 62) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v15, v14) + 62) + 8LL) + 64LL) & 1) != 0 )
        {
          v16 = *((_QWORD *)a1 + 5);
          v17 = *(_DWORD *)(v16 + 288);
          if ( (v17 & 0xF) == 0 && (v17 & 0x40000000) != 0 )
          {
            v21 = *(unsigned __int16 *)(v16 + 284);
            if ( (_WORD)v21 != 96 )
            {
              v8 = (unsigned __int16)GreGetScaledLogPixels(v21) / 0x60u;
              v10 *= v8;
              v11 *= v8;
              v24.right = v10;
              v24.bottom = v11;
            }
          }
        }
      }
    }
    v36 = 0LL;
    v31 = 0;
    v33[0] = 40;
    v33[1] = v10;
    v35 = 0LL;
    v33[2] = v11;
    v34 = 2097153LL;
    memset(v30, 0, sizeof(v30));
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v32, a2);
    v18 = GrepCreateDIBitmapReal((OPTAPIDCOBJ *)v32, 0, v30, v33, 0, 0x2Cu, 0LL, 0, 0LL, 0, 0LL, &v27);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v32);
    if ( v18 )
    {
      v29 = GreSelectBitmap(a2, v18);
      StockObject = (HBRUSH)GreGetStockObject(4LL);
      FillRect(a2, &v24, StockObject);
      if ( v10 < 15 || v11 < 15 )
        v6 = 1;
      if ( (unsigned int)DrawWindowShadow(v28, a2, v26, v6, &v25) )
      {
        if ( !v25 || v6 )
          DrawRegionalShadow(v27, v10, v11);
        else
          DrawRoundedRectangularShadow(v27, v10, v11, v26, v8);
        v4 = 1;
      }
      GreDecBitmapExclusiveRefCnt(v18);
      if ( v4 )
      {
        if ( v8 <= 1 )
          return v18;
        ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB(v28, a2, v8);
        v23 = ScaledWindowShadowFromDIB;
        if ( ScaledWindowShadowFromDIB )
        {
          GreSelectBitmap(a2, ScaledWindowShadowFromDIB);
          GreDeleteObject(v18);
          return (__int64)v23;
        }
      }
      GreSelectBitmap(a2, v29);
      GreDeleteObject(v18);
      return 0LL;
    }
  }
  return 0LL;
}
