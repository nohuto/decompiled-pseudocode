/*
 * XREFs of ?AddDirtyRects@?$CTargetDirtyBase@$07@@QEAAXAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x180096C64
 * Callers:
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180098B64 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x180236660 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 * Callees:
 *     ?GetTreeBounds@COffScreenRenderTarget@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180096DF0 (-GetTreeBounds@COffScreenRenderTarget@@UEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098318 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__m128i *__fastcall CTargetDirtyBase<8>::AddDirtyRects(__int64 a1, _QWORD *a2)
{
  __m128i *result; // rax
  __int64 (*v5)(void); // rax
  const __m128i *v6; // rdi
  const __m128i *v7; // rsi
  float v8; // xmm8_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm9_4
  __m128i v12; // xmm0
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  __m128i v16; // [rsp+20h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = (__m128i *)&retaddr;
  if ( !*(_BYTE *)(a1 + 2312) )
  {
    v5 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 8) + 32LL);
    result = (__m128i *)(v5 == COffScreenRenderTarget::GetTreeBounds ? COffScreenRenderTarget::GetTreeBounds() : v5());
    v6 = (const __m128i *)a2[1];
    v7 = &v6[*a2];
    v16 = *result;
    if ( v6 != v7 )
    {
      v8 = *(float *)&v16.m128i_i32[3];
      v9 = *(float *)&v16.m128i_i32[2];
      v10 = *(float *)&v16.m128i_i32[1];
      v11 = *(float *)v16.m128i_i32;
      do
      {
        v12 = _mm_loadu_si128(v6);
        v16 = v12;
        if ( v11 > *(float *)v12.m128i_i32 )
        {
          *(float *)v12.m128i_i32 = v11;
          *(float *)v16.m128i_i32 = v11;
        }
        v13 = *(float *)&v16.m128i_i32[1];
        if ( v10 > *(float *)&v16.m128i_i32[1] )
        {
          *(float *)&v16.m128i_i32[1] = v10;
          v13 = v10;
        }
        v14 = *(float *)&v16.m128i_i32[2];
        if ( *(float *)&v16.m128i_i32[2] > v9 )
        {
          *(float *)&v16.m128i_i32[2] = v9;
          v14 = v9;
        }
        v15 = *(float *)&v16.m128i_i32[3];
        if ( *(float *)&v16.m128i_i32[3] > v8 )
        {
          *(float *)&v16.m128i_i32[3] = v8;
          v15 = v8;
        }
        if ( v14 > *(float *)v12.m128i_i32 && v15 > v13 )
        {
          result = (__m128i *)CMergedRectBase<8>::Add(a1 + 16, &v16);
          if ( *(_QWORD *)(a1 + 464) )
            result = (__m128i *)(*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1 + 8LL))(a1, &v16);
          *(_BYTE *)(a1 + 2313) = 1;
        }
        ++v6;
      }
      while ( v6 != v7 );
    }
  }
  return result;
}
