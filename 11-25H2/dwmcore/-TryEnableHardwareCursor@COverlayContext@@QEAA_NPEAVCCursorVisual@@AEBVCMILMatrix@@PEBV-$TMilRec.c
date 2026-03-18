/*
 * XREFs of ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180277784
 * Callers:
 *     ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x180285950 (-CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180189830 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801DFEB0 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?GetCursorShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x180239480 (-GetCursorShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@QEAA_NXZ @ 0x180247DA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?IsCursorScaledByHardware@COverlayContext@@QEBA_NPEBVCD3DDevice@@@Z @ 0x18027708C (-IsCursorScaledByHardware@COverlayContext@@QEBA_NPEBVCD3DDevice@@@Z.c)
 *     ?TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@_N@Z @ 0x18029ACB8 (-TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::TryEnableHardwareCursor(
        COverlayContext *this,
        CResource *a2,
        __int128 *a3,
        const struct D2D_RECT_F *a4)
{
  __m128 v4; // xmm3
  __int64 v9; // r15
  const struct CMonitorTransform *MonitorTransform; // rax
  __int128 v11; // xmm0
  __int64 v12; // rdi
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int64 (__fastcall *v16)(__int64); // rax
  __int128 v17; // xmm1
  const struct CD3DDevice *v18; // rax
  char IsCursorScaledByHardware; // al
  const struct CMILMatrix *v20; // rbx
  __int64 v21; // rcx
  __m128 v22; // xmm1
  int v23; // eax
  __m128 v24; // xmm1
  __int32 v25; // ecx
  __m128 v26; // xmm0
  int v27; // eax
  __int32 v28; // ecx
  int v29; // eax
  __int32 v30; // ecx
  int v31; // ecx
  char v32; // di
  int v33; // ebx
  _QWORD *v34; // rax
  CResource *v35; // rbx
  __int64 v36; // rax
  const struct CVisualTree *v37; // rax
  __m128i v39; // [rsp+30h] [rbp-59h] BYREF
  _OWORD v40[4]; // [rsp+40h] [rbp-49h] BYREF
  int v41; // [rsp+80h] [rbp-9h]
  __int128 v42; // [rsp+90h] [rbp+7h] BYREF

  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
  if ( v9 )
  {
    MonitorTransform = COverlayContext::GetMonitorTransform(this);
    v11 = *a3;
    v12 = (__int64)MonitorTransform;
    v13 = a3[1];
    v41 = *((_DWORD *)a3 + 16);
    v14 = *(_QWORD *)v9;
    v40[0] = v11;
    v15 = a3[2];
    v16 = *(__int64 (__fastcall **)(__int64))(v14 + 40);
    v40[1] = v13;
    v17 = a3[3];
    v40[2] = v15;
    v40[3] = v17;
    v18 = (const struct CD3DDevice *)v16(v9);
    IsCursorScaledByHardware = COverlayContext::IsCursorScaledByHardware(this, v18);
    v20 = (const struct CMILMatrix *)(v12 + (IsCursorScaledByHardware != 0 ? 188LL : 52LL));
    CMonitorTransform::GetClipBox(v12, (__int64)&v39, IsCursorScaledByHardware);
    if ( !a4 )
      goto LABEL_13;
    if ( CMILMatrix::Is2DAxisAlignedPreserving(v20) )
    {
      v42 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<1>(v21, a4, (float *)&v42);
      v22 = 0LL;
      v22.m128_f32[0] = (float)(int)*(float *)&v42;
      v22.m128_f32[0] = _mm_cmplt_ss((__m128)(unsigned int)v42, v22).m128_f32[0];
      v23 = _mm_cvtsi128_si32((__m128i)v22);
      v24 = 0LL;
      v25 = v23 + (int)*(float *)&v42;
      if ( v39.m128i_i32[0] >= v25 )
        v25 = v39.m128i_i32[0];
      v39.m128i_i32[0] = v25;
      v24.m128_f32[0] = (float)(int)*((float *)&v42 + 1);
      v24.m128_f32[0] = _mm_cmplt_ss((__m128)DWORD1(v42), v24).m128_f32[0];
      v26 = (__m128)DWORD2(v42);
      v27 = _mm_cvtsi128_si32((__m128i)v24);
      v24.m128_i32[0] = DWORD2(v42);
      v28 = v27 + (int)*((float *)&v42 + 1);
      if ( v39.m128i_i32[1] >= v28 )
        v28 = v39.m128i_i32[1];
      v39.m128i_i32[1] = v28;
      v26.m128_f32[0] = (float)(int)*((float *)&v42 + 2);
      v29 = _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v26, v24));
      v26.m128_i32[0] = HIDWORD(v42);
      v30 = (int)*((float *)&v42 + 2) - v29;
      if ( v30 >= v39.m128i_i32[2] )
        v30 = v39.m128i_i32[2];
      v39.m128i_i32[2] = v30;
      v4.m128_f32[0] = (float)(int)*((float *)&v42 + 3);
      v31 = (int)*((float *)&v42 + 3) - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v4, v26));
      if ( v31 >= v39.m128i_i32[3] )
        v31 = v39.m128i_i32[3];
      v39.m128i_i32[3] = v31;
      if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v39) )
      {
LABEL_13:
        CMILMatrix::Multiply((CMILMatrix *)v40, v20);
        v32 = *(_BYTE *)(v12 + 257);
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 224LL))(v9);
        v34 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 216LL))(v9, &v42);
        if ( (unsigned __int8)CCursorVisual::TryEnableHardwareCursor(
                                (_DWORD)a2,
                                *v34,
                                v33,
                                (unsigned int)&v39,
                                (__int64)v40,
                                v32) )
        {
          v35 = (CResource *)*((_QWORD *)this + 2451);
          if ( v35 != a2 )
          {
            *((_QWORD *)this + 2451) = a2;
            if ( a2 )
              CMILRefCountImpl::AddReference((CResource *)((char *)a2 + 8));
            if ( v35 )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v35);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
          }
          *((_BYTE *)this + 19780) = 1;
        }
        else if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftwareXORCursor>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SoftwareXORCursor>::GetImpl'::`2'::impl) )
        {
          v36 = *((_QWORD *)a2 + 87);
          if ( v36 )
          {
            if ( *(_QWORD *)(v36 + 176) && *(_BYTE *)(v36 + 81) )
            {
              v37 = (const struct CVisualTree *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this);
              CCursorVisual::GetCursorShapeBounds(a2, &v39, v37);
              TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
                (float *)this + 4904,
                (float *)v39.m128i_i32);
            }
          }
        }
      }
    }
  }
  return *((_BYTE *)this + 19780);
}
