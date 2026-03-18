/*
 * XREFs of ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801164E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180080A10 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180081FD8 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D5FE0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x180114C70 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801161D0 (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1801162C0 (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z @ 0x180116460 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180118110 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801E4A58 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x1801FB2CC (McTemplateU0ffff_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalDrawingContext::DrawMesh2D(__m128 *this, struct CGeometry2D *a2, struct CImageSource *a3)
{
  unsigned int v3; // edi
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
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  struct IBitmapRealization *v20; // rbx
  char v21; // di
  __int64 v22; // r9
  int v23; // eax
  int MeshData; // eax
  unsigned int v25; // r14d
  __int64 v26; // rdi
  void *v27; // rax
  void *v28; // rbx
  unsigned int *v29; // r8
  _OWORD *v30; // rcx
  struct MilVertexXYZDUV2 *v31; // r9
  __int64 v32; // rax
  __int128 v33; // xmm1
  int CachedEffectNoRef; // eax
  float v35; // xmm6_4
  float v36; // xmm12_4
  float v37; // xmm13_4
  float v38; // xmm7_4
  float v39; // xmm14_4
  int v40; // eax
  int v41; // eax
  int v42; // eax
  const struct ID2DContextOwner *v43; // rdx
  enum D2D1_COMPOSITE_MODE v44; // eax
  int v46; // r9d
  int v47; // r8d
  int v48; // r9d
  float v49; // xmm6_4
  float v50; // xmm7_4
  float v51; // xmm8_4
  float v52; // xmm9_4
  float v53; // xmm10_4
  float v54; // xmm11_4
  unsigned int v55; // [rsp+28h] [rbp-E0h]
  unsigned int v56[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct IBitmapRealization *v57; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v60[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Effect *v61; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v62; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v63[16]; // [rsp+88h] [rbp-80h] BYREF
  int v64; // [rsp+C8h] [rbp-40h]
  struct MilVertexXYZDUV2 *v65[2]; // [rsp+D8h] [rbp-30h] BYREF
  float v66; // [rsp+E8h] [rbp-20h]
  float v67; // [rsp+ECh] [rbp-1Ch]
  struct D2D_RECT_F v68; // [rsp+F0h] [rbp-18h] BYREF
  _OWORD v69[4]; // [rsp+108h] [rbp+0h] BYREF

  v3 = 0;
  v4 = 0LL;
  v56[0] = 0;
  v61 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      7LL,
      this[497].m128_u32[2]);
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
          v57 = 0LL;
          v12 = (*(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapRealization **))(v11 + 64))(
                  v10,
                  &v57);
          v56[0] = v12;
          v3 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x110u, 0LL);
LABEL_58:
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v57);
            goto LABEL_35;
          }
          v13 = *(_QWORD *)a2;
          v68 = 0LL;
          (*(void (__fastcall **)(struct CGeometry2D *, struct D2D_RECT_F *))(v13 + 200))(a2, &v68);
          v66 = 0.0;
          v67 = 0.0;
          v58 = 0LL;
          v14 = 0.0;
          *(struct D2D_RECT_F *)v65 = v68;
          v15 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v58, (__m128 *)this[-1].m128_i32, (__int64)v65, 0LL);
          v56[0] = v15;
          v3 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x118u, 0LL);
            goto LABEL_57;
          }
          v16 = CDrawingContext::ApplyRenderStateInternal(this - 1, 0);
          v56[0] = v16;
          v3 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x119u, 0LL);
            goto LABEL_57;
          }
          v19 = CDrawingContext::RecordBitmapRealizationInfo((CDrawingContext *)&this[-1], v57, v17, v18);
          v56[0] = v19;
          v3 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x11Bu, 0LL);
            goto LABEL_57;
          }
          if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
          {
            v64 = 0;
            *(_OWORD *)v65 = 0LL;
            CMatrixStack::Top((CMatrixStack *)&this[17], (struct CMILMatrix *)v63);
            CMILMatrix::Transform2DBoundsHelper<0>((__int64)v63, &v68, (float *)v65);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
              McTemplateU0ffff_EventWriteTransfer(
                (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
                (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
                v47,
                v48,
                (char)v65[1],
                SBYTE4(v65[1]));
          }
          v59 = 0LL;
          v20 = v57;
          v65[0] = *(struct MilVertexXYZDUV2 **)(*(_QWORD *)v57 + 112LL);
          v21 = (*(__int64 (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)v10 + 32LL))(v10);
          if ( v59 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
          LOBYTE(v22) = v21;
          v23 = ((__int64 (__fastcall *)(struct IBitmapRealization *, unsigned __int16 *, __int64 *, __int64))v65[0])(
                  v20,
                  &this[2].m128_u16[4],
                  &v59,
                  v22);
          v56[0] = v23;
          v3 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x12Eu, 0LL);
            goto LABEL_42;
          }
          v65[0] = 0LL;
          v56[0] = 0;
          v62 = 0LL;
          v60[0] = 0;
          MeshData = CGeometry2D::GetMeshData(a2, v65, v56, (const unsigned int **const)&v62, v60);
          v56[0] = MeshData;
          v3 = MeshData;
          if ( MeshData < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, MeshData, 0x139u, 0LL);
            goto LABEL_42;
          }
          v25 = v60[0];
          v26 = v60[0];
          v27 = MIDL_user_allocate(saturated_mul(v60[0], 0x20uLL));
          *(_QWORD *)v60 = v27;
          v28 = v27;
          if ( !v27 )
          {
            v3 = -2147024882;
            v56[0] = -2147024882;
            v46 = -2147024882;
            v55 = 316;
LABEL_41:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, v55, 0LL);
            std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)v60);
LABEL_42:
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v59);
LABEL_57:
            CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v58);
            goto LABEL_58;
          }
          if ( v25 )
          {
            v29 = v62;
            v30 = v27;
            v31 = v65[0];
            do
            {
              v32 = *v29++;
              v32 *= 32LL;
              v33 = *(_OWORD *)((char *)v31 + v32 + 16);
              *v30 = *(_OWORD *)((char *)v31 + v32);
              v30[1] = v33;
              v30 += 2;
              --v26;
            }
            while ( v26 );
          }
          CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(this[1].m128_u64[1] + 16, 4LL, &v61);
          v56[0] = CachedEffectNoRef;
          v3 = CachedEffectNoRef;
          if ( CachedEffectNoRef < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedEffectNoRef, 0x144u, 0LL);
            std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)v60);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v59);
            CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v58);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v57);
            v4 = v61;
            goto LABEL_35;
          }
          v35 = 0.0;
          LODWORD(v36) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v37 = 0.0;
          v69[0] = _xmm;
          LODWORD(v38) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v39 = 0.0;
          v69[1] = _xmm;
          v69[2] = _xmm;
          v69[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
          v64 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _DWORD *, _QWORD))(*(_QWORD *)v57 + 40LL))(
                 v57,
                 v63,
                 0LL) )
          {
            v49 = *(float *)v63;
            v50 = *(float *)&v63[1];
            v51 = *(float *)&v63[4];
            v52 = *(float *)&v63[5];
            v53 = *(float *)&v63[12];
            v54 = *(float *)&v63[13];
            (*(void (__fastcall **)(struct IBitmapRealization *, struct MilVertexXYZDUV2 **))(*(_QWORD *)v57 + 32LL))(
              v57,
              v65);
            v14 = (float)SHIDWORD(v65[0]) * v50;
            v38 = (float)SHIDWORD(v65[0]) * v52;
            v36 = (float)SLODWORD(v65[0]) * v49;
            v35 = (float)SLODWORD(v65[0]) * v51;
            v37 = (float)SLODWORD(v65[0]) * v53;
            v39 = (float)SHIDWORD(v65[0]) * v54;
          }
          v4 = v61;
          v40 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v61 + 72LL))(
                  v61,
                  0LL,
                  0LL,
                  v69,
                  64);
          v56[0] = v40;
          v3 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v40, 0x15Bu, 0LL);
          }
          else
          {
            v65[0] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v14), LODWORD(v36));
            v65[1] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v38), LODWORD(v35));
            v66 = v37;
            v67 = v39;
            v41 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct MilVertexXYZDUV2 **, int))(*(_QWORD *)v4 + 72LL))(
                    v4,
                    1LL,
                    0LL,
                    v65,
                    24);
            v56[0] = v41;
            v3 = v41;
            if ( v41 < 0 )
            {
              v55 = 350;
LABEL_56:
              v46 = v41;
              goto LABEL_41;
            }
            (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 112LL))(
              v4,
              0LL,
              v59,
              1LL);
            v42 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, const wchar_t *, _QWORD, void *, unsigned int))(*(_QWORD *)v4 + 64LL))(
                    v4,
                    L"vertices",
                    0LL,
                    v28,
                    32 * v25);
            v56[0] = v42;
            v3 = v42;
            if ( v42 >= 0 )
            {
              v43 = (const struct ID2DContextOwner *)&this->m128_u16[4];
              v44 = D2D1_COMPOSITE_MODE_MASK_INVERT;
              if ( this[14].m128_i32[2] != 2 )
                v44 = D2D1_COMPOSITE_MODE_SOURCE_OVER;
              if ( this == (__m128 *)16 )
                v43 = 0LL;
              v41 = CD2DContext::FillEffect(
                      (ID2D1DeviceContext **)(this[1].m128_u64[1] + 16),
                      v43,
                      v4,
                      0LL,
                      0LL,
                      D2D1_INTERPOLATION_MODE_LINEAR,
                      v44);
              v56[0] = v41;
              v3 = v41;
              if ( v41 >= 0 )
                goto LABEL_31;
              v55 = 364;
              goto LABEL_56;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x165u, 0LL);
          }
LABEL_31:
          operator delete(v28);
          if ( v59 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
          CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v58);
          if ( v57 )
            (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v57 + 16LL))(v57);
        }
      }
    }
  }
LABEL_35:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      7LL,
      this[497].m128_u32[2]);
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 112LL))(v4, 0LL, 0LL, 1LL);
  TranslateDXGIorD3DErrorInContext(v3, 0LL, v56);
  return v56[0];
}
