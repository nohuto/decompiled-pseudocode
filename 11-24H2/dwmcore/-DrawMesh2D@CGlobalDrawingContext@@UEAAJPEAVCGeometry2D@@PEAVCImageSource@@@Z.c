/*
 * XREFs of ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801A3520
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180040084 (McTemplateU0qq_EventWriteTransfer.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180053590 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006FAC0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1800F5800 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800F5FD0 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F7058 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x1800FDC20 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z @ 0x1801A3C50 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1801A3CC8 (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801A3E70 (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x1801EEDDC (McTemplateU0ffff_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalDrawingContext::DrawMesh2D(__m128 *this, struct CGeometry2D *a2, struct CImageSource *a3)
{
  int v3; // edi
  struct ID2D1Effect *v4; // rsi
  int v8; // ebx
  int v9; // eax
  struct IBitmapResource *v10; // r12
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  float v14; // xmm15_4
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct IBitmapRealization *v18; // rbx
  char v19; // di
  __int64 v20; // r9
  int v21; // eax
  int MeshData; // eax
  unsigned int v23; // r14d
  __int64 v24; // rdi
  void *v25; // rax
  void *v26; // rbx
  unsigned int *v27; // r8
  _OWORD *v28; // rcx
  struct MilVertexXYZDUV2 *v29; // r9
  __int64 v30; // rax
  __int128 v31; // xmm1
  int CachedEffectNoRef; // eax
  float v33; // xmm6_4
  float v34; // xmm12_4
  float v35; // xmm13_4
  float v36; // xmm7_4
  float v37; // xmm14_4
  int v38; // eax
  int v39; // eax
  int v40; // eax
  const struct ID2DContextOwner *v41; // rdx
  enum D2D1_COMPOSITE_MODE v42; // eax
  int v44; // r9d
  int v45; // r8d
  int v46; // r9d
  float v47; // xmm6_4
  float v48; // xmm7_4
  float v49; // xmm8_4
  float v50; // xmm9_4
  float v51; // xmm10_4
  float v52; // xmm11_4
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  unsigned int v54[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct IBitmapRealization *v55; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v58[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Effect *v59; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v60; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v61[16]; // [rsp+88h] [rbp-80h] BYREF
  int v62; // [rsp+C8h] [rbp-40h]
  struct MilVertexXYZDUV2 *v63[2]; // [rsp+D8h] [rbp-30h] BYREF
  float v64; // [rsp+E8h] [rbp-20h]
  float v65; // [rsp+ECh] [rbp-1Ch]
  struct D2D_RECT_F v66; // [rsp+F0h] [rbp-18h] BYREF
  _OWORD v67[4]; // [rsp+108h] [rbp+0h] BYREF

  v3 = 0;
  v4 = 0LL;
  v54[0] = 0;
  v59 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)"1",
      7,
      this[497].m128_i32[2]);
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 184LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 192LL))(a2);
      if ( v8 )
      {
        if ( v9 )
        {
          v10 = (struct CImageSource *)((char *)a3 + 72);
          CDrawingContext::RecordBitmapResourceInfo((CDrawingContext *)&this[-1], v10);
          v11 = *(_QWORD *)v10;
          v55 = 0LL;
          v12 = (*(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapRealization **))(v11 + 64))(
                  v10,
                  &v55);
          v54[0] = v12;
          v3 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x10Eu, 0LL);
LABEL_58:
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v55);
            goto LABEL_35;
          }
          v13 = *(_QWORD *)a2;
          v66 = 0LL;
          (*(void (__fastcall **)(struct CGeometry2D *, struct D2D_RECT_F *))(v13 + 200))(a2, &v66);
          v64 = 0.0;
          v65 = 0.0;
          v56 = 0LL;
          v14 = 0.0;
          *(struct D2D_RECT_F *)v63 = v66;
          v15 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v56, (__int64)&this[-1], (__int64)v63);
          v54[0] = v15;
          v3 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x116u, 0LL);
            goto LABEL_57;
          }
          v16 = CDrawingContext::ApplyRenderStateInternal(this - 1, 0);
          v54[0] = v16;
          v3 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x117u, 0LL);
            goto LABEL_57;
          }
          v17 = CDrawingContext::RecordBitmapRealizationInfo((CDrawingContext *)&this[-1], v55);
          v54[0] = v17;
          v3 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x119u, 0LL);
            goto LABEL_57;
          }
          if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
          {
            v62 = 0;
            *(_OWORD *)v63 = 0LL;
            CMatrixStack::Top((CMatrixStack *)&this[17], (struct CMILMatrix *)v61);
            CMILMatrix::Transform2DBoundsHelper<0>((__int64)v61, &v66, (float *)v63);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
              McTemplateU0ffff_EventWriteTransfer(
                (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
                (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
                v45,
                v46,
                (char)v63[1],
                SBYTE4(v63[1]));
          }
          v57 = 0LL;
          v18 = v55;
          v63[0] = *(struct MilVertexXYZDUV2 **)(*(_QWORD *)v55 + 112LL);
          v19 = (*(__int64 (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)v10 + 32LL))(v10);
          if ( v57 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
          LOBYTE(v20) = v19;
          v21 = ((__int64 (__fastcall *)(struct IBitmapRealization *, unsigned __int16 *, __int64 *, __int64))v63[0])(
                  v18,
                  &this[2].m128_u16[4],
                  &v57,
                  v20);
          v54[0] = v21;
          v3 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x12Cu, 0LL);
            goto LABEL_42;
          }
          v63[0] = 0LL;
          v54[0] = 0;
          v60 = 0LL;
          v58[0] = 0;
          MeshData = CGeometry2D::GetMeshData(a2, v63, v54, (const unsigned int **const)&v60, v58);
          v54[0] = MeshData;
          v3 = MeshData;
          if ( MeshData < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, MeshData, 0x137u, 0LL);
            goto LABEL_42;
          }
          v23 = v58[0];
          v24 = v58[0];
          v25 = MIDL_user_allocate(saturated_mul(v58[0], 0x20uLL));
          *(_QWORD *)v58 = v25;
          v26 = v25;
          if ( !v25 )
          {
            v3 = -2147024882;
            v54[0] = -2147024882;
            v44 = -2147024882;
            v53 = 314;
LABEL_41:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, v53, 0LL);
            std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)v58);
LABEL_42:
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v57);
LABEL_57:
            CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v56);
            goto LABEL_58;
          }
          if ( v23 )
          {
            v27 = v60;
            v28 = v25;
            v29 = v63[0];
            do
            {
              v30 = *v27++;
              v30 *= 32LL;
              v31 = *(_OWORD *)((char *)v29 + v30 + 16);
              *v28 = *(_OWORD *)((char *)v29 + v30);
              v28[1] = v31;
              v28 += 2;
              --v24;
            }
            while ( v24 );
          }
          CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(this[1].m128_u64[1] + 16, 4u, (__int64 *)&v59);
          v54[0] = CachedEffectNoRef;
          v3 = CachedEffectNoRef;
          if ( CachedEffectNoRef < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedEffectNoRef, 0x142u, 0LL);
            std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)v58);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v57);
            CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v56);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v55);
            v4 = v59;
            goto LABEL_35;
          }
          v33 = 0.0;
          LODWORD(v34) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v35 = 0.0;
          v67[0] = _xmm;
          LODWORD(v36) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v37 = 0.0;
          v67[1] = _xmm;
          v67[2] = _xmm;
          v67[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
          v62 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _DWORD *, _QWORD))(*(_QWORD *)v55 + 40LL))(
                 v55,
                 v61,
                 0LL) )
          {
            v47 = *(float *)v61;
            v48 = *(float *)&v61[1];
            v49 = *(float *)&v61[4];
            v50 = *(float *)&v61[5];
            v51 = *(float *)&v61[12];
            v52 = *(float *)&v61[13];
            (*(void (__fastcall **)(struct IBitmapRealization *, struct MilVertexXYZDUV2 **))(*(_QWORD *)v55 + 32LL))(
              v55,
              v63);
            v14 = (float)SHIDWORD(v63[0]) * v48;
            v36 = (float)SHIDWORD(v63[0]) * v50;
            v34 = (float)SLODWORD(v63[0]) * v47;
            v33 = (float)SLODWORD(v63[0]) * v49;
            v35 = (float)SLODWORD(v63[0]) * v51;
            v37 = (float)SHIDWORD(v63[0]) * v52;
          }
          v4 = v59;
          v38 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v59 + 72LL))(
                  v59,
                  0LL,
                  0LL,
                  v67,
                  64);
          v54[0] = v38;
          v3 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x159u, 0LL);
          }
          else
          {
            v63[0] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v14), LODWORD(v34));
            v63[1] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v36), LODWORD(v33));
            v64 = v35;
            v65 = v37;
            v39 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct MilVertexXYZDUV2 **, int))(*(_QWORD *)v4 + 72LL))(
                    v4,
                    1LL,
                    0LL,
                    v63,
                    24);
            v54[0] = v39;
            v3 = v39;
            if ( v39 < 0 )
            {
              v53 = 348;
LABEL_56:
              v44 = v39;
              goto LABEL_41;
            }
            (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 112LL))(
              v4,
              0LL,
              v57,
              1LL);
            v40 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, const wchar_t *, _QWORD, void *, unsigned int))(*(_QWORD *)v4 + 64LL))(
                    v4,
                    L"vertices",
                    0LL,
                    v26,
                    32 * v23);
            v54[0] = v40;
            v3 = v40;
            if ( v40 >= 0 )
            {
              v41 = (const struct ID2DContextOwner *)&this->m128_u16[4];
              v42 = D2D1_COMPOSITE_MODE_MASK_INVERT;
              if ( this[14].m128_i32[2] != 2 )
                v42 = D2D1_COMPOSITE_MODE_SOURCE_OVER;
              if ( this == (__m128 *)16 )
                v41 = 0LL;
              v39 = CD2DContext::FillEffect(
                      (ID2D1DeviceContext **)(this[1].m128_u64[1] + 16),
                      v41,
                      v4,
                      0LL,
                      0LL,
                      D2D1_INTERPOLATION_MODE_LINEAR,
                      v42);
              v54[0] = v39;
              v3 = v39;
              if ( v39 >= 0 )
                goto LABEL_31;
              v53 = 362;
              goto LABEL_56;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v40, 0x163u, 0LL);
          }
LABEL_31:
          operator delete(v26);
          if ( v57 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
          CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v56);
          if ( v55 )
            (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v55 + 16LL))(v55);
        }
      }
    }
  }
LABEL_35:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Stop,
      7,
      this[497].m128_i32[2]);
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 112LL))(v4, 0LL, 0LL, 1LL);
  TranslateDXGIorD3DErrorInContext(v3, 0, v54);
  return v54[0];
}
