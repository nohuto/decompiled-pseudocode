/*
 * XREFs of ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3E90
 * Callers:
 *     ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ @ 0x1802073AC (-AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ @ 0x1802074B8 (-AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?AddDirtyRect@CLegacyRenderTarget@@UEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180228CA0 (-AddDirtyRect@CLegacyRenderTarget@@UEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?AddDirtyRect@CDDisplayRenderTarget@@UEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180232610 (-AddDirtyRect@CDDisplayRenderTarget@@UEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     _lambda_040d344fdfba241a9058135a9c8d700f_::operator() @ 0x18028CD34 (_lambda_040d344fdfba241a9058135a9c8d700f_--operator().c)
 *     _lambda_d632561372f60ca28cb2b9bb8a736df3_::operator() @ 0x18028D144 (_lambda_d632561372f60ca28cb2b9bb8a736df3_--operator().c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C406C (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTargetDirtyBase<8>::AddDirtyRect(__int64 a1, float *a2)
{
  const __m128i *v4; // rax
  float v5; // xmm0_4
  __m128i v6; // xmm1
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  __m128i v13; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 2312) )
  {
    v4 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8));
    v5 = *a2;
    v6 = _mm_loadu_si128(v4);
    v13 = v6;
    if ( v5 > *(float *)v6.m128i_i32 )
    {
      *(float *)v13.m128i_i32 = v5;
      *(float *)v6.m128i_i32 = v5;
    }
    v7 = a2[1];
    v8 = *(float *)&v13.m128i_i32[1];
    if ( v7 > *(float *)&v13.m128i_i32[1] )
    {
      v13.m128i_i32[1] = (__int32)a2[1];
      v8 = v7;
    }
    v9 = a2[2];
    v10 = *(float *)&v13.m128i_i32[2];
    if ( *(float *)&v13.m128i_i32[2] > v9 )
    {
      v13.m128i_i32[2] = (__int32)a2[2];
      v10 = v9;
    }
    v11 = a2[3];
    v12 = *(float *)&v13.m128i_i32[3];
    if ( *(float *)&v13.m128i_i32[3] > v11 )
    {
      v13.m128i_i32[3] = (__int32)a2[3];
      v12 = v11;
    }
    if ( v10 > *(float *)v6.m128i_i32 && v12 > v8 )
    {
      CMergedRectBase<8>::Add(a1 + 16, &v13);
      if ( *(_QWORD *)(a1 + 464) )
        (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1 + 8LL))(a1, &v13);
    }
    *(_BYTE *)(a1 + 2313) = 1;
  }
}
