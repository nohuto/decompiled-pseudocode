/*
 * XREFs of ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800149A0
 * Callers:
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18016F69C (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180177340 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009BF4 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXXZ @ 0x1800131C0 (-_Tidy@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXXZ.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18001479C (-clear@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansi.c)
 *     ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1800147D4 (-Clear@CMatrixStack2D@@QEAAXXZ.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180015B90 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800A360C (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800E81B0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x180118608 (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     ??1CShapeDrawingContext@@QEAA@XZ @ 0x1801F70C0 (--1CShapeDrawingContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D50 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeTree::DrawShapes(__m128 *this, struct CDrawingContext *a2, const struct D2D_SIZE_F *a3)
{
  __m128 v3; // xmm6
  char v4; // r12
  float width; // xmm0_4
  float height; // xmm1_4
  float v10; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  unsigned int v16; // r14d
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __m128 v20; // xmm12
  int v21; // esi
  __m128 v22; // xmm13
  __int128 v23; // xmm14
  __int128 v24; // xmm15
  __int64 v25; // rax
  int v26; // eax
  __m128 v27; // xmm6
  unsigned __int32 v28; // xmm7_4
  unsigned __int32 v29; // xmm9_4
  float v30; // xmm10_4
  float v31; // xmm8_4
  __int64 v32; // rax
  int v33; // eax
  __m128 v34; // xmm1
  float v35; // xmm0_4
  __m128 v36; // xmm6
  float v37; // xmm0_4
  __m128 v38; // xmm6
  float v39; // xmm1_4
  __m128 v40; // xmm6
  float v41; // xmm0_4
  float v42; // xmm12_4
  float v43; // xmm6_4
  float v44; // xmm0_4
  float v45; // xmm13_4
  float v46; // xmm0_4
  int v47; // eax
  int v48; // eax
  void *v49; // rdi
  int v50; // edx
  unsigned int v51; // r8d
  __int64 result; // rax
  HANDLE ProcessHeap; // rax
  CDrawingContext *v54; // rcx
  __int64 (__fastcall *v55)(CDrawingContext *__hidden); // rax
  int v56; // eax
  __int64 v57; // rcx
  void (__fastcall *v58)(__int64, __m128 *); // rax
  __m128 v59; // xmm6
  __m128 v60; // xmm6
  __m128 v61; // xmm6
  __m128 v62; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v63; // [rsp+50h] [rbp-B8h]
  int v64; // [rsp+A8h] [rbp-60h]
  _BYTE v65[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v66; // [rsp+BCh] [rbp-4Ch]
  __int64 v67; // [rsp+C0h] [rbp-48h]
  __int64 v68; // [rsp+C8h] [rbp-40h]
  int v69; // [rsp+D4h] [rbp-34h]
  LPVOID lpMem; // [rsp+D8h] [rbp-30h]
  int v71; // [rsp+E0h] [rbp-28h]
  __int64 v72; // [rsp+E4h] [rbp-24h]
  int v73; // [rsp+ECh] [rbp-1Ch]
  void *v74[3]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v75[240]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v76[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  __m128 v77; // [rsp+208h] [rbp+100h]
  __m128 v78; // [rsp+218h] [rbp+110h]
  __m128 v79; // [rsp+228h] [rbp+120h]
  __int128 v80; // [rsp+238h] [rbp+130h]
  __int128 v81; // [rsp+248h] [rbp+140h]
  int v82; // [rsp+258h] [rbp+150h]
  __m128 v83; // [rsp+25Ch] [rbp+154h]
  __m128 v84; // [rsp+26Ch] [rbp+164h]
  __int128 v85; // [rsp+27Ch] [rbp+174h]
  __int128 v86; // [rsp+28Ch] [rbp+184h]
  int v87; // [rsp+29Ch] [rbp+194h]
  float v88; // [rsp+2A0h] [rbp+198h]
  float v89; // [rsp+2A4h] [rbp+19Ch]
  __int128 v90; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v91; // [rsp+2B8h] [rbp+1B0h]
  __int16 v92; // [rsp+2C0h] [rbp+1B8h]

  v3 = this[5];
  v4 = 0;
  v62 = v3;
  if ( !this[6].m128_i8[1] )
    return 0LL;
  width = a3->width;
  height = a3->height;
  v10 = _mm_shuffle_ps(v3, v3, 170).m128_f32[0];
  *(_QWORD *)&v63 = 0LL;
  *((_QWORD *)&v63 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
  LODWORD(v11) = _mm_shuffle_ps(v3, v3, 255).m128_u32[0];
  LODWORD(v12) = _mm_shuffle_ps(v3, v3, 85).m128_u32[0];
  if ( v10 > v3.m128_f32[0] && v11 > v12 && (v3.m128_f32[0] < 0.0 || v12 < 0.0 || width < v10 || height < v11) )
  {
    v13 = CDrawingContext::MarkCurrentState(a2);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x13Au, 0LL);
      return v14;
    }
    v4 = 1;
    v15 = CDrawingContext::PushClipRectForCurrentNode(a2);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x13Du, 0LL);
LABEL_37:
      v63 = 0LL;
      while ( 1 )
      {
        v50 = *((_DWORD *)a2 + 68);
        v51 = v50 - 1;
        if ( !v50 )
          break;
        if ( *(_DWORD *)(*((_QWORD *)a2 + 33) + 16LL * v51) == 12 )
        {
          result = v16;
          *((_DWORD *)a2 + 68) = v51;
          return result;
        }
        v54 = (struct CDrawingContext *)((char *)a2 + 16);
        v55 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*((_QWORD *)a2 + 2) + 96LL);
        if ( v55 == CDrawingContext::Pop )
          v56 = CDrawingContext::Pop(v54);
        else
          v56 = v55(v54);
        if ( v56 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x107Bu, 0LL);
      }
      return v16;
    }
  }
  v17 = *((_DWORD *)a2 + 74);
  v64 = 0;
  if ( v17 )
  {
    v18 = (unsigned int)(v17 - 1);
    v19 = *((_QWORD *)a2 + 36);
    v20 = *(__m128 *)(68 * v18 + v19);
    v21 = *(_DWORD *)(68 * v18 + v19 + 64);
    v22 = *(__m128 *)(68 * v18 + v19 + 16);
    v23 = *(_OWORD *)(68 * v18 + v19 + 32);
    v24 = *(_OWORD *)(68 * v18 + v19 + 48);
  }
  else
  {
    v20 = (__m128)_xmm;
    v22 = (__m128)_xmm;
    v23 = _xmm;
    v24 = *(__int128 *)&_xmm.r;
    BYTE1(v64) = BYTE1(v64) & 0xC0 | 0x29;
    LOBYTE(v64) = -86;
    v21 = v64;
  }
  v25 = *((_QWORD *)a2 + 94);
  if ( v25 == *((_QWORD *)a2 + 93) )
  {
    v27 = (__m128)_xmm;
  }
  else
  {
    if ( *(_QWORD *)(v25 - 184) )
    {
      v26 = *((_DWORD *)a2 + 780);
      if ( v26 )
      {
        v27 = *(__m128 *)(*((_QWORD *)a2 + 389) + 16LL * (unsigned int)(v26 - 1));
        v28 = _mm_shuffle_ps(v27, v27, 255).m128_u32[0];
        v29 = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
        v30 = v27.m128_f32[0];
        LODWORD(v31) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
      }
      else
      {
        v27 = (__m128)_xmm;
        v28 = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
        v29 = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
        v30 = *(float *)&_xmm;
        LODWORD(v31) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
      }
    }
    else
    {
      v57 = *(_QWORD *)(v25 - 192);
      v58 = *(void (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v57 + 88LL);
      if ( (char *)v58 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
        IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v57, &v62);
      else
        v58(v57, &v62);
      v59 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 225);
      v59.m128_f32[0] = 0.0;
      v30 = 0.0;
      v60 = _mm_shuffle_ps(v59, v59, 198);
      v31 = 0.0;
      v60.m128_f32[0] = (float)v62.m128_i32[0];
      v29 = v60.m128_u32[0];
      v61 = _mm_shuffle_ps(v60, v60, 39);
      v61.m128_f32[0] = (float)v62.m128_i32[1];
      v28 = v61.m128_u32[0];
      v27 = _mm_shuffle_ps(v61, v61, 57);
    }
    v32 = *((_QWORD *)a2 + 94);
    v62 = v27;
    if ( v32 != *((_QWORD *)a2 + 93) && *(_QWORD *)(v32 - 168) )
    {
      v33 = *((_DWORD *)a2 + 786);
      if ( v33 )
        v34 = *(__m128 *)(*((_QWORD *)a2 + 392) + 16LL * (unsigned int)(v33 - 1));
      else
        v34 = (__m128)_xmm;
      if ( v34.m128_f32[0] > v30 )
      {
        v27 = v62;
        v30 = v34.m128_f32[0];
        v27.m128_f32[0] = v34.m128_f32[0];
        v62 = v27;
      }
      v35 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0];
      if ( v35 > v31 )
      {
        v31 = v35;
        v36 = _mm_shuffle_ps(v62, v62, 225);
        v36.m128_f32[0] = v35;
        v27 = _mm_shuffle_ps(v36, v36, 225);
        v62 = v27;
      }
      v37 = _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
      if ( *(float *)&v29 > v37 )
      {
        *(float *)&v29 = v37;
        v38 = _mm_shuffle_ps(v62, v62, 210);
        v38.m128_f32[0] = v37;
        v27 = _mm_shuffle_ps(v38, v38, 201);
        v62 = v27;
      }
      v39 = _mm_shuffle_ps(v34, v34, 255).m128_f32[0];
      if ( *(float *)&v28 > v39 )
      {
        *(float *)&v28 = v39;
        v40 = _mm_shuffle_ps(v62, v62, 147);
        v40.m128_f32[0] = v39;
        v27 = _mm_shuffle_ps(v40, v40, 57);
        v62 = v27;
      }
      if ( *(float *)&v29 <= v30 || *(float *)&v28 <= v31 )
      {
        v62 = 0uLL;
        v27 = 0u;
      }
    }
  }
  v72 = 0LL;
  v74[0] = v75;
  lpMem = 0LL;
  v74[1] = v75;
  v74[2] = v76;
  v73 = 0;
  v69 = 1;
  v66 = 0;
  v67 = 0LL;
  v68 = 0LL;
  v71 = 0;
  CMatrixStack2D::Clear((CMatrixStack2D *)v74);
  v76[1] = *a3;
  v90 = 0LL;
  v41 = v20.m128_f32[0] * v20.m128_f32[0];
  v76[0] = a2;
  v78 = v20;
  v83 = v20;
  v82 = v21;
  v42 = _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
  v87 = v21;
  v77 = v27;
  v79 = v22;
  v80 = v23;
  v81 = v24;
  v84 = v22;
  v91 = 0LL;
  v85 = v23;
  v86 = v24;
  v43 = sqrtf_0(v41 + (float)(v42 * v42));
  v44 = v22.m128_f32[0] * v22.m128_f32[0];
  v45 = _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
  v46 = sqrtf_0(v44 + (float)(v45 * v45));
  v88 = v43;
  v89 = v46;
  CMatrixStack2D::Clear((CMatrixStack2D *)v74);
  if ( (_QWORD)v90 != *((_QWORD *)&v90 + 1) )
    *((_QWORD *)&v90 + 1) = v90;
  v92 = 0;
  v47 = CShapeTreeIterator::Walk<CShapeDrawingContext>(v65, this, v65);
  v16 = v47;
  if ( v47 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x14Cu, 0LL);
LABEL_57:
    CShapeDrawingContext::~CShapeDrawingContext((CShapeDrawingContext *)v65);
    goto LABEL_36;
  }
  v48 = CShapeDrawingContext::Render((CShapeDrawingContext *)v65);
  v16 = v48;
  if ( v48 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x14Du, 0LL);
    goto LABEL_57;
  }
  std::vector<CShapeRenderTask>::_Tidy((__int64)&v90);
  detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear(v74);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v74);
  v49 = lpMem;
  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v49);
  }
LABEL_36:
  if ( v4 )
    goto LABEL_37;
  return v16;
}
