/*
 * XREFs of ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18014E034
 * Callers:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18014DD84 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180017B4C (--1CRegionShape@@UEAA@XZ.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x18001BD4C (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqu.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014CF00 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1PathGeometry@@@@YAXPEAUID2D1PathGeometry@@@Z @ 0x18014E8E8 (--$ReleaseInterfaceNoNULL@UID2D1PathGeometry@@@@YAXPEAUID2D1PathGeometry@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18014FA14 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x18014FA58 (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ?IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18014FAAC (-IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUD2D_RECT_F@@AEAU2@@Z @ 0x18014FB88 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUD2D_RECT_F@@AEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??0?$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEAA@PEBX_K@Z @ 0x1802A17AC (--0-$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEAA@PEBX_K@Z.c)
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x1802A17C4 (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 *     ?CurrentItem@?$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEAAPEBUD2D1_COMPOSITOR_DRAWING_STATE@@XZ @ 0x1802A1B90 (-CurrentItem@-$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEAAPEBUD.c)
 *     ?HasMore@?$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEBA_NXZ @ 0x1802A1D70 (-HasMore@-$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEBA_NXZ.c)
 *     ?HasMore@?$DataIterator@$$CBUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@$0JE@@CPrimitiveGroup@@QEBA_NXZ @ 0x1802A1D88 (-HasMore@-$DataIterator@$$CBUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@$0JE@@CPrimitiveGroup@@QEB.c)
 *     ?Step@?$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEAAXXZ @ 0x1802A1E6C (-Step@-$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEAAXXZ.c)
 *     ?Step@?$DataIterator@$$CBUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@$0JE@@CPrimitiveGroup@@QEAAXXZ @ 0x1802A1E7C (-Step@-$DataIterator@$$CBUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@$0JE@@CPrimitiveGroup@@QEAAXX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this, __int64 a2, double a3)
{
  char v4; // r12
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  char v8; // si
  _DWORD *v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // r14d
  char v12; // cl
  int D2DGeometry; // eax
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  int v18; // r9d
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  const struct D2D_RECT_F *v21; // rdx
  float *v22; // rcx
  int v23; // r11d
  int v24; // r9d
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // edx
  int v29; // edi
  struct D2D_POINT_2F *v30; // rax
  FLOAT v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  __int64 v34; // rdx
  FLOAT v35; // xmm3_4
  __m128 v36; // xmm1
  __m128 v37; // xmm1
  __m128 v38; // xmm1
  __m128 v39; // xmm1
  _BYTE *v40; // rax
  const struct D2D_RECT_F *v41; // r9
  unsigned int v42; // eax
  int v43; // r9d
  unsigned int *v44; // r9
  __int64 v45; // r10
  int v46; // r11d
  FLOAT right; // xmm0_4
  FLOAT bottom; // xmm1_4
  __m128i v49; // xmm0
  int v50; // r10d
  int v51; // eax
  int v52; // eax
  MILMatrix3x2 *v53; // rcx
  float *v54; // rcx
  __int64 v55; // r9
  int v56; // r11d
  int v57; // r9d
  __m128 v58; // xmm1
  int v59; // r8d
  __m128 v60; // xmm1
  int v61; // edx
  __m128 v62; // xmm1
  int v63; // ecx
  __m128 v64; // xmm1
  __int64 v65; // rax
  unsigned int v66; // edx
  __int128 v67; // xmm0
  int v68; // eax
  int v69; // r9d
  unsigned int v70; // eax
  struct D2D_POINT_2F *v71; // rax
  FLOAT v72; // xmm2_4
  __int64 v73; // rdx
  float v74; // xmm0_4
  FLOAT v75; // xmm3_4
  __m128 v76; // xmm1
  __m128i v77; // xmm0
  int v78; // r8d
  __m128 v79; // xmm1
  __m128i v80; // xmm0
  int v81; // edx
  __m128 v82; // xmm1
  __m128i v83; // xmm0
  int v84; // ecx
  __m128 v85; // xmm1
  int v86; // eax
  int v87; // r9d
  unsigned int v88; // eax
  unsigned int v89; // [rsp+28h] [rbp-E0h]
  float v90; // [rsp+38h] [rbp-D0h]
  struct D2D_RECT_F v91; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+50h] [rbp-B8h] BYREF
  struct ID2D1GeometrySink *v93; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v94[16]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v95; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v96[2]; // [rsp+88h] [rbp-80h] BYREF
  int *v97[3]; // [rsp+A8h] [rbp-60h] BYREF
  int v98; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v99; // [rsp+100h] [rbp-8h]
  __int64 v100[2]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v101; // [rsp+11Ch] [rbp+14h]
  unsigned int v102; // [rsp+120h] [rbp+18h]
  struct D2D_POINT_2F v103; // [rsp+228h] [rbp+120h] BYREF
  FLOAT v104; // [rsp+230h] [rbp+128h]
  FLOAT y; // [rsp+234h] [rbp+12Ch]
  unsigned __int64 v106; // [rsp+238h] [rbp+130h]
  FLOAT left; // [rsp+240h] [rbp+138h]
  FLOAT v108; // [rsp+244h] [rbp+13Ch]

  v4 = 0;
  v5 = 0;
  DynArrayIA<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>((__int64)v100);
  v92 = 0LL;
  v93 = 0LL;
  ReleaseInterface<ID2D1Geometry>((char *)this + 88);
  ReleaseInterface<ID2D1Geometry>((char *)this + 96);
  v6 = *((_QWORD *)this + 63);
  v7 = v6 + *((_QWORD *)this + 64);
  while ( v6 < v7 )
  {
    v40 = (_BYTE *)(v6 + 16);
    v41 = (const struct D2D_RECT_F *)v6;
    v6 += 17LL;
    if ( (unsigned __int64)v40 > v7 || v6 > v7 )
    {
      v89 = 865;
      goto LABEL_20;
    }
    if ( !*v40 )
    {
      if ( !IsPixelAligned(v41) )
      {
        *(_OWORD *)&a3 = *v44;
        LODWORD(right) = v44[2];
        LODWORD(v103.y) = v44[1];
        y = v103.y;
        bottom = *(FLOAT *)(v45 + 12);
LABEL_58:
        v108 = bottom;
        left = *(float *)&a3;
        v106 = __PAIR64__(LODWORD(bottom), LODWORD(right));
        v104 = right;
        v103.x = *(FLOAT *)&a3;
        goto LABEL_95;
      }
      v49 = (__m128i)*(unsigned int *)(v45 + 12);
      if ( (v46 & (unsigned int)_mm_cvtsi128_si32(v49)) > 0x497FFFF0 )
      {
        v76.m128_f32[0] = -0.5;
        *(float *)&a3 = (float)(int)*(float *)v49.m128i_i32 - *(float *)v49.m128i_i32;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v76);
        v50 = (int)*(float *)v49.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
      }
      else
      {
        v90 = *(float *)v49.m128i_i32 + 6291456.25;
        v50 = (int)(LODWORD(v90) << 10) >> 11;
      }
      v77 = (__m128i)v44[2];
      if ( (v46 & (unsigned int)_mm_cvtsi128_si32(v77)) > 0x497FFFF0 )
      {
        v79.m128_f32[0] = -0.5;
        *(float *)&a3 = (float)(int)*(float *)v77.m128i_i32 - *(float *)v77.m128i_i32;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v79);
        v78 = (int)*(float *)v77.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
      }
      else
      {
        v90 = *(float *)v77.m128i_i32 + 6291456.25;
        v78 = (int)(LODWORD(v90) << 10) >> 11;
      }
      v80 = (__m128i)v44[1];
      if ( (v46 & (unsigned int)_mm_cvtsi128_si32(v80)) > 0x497FFFF0 )
      {
        v82.m128_f32[0] = -0.5;
        *(float *)&a3 = (float)(int)*(float *)v80.m128i_i32 - *(float *)v80.m128i_i32;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v82);
        v81 = (int)*(float *)v80.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
      }
      else
      {
        v90 = *(float *)v80.m128i_i32 + 6291456.25;
        v81 = (int)(LODWORD(v90) << 10) >> 11;
      }
      v83 = (__m128i)*v44;
      if ( (v46 & (unsigned int)_mm_cvtsi128_si32(v83)) > 0x497FFFF0 )
      {
        v85.m128_f32[0] = -0.5;
        *(float *)&a3 = (float)(int)*(float *)v83.m128i_i32 - *(float *)v83.m128i_i32;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v85);
        v84 = (int)*(float *)v83.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
      }
      else
      {
        v90 = *(float *)v83.m128i_i32 + 6291456.25;
        v84 = (int)(LODWORD(v90) << 10) >> 11;
      }
      v65 = v102;
      *(_QWORD *)&v95 = __PAIR64__(v81, v84);
      *((_QWORD *)&v95 + 1) = __PAIR64__(v50, v78);
      v66 = v102 + 1;
      if ( v102 + 1 < v102 )
      {
        v29 = -2147024362;
        v88 = 181;
        v5 = -2147024362;
        v87 = -2147024362;
        goto LABEL_118;
      }
      v29 = 0;
      if ( v66 <= v101 )
      {
        v67 = v95;
        goto LABEL_88;
      }
      v86 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v100, 16, 1, &v95);
      v29 = v86;
      v5 = v86;
      if ( v86 < 0 )
      {
        v87 = v86;
        v88 = 192;
LABEL_118:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v87, v88, 0LL);
        v89 = 946;
        goto LABEL_54;
      }
      goto LABEL_91;
    }
    v53 = (MILMatrix3x2 *)v6;
    v6 += 24LL;
    if ( v6 > v7 )
    {
      v89 = 876;
      goto LABEL_20;
    }
    if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox(v53) )
    {
      v91 = 0LL;
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v54, (const struct D2D_RECT_F *)v55, &v91);
      if ( !IsPixelAligned(&v91) )
      {
        *(_OWORD *)&a3 = LODWORD(v91.left);
        right = v91.right;
        v103.y = v91.top;
        y = v91.top;
        bottom = v91.bottom;
        goto LABEL_58;
      }
      if ( (v56 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v91.bottom))) > 0x497FFFF0 )
      {
        v58.m128_f32[0] = -0.5;
        *(float *)&a3 = (float)(int)v91.bottom - v91.bottom;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v58);
        v57 = (int)v91.bottom - _mm_cvtsi128_si32(*(__m128i *)&a3);
      }
      else
      {
        v90 = v91.bottom + 6291456.25;
        v57 = (int)(LODWORD(v90) << 10) >> 11;
      }
      if ( (v56 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v91.right))) > 0x497FFFF0 )
      {
        v60.m128_f32[0] = -0.5;
        *(float *)&a3 = (float)(int)v91.right - v91.right;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v60);
        v59 = (int)v91.right - _mm_cvtsi128_si32(*(__m128i *)&a3);
      }
      else
      {
        v90 = v91.right + 6291456.25;
        v59 = (int)(LODWORD(v90) << 10) >> 11;
      }
      if ( (v56 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v91.top))) > 0x497FFFF0 )
      {
        v62.m128_f32[0] = -0.5;
        *(float *)&a3 = (float)(int)v91.top - v91.top;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v62);
        v61 = (int)v91.top - _mm_cvtsi128_si32(*(__m128i *)&a3);
      }
      else
      {
        v90 = v91.top + 6291456.25;
        v61 = (int)(LODWORD(v90) << 10) >> 11;
      }
      if ( (v56 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v91.left))) > 0x497FFFF0 )
      {
        v64.m128_f32[0] = -0.5;
        *(float *)&a3 = (float)(int)v91.left - v91.left;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v64);
        v63 = (int)v91.left - _mm_cvtsi128_si32(*(__m128i *)&a3);
      }
      else
      {
        v90 = v91.left + 6291456.25;
        v63 = (int)(LODWORD(v90) << 10) >> 11;
      }
      v65 = v102;
      *(_QWORD *)&v96[0] = __PAIR64__(v61, v63);
      *((_QWORD *)&v96[0] + 1) = __PAIR64__(v57, v59);
      v66 = v102 + 1;
      if ( v102 + 1 < v102 )
      {
        v29 = -2147024362;
        v70 = 181;
        v5 = -2147024362;
        v69 = -2147024362;
LABEL_115:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v69, v70, 0LL);
        v89 = 895;
LABEL_54:
        v18 = v29;
        goto LABEL_21;
      }
      v29 = 0;
      if ( v66 <= v101 )
      {
        v67 = v96[0];
LABEL_88:
        *(_OWORD *)(v100[0] + 16 * v65) = v67;
        v102 = v66;
        goto LABEL_91;
      }
      v68 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v100, 16, 1, v96);
      v29 = v68;
      v5 = v68;
      if ( v68 < 0 )
      {
        v69 = v68;
        v70 = 192;
        goto LABEL_115;
      }
LABEL_91:
      v5 = v29;
    }
    else
    {
      v71 = &v103;
      v72 = *(float *)v55;
      v73 = 4LL;
      v74 = *(float *)(v55 + 8);
      v103.y = *(FLOAT *)(v55 + 4);
      y = v103.y;
      HIDWORD(v106) = *(_DWORD *)(v55 + 12);
      v108 = *((float *)&v106 + 1);
      v103.x = v72;
      v104 = v74;
      *(float *)&v106 = v74;
      left = v72;
      do
      {
        *(_OWORD *)&a3 = LODWORD(v71->y);
        v75 = (float)((float)(v71->y * v54[3]) + (float)(v71->x * v54[1])) + v54[5];
        v71->x = (float)((float)(*(float *)&a3 * v54[2]) + (float)(v71->x * *v54)) + v54[4];
        v71->y = v75;
        ++v71;
        --v73;
      }
      while ( v73 );
LABEL_95:
      if ( !v92 )
      {
        v52 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)g_DeviceManager + 80LL))(g_DeviceManager, &v92);
        v5 = v52;
        if ( v52 < 0 )
        {
          v89 = 971;
          goto LABEL_122;
        }
        v52 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v92 + 136LL))(v92, &v93);
        v5 = v52;
        if ( v52 < 0 )
        {
          v89 = 973;
          goto LABEL_122;
        }
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v93 + 24LL))(v93, 1LL);
      }
      CPrimitiveGroup::AddFilledPolygonToD2DSink(v93, &v103);
    }
  }
  v8 = 0;
  CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>(
    v94,
    *((_QWORD *)this + 59),
    *((_QWORD *)this + 60));
  while ( (unsigned __int8)CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::HasMore(v94) )
  {
    v9 = (_DWORD *)CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::CurrentItem(v94);
    v10 = (unsigned int)v9[4];
    v11 = v9[1] & 0x20;
    if ( v11 && (_DWORD)v10 != *((_DWORD *)this + 109) )
    {
      v4 = 1;
LABEL_17:
      v15 = *((_QWORD *)this + 62);
      v16 = (unsigned int)v9[4];
      if ( v10 >= v15
        || (v17 = 148LL * (unsigned int)v9[5], v17 > 0xFFFFFFFF)
        || (v19 = (unsigned int)(v17 + v10), (unsigned int)v19 < (unsigned int)v17)
        || v19 > v15 )
      {
        v89 = 1019;
LABEL_20:
        v18 = -2147467259;
        v5 = -2147467259;
        goto LABEL_21;
      }
      CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>(
        v96,
        v16 + *((_QWORD *)this + 61),
        (unsigned int)v17);
      while ( 2 )
      {
        if ( !(unsigned __int8)CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE const,148>::HasMore(v96) )
          goto LABEL_8;
        v20 = CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::CurrentItem(v96);
        if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v20 + 16)) )
        {
          v91 = 0LL;
          MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v22, v21, &v91);
          if ( IsPixelAligned(&v91) )
          {
            if ( (v23 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v91.bottom))) > 0x497FFFF0 )
            {
              v36.m128_f32[0] = -0.5;
              *(float *)&a3 = (float)(int)v91.bottom - v91.bottom;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v36);
              v24 = (int)v91.bottom - _mm_cvtsi128_si32(*(__m128i *)&a3);
            }
            else
            {
              v90 = v91.bottom + 6291456.25;
              v24 = (int)(LODWORD(v90) << 10) >> 11;
            }
            if ( (v23 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v91.right))) > 0x497FFFF0 )
            {
              v37.m128_f32[0] = -0.5;
              *(float *)&a3 = (float)(int)v91.right - v91.right;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v37);
              v25 = (int)v91.right - _mm_cvtsi128_si32(*(__m128i *)&a3);
            }
            else
            {
              v90 = v91.right + 6291456.25;
              v25 = (int)(LODWORD(v90) << 10) >> 11;
            }
            if ( (v23 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v91.top))) > 0x497FFFF0 )
            {
              v38.m128_f32[0] = -0.5;
              *(float *)&a3 = (float)(int)v91.top - v91.top;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v38);
              v26 = (int)v91.top - _mm_cvtsi128_si32(*(__m128i *)&a3);
            }
            else
            {
              v90 = v91.top + 6291456.25;
              v26 = (int)(LODWORD(v90) << 10) >> 11;
            }
            if ( (v23 & (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v91.left))) > 0x497FFFF0 )
            {
              v39.m128_f32[0] = -0.5;
              *(float *)&a3 = (float)(int)v91.left - v91.left;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v39);
              v27 = (int)v91.left - _mm_cvtsi128_si32(*(__m128i *)&a3);
            }
            else
            {
              v90 = v91.left + 6291456.25;
              v27 = (int)(LODWORD(v90) << 10) >> 11;
            }
            *(_QWORD *)&v95 = __PAIR64__(v26, v27);
            *((_QWORD *)&v95 + 1) = __PAIR64__(v24, v25);
            v28 = v102 + 1;
            if ( v102 + 1 < v102 )
            {
              v29 = -2147024362;
              v42 = 181;
              v5 = -2147024362;
              v43 = -2147024362;
LABEL_53:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, v42, 0LL);
              v89 = 1049;
              goto LABEL_54;
            }
            v29 = 0;
            if ( v28 > v101 )
            {
              v51 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v100, 16, 1, &v95);
              v29 = v51;
              v5 = v51;
              if ( v51 < 0 )
              {
                v43 = v51;
                v42 = 192;
                goto LABEL_53;
              }
            }
            else
            {
              *(_OWORD *)(v100[0] + 16LL * v102) = v95;
              v102 = v28;
            }
            v5 = v29;
LABEL_40:
            CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE const,148>::Step(v96);
            continue;
          }
          *(_OWORD *)&a3 = LODWORD(v91.left);
          y = v91.top;
          v108 = v91.bottom;
          v103 = *(struct D2D_POINT_2F *)&v91.left;
          v104 = v91.right;
          v106 = *(_QWORD *)&v91.right;
          left = v91.left;
        }
        else
        {
          v30 = &v103;
          v31 = v21->left;
          v32 = v21->right;
          v103.y = v21->top;
          y = v103.y;
          v33 = v21->bottom;
          v34 = 4LL;
          v108 = v33;
          v103.x = v31;
          v104 = v32;
          v106 = __PAIR64__(LODWORD(v33), LODWORD(v32));
          left = v31;
          do
          {
            *(_OWORD *)&a3 = LODWORD(v30->y);
            v35 = (float)((float)(v30->y * v22[3]) + (float)(v30->x * v22[1])) + v22[5];
            v30->x = (float)((float)(*(float *)&a3 * v22[2]) + (float)(v30->x * *v22)) + v22[4];
            v30->y = v35;
            ++v30;
            --v34;
          }
          while ( v34 );
        }
        break;
      }
      if ( !v92 )
      {
        v52 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)g_DeviceManager + 80LL))(g_DeviceManager, &v92);
        v5 = v52;
        if ( v52 < 0 )
        {
          v89 = 1096;
LABEL_122:
          v18 = v52;
LABEL_21:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v89, 0LL);
          goto LABEL_16;
        }
        v52 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v92 + 136LL))(v92, &v93);
        v5 = v52;
        if ( v52 < 0 )
        {
          v89 = 1098;
          goto LABEL_122;
        }
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v93 + 24LL))(v93, 1LL);
      }
      CPrimitiveGroup::AddFilledPolygonToD2DSink(v93, &v103);
      goto LABEL_40;
    }
    if ( !v8 && (v9[1] & 2) == 0 )
      goto LABEL_17;
LABEL_8:
    CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::Step(v94, v10);
    v12 = v4;
    v4 = 0;
    if ( !v11 )
      v12 = v8;
    v8 = v12;
  }
  if ( v93 )
  {
    v52 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v93 + 72LL))(v93);
    v5 = v52;
    if ( v52 < 0 )
    {
      v89 = 1120;
      goto LABEL_122;
    }
    *((_QWORD *)this + 12) = v92;
    v92 = 0LL;
  }
  if ( v102 )
  {
    v97[0] = (int *)&CRegionShape::`vftable';
    v97[1] = 0LL;
    v97[2] = &v98;
    v98 = 0;
    v99 = 0LL;
    CRegionShape::BuildFromRects((__int64)v97, v100[0], v102);
    D2DGeometry = CRegionShape::GetD2DGeometry(v97, 0LL, (struct ID2D1Geometry **)this + 11);
    v5 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x471u, 0LL);
      CRegionShape::~CRegionShape((CRegionShape *)v97);
      goto LABEL_16;
    }
    CRegionShape::~CRegionShape((CRegionShape *)v97);
  }
  *((_BYTE *)this + 104) = 1;
LABEL_16:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v93);
  ReleaseInterfaceNoNULL<ID2D1PathGeometry>(v92);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v100);
  return v5;
}
