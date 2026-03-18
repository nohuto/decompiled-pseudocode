/*
 * XREFs of ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18010B4B0
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010A6B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x18010C510 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801AE0BC (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801B1CF0 (-RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C8880 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18028D000 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18028D0C4 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 * Callees:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000B988 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18006108C (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18006F4D0 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180108B50 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180109FF0 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AU_LUID@@XZ @ 0x18010B3D0 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA-AU_LUID@@XZ.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x18010BDC0 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?IsValid@CD3DDevice@@QEBAJXZ @ 0x18010BDE0 (-IsValid@CD3DDevice@@QEBAJXZ.c)
 *     ??1?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@QEAA@XZ @ 0x18010BDF8 (--1-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarget@CCachedVisua.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x18010BE30 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18018DEBC (--$_Emplace_reallocate@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCach.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x18018E024 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delet.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1801AE350 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ??R?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisualImage@@@Z @ 0x1801FB14C (--R-$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisua.c)
 *     ??1CCachedTarget@CCachedVisualImage@@QEAA@XZ @ 0x1801FB17C (--1CCachedTarget@CCachedVisualImage@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAC0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802CDC00 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ @ 0x1802CDC50 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmap(
        struct D2D_SIZE_U *this,
        const struct RenderTargetInfo *a2,
        struct IRenderTargetBitmap **a3)
{
  double v3; // xmm2_8
  struct D2D_SIZE_U v6; // rax
  __m128 *v7; // rcx
  struct D2D_SIZE_U (__fastcall *v8)(__m128 *, __int64, double); // rax
  float v9; // xmm0_4
  UINT32 v10; // edi
  struct D2D_SIZE_U v11; // rax
  __m128 v12; // xmm2
  float width; // xmm1_4
  __m128 v14; // xmm3
  float height; // xmm2_4
  struct D2D_SIZE_U v16; // rbx
  __int64 *i; // r12
  __int64 (__fastcall *v18)(CRenderTargetBitmap *); // rdx
  __int64 v19; // r14
  CD2DBitmap **v20; // rcx
  __int64 (__fastcall *v21)(CRenderTargetBitmap *); // rax
  CD2DBitmap **v22; // rsi
  CGlobalComposition *v23; // rcx
  CD2DBitmap *v24; // rsi
  __int64 (__fastcall *v25)(CD2DBitmap *__hidden); // rax
  int IsValid; // eax
  struct CD3DDevice *(__fastcall *v27)(CD2DResource *__hidden); // rax
  CD3DDevice *v28; // rax
  _BYTE *v29; // rcx
  bool (__fastcall *v30)(CDeviceTextureTarget *); // rax
  __int64 v32; // rcx
  struct D2D_SIZE_U (__fastcall *v33)(CRenderTargetBitmap *, CCachedVisualImage::CCachedTarget **); // rax
  __int64 *v34; // rsi
  struct D2D_SIZE_U v35; // rsi
  struct D2D_SIZE_U v36; // r14
  struct RenderTargetInfo *v37; // r12
  char v38; // r15
  __int64 v39; // rdi
  __int64 (__fastcall *v40)(__int64, __int64); // rax
  bool IsHardwareProtected; // cl
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // al
  CCachedVisualImage::CCachedTarget *v45; // rbx
  int v46; // eax
  unsigned int v47; // esi
  CMILRefCountImpl *v48; // rbx
  __int64 v50; // rax
  __int64 *v51; // r15
  __int64 *v52; // rsi
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // rdx
  struct CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  struct IRenderTargetBitmap *v57; // rbx
  CMILRefCountImpl *v58; // rcx
  __int64 (__fastcall *v59)(__int64); // rdx
  char IsProtected; // al
  int v61; // eax
  CCachedVisualImage::CCachedTarget *v62; // rdi
  int v63; // eax
  CMILRefCountImpl *v64; // rcx
  CCachedVisualImage::CCachedTarget **v65; // rdx
  CCachedVisualImage::CCachedTarget *v66; // rdi
  __int64 v67; // rcx
  struct IRenderTargetBitmap **v68; // rax
  struct CCachedVisualImage::CCachedTarget **v69; // rcx
  unsigned int v70; // [rsp+28h] [rbp-39h]
  UINT32 v71; // [rsp+3Ch] [rbp-25h]
  struct D2D_RECT_F v72; // [rsp+40h] [rbp-21h] BYREF
  __int64 v73; // [rsp+50h] [rbp-11h] BYREF
  int v74; // [rsp+58h] [rbp-9h]
  int v75; // [rsp+5Ch] [rbp-5h]
  float v76; // [rsp+60h] [rbp-1h]
  bool v77; // [rsp+64h] [rbp+3h]
  __int16 v78; // [rsp+65h] [rbp+4h]
  char v79; // [rsp+67h] [rbp+6h]
  CCachedVisualImage::CCachedTarget *v80; // [rsp+C8h] [rbp+67h] BYREF
  struct RenderTargetInfo *v81; // [rsp+D0h] [rbp+6Fh]
  struct IRenderTargetBitmap **v82; // [rsp+D8h] [rbp+77h]
  struct D2D_SIZE_U v83; // [rsp+E0h] [rbp+7Fh] BYREF

  v82 = a3;
  v81 = a2;
  *a3 = 0LL;
  if ( this[18].width )
  {
    v47 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467263, 0x3CDu, 0LL);
    return v47;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( !BYTE1(this[257].width) )
  {
    v6 = this[10];
    v7 = (__m128 *)&this[10];
    v8 = *(struct D2D_SIZE_U (__fastcall **)(__m128 *, __int64, double))(*(_QWORD *)&v6 + 32LL);
    if ( v8 == CCachedVisualImage::GetSize )
      CCachedVisualImage::GetSize(v7, (__int64)&v83, v3);
    else
      ((void (__fastcall *)(__m128 *, struct D2D_SIZE_U *))v8)(v7, &v83);
    v9 = 0.0;
    v72 = 0LL;
    if ( *(_QWORD *)&this[17] && (v10 = v83.width) != 0 && v83.height )
    {
      if ( BYTE2(this[257].width) )
      {
        v14.m128_i32[0] = 0;
        v72.left = 0.0;
        height = (float)(int)v83.height;
        width = (float)(int)v83.width;
      }
      else
      {
        v11 = this[14];
        if ( v11 )
        {
          v14 = *(__m128 *)(*(_QWORD *)&v11 + 72LL);
          LODWORD(v72.left) = v14.m128_i32[0];
          LODWORD(v9) = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
          LODWORD(width) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
          LODWORD(height) = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
        }
        else
        {
          v12 = *(__m128 *)&this[12].width;
          LODWORD(v72.left) = v12.m128_i32[0];
          LODWORD(v9) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
          LODWORD(width) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
          v14.m128_i32[0] = v12.m128_i32[0];
          LODWORD(height) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
        }
      }
      v72.top = v9;
      v72.right = width;
      v72.bottom = height;
      if ( width > v14.m128_f32[0] && height > v9 )
      {
        v16 = this[23];
        v71 = v83.height;
        for ( i = (__int64 *)(*(_QWORD *)&v16 + 8LL); ; ++i )
        {
          while ( 1 )
          {
            v18 = CRenderTargetBitmap::IsValid;
            if ( v16 == *(_QWORD *)&this[24] )
            {
              v35 = this[23];
              v36 = this[24];
              v37 = v81;
              v38 = *((_BYTE *)g_pComposition + 6466);
              while ( v35 != v36 )
              {
                v39 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(CRenderTargetBitmap *)))(**(_QWORD **)(**(_QWORD **)&v35 + 8LL) + 144LL))(
                        *(_QWORD *)(**(_QWORD **)&v35 + 8LL),
                        v18)
                    + 16;
                v40 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 120LL);
                if ( v40 == CDeviceTextureTarget::GetRenderTargetInfo )
                {
                  IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid((_QWORD *)(v39 - 256), &v73);
                  v74 = *(_DWORD *)(v39 - 28);
                  v75 = *(_DWORD *)(v39 + 24);
                  v76 = *(float *)(v39 + 28);
                  IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(v39 - 256));
                  v77 = IsHardwareProtected;
                  v78 = 0;
                  v79 = 0;
                }
                else
                {
                  v40(v39, (__int64)&v73);
                  IsHardwareProtected = v77;
                }
                if ( v73 == *(_QWORD *)v37 && (v74 == -1 || v74 == *((_DWORD *)v37 + 2) || *((_DWORD *)v37 + 2) == -3) )
                {
                  LOBYTE(v18) = v76 != 0.0;
                  if ( (v76 != 0.0) == (*((float *)v37 + 4) != 0.0) && (!IsHardwareProtected || *((_BYTE *)v37 + 20)) )
                  {
                    v42 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(**(_QWORD **)&v35 + 8LL) + 144LL))(*(_QWORD *)(**(_QWORD **)&v35 + 8LL));
                    v43 = *(_QWORD *)v42;
                    if ( v38 )
                    {
                      v59 = *(__int64 (__fastcall **)(__int64))(v43 + 160);
                      if ( v59 == CDeviceTextureTarget::IsProtected )
                        IsProtected = CDeviceTextureTarget::IsProtected(v42);
                      else
                        IsProtected = v59(v42);
                      if ( !IsProtected )
                      {
LABEL_48:
                        v45 = **(CCachedVisualImage::CCachedTarget ***)&v35;
                        v80 = v45;
                        if ( v45 )
                        {
                          v46 = CCachedVisualImage::CCachedTarget::Update(
                                  (__int64 **)v45,
                                  &v72,
                                  this[21].width,
                                  (char *)v37);
                          v47 = v46;
                          if ( v46 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0x414u, 0LL);
                          }
                          else
                          {
                            v48 = (CMILRefCountImpl *)*((_QWORD *)v45 + 1);
                            if ( !v48 )
                            {
LABEL_53:
                              *v82 = v48;
                              return v47;
                            }
                            if ( *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v48 + 8LL) != CMILRefCountImpl::AddReference )
                            {
                              (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v48 + 8LL))(v48);
                              goto LABEL_53;
                            }
                            CMILRefCountImpl::AddReference(v48);
                            *v82 = v48;
                          }
                          return v47;
                        }
LABEL_84:
                        v61 = CCachedVisualImage::CreateCachedTarget((CCachedVisualImage *)this, v83, v37, &v80);
                        v47 = v61;
                        if ( v61 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v61, 0x41Eu, 0LL);
                        }
                        else
                        {
                          v62 = v80;
                          v63 = CCachedVisualImage::CCachedTarget::Update(
                                  (__int64 **)v80,
                                  &v72,
                                  this[21].width,
                                  (char *)v37);
                          v47 = v63;
                          if ( v63 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v63, 0x424u, 0LL);
                            if ( v62 )
                              std::default_delete<CCachedVisualImage::CCachedTarget>::operator()(v67);
                          }
                          else
                          {
                            v48 = (CMILRefCountImpl *)*((_QWORD *)v62 + 1);
                            if ( v48 )
                            {
                              v64 = (CMILRefCountImpl *)*((_QWORD *)v62 + 1);
                              if ( *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v48 + 8LL) == CMILRefCountImpl::AddReference )
                                CMILRefCountImpl::AddReference(v64);
                              else
                                (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v48 + 8LL))(v64);
                            }
                            v65 = (CCachedVisualImage::CCachedTarget **)this[24];
                            if ( v65 == (CCachedVisualImage::CCachedTarget **)this[25] )
                            {
                              std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::_Emplace_reallocate<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
                                &this[23],
                                v65,
                                &v80);
                              v66 = v80;
                              if ( v80 )
                              {
                                CCachedVisualImage::CCachedTarget::~CCachedTarget(v80);
                                operator delete(v66, 0x40uLL);
                              }
                              goto LABEL_53;
                            }
                            v68 = v82;
                            *v65 = v62;
                            *(_QWORD *)&this[24] += 8LL;
                            *v68 = v48;
                          }
                        }
                        return v47;
                      }
                    }
                    else
                    {
                      v18 = *(__int64 (__fastcall **)(CRenderTargetBitmap *))(v43 + 176);
                      if ( (char *)v18 == (char *)CDeviceTextureTarget::IsBlackedOutForReadback )
                        v44 = *(_BYTE *)(v42 + 51);
                      else
                        v44 = v18((CRenderTargetBitmap *)v42);
                      if ( !v44 )
                        goto LABEL_48;
                    }
                  }
                }
                *(_QWORD *)&v35 += 8LL;
              }
              v80 = 0LL;
              goto LABEL_84;
            }
            v19 = **(_QWORD **)&v16;
            v20 = *(CD2DBitmap ***)(**(_QWORD **)&v16 + 8LL);
            v21 = (__int64 (__fastcall *)(CRenderTargetBitmap *))*((_QWORD *)*v20 + 3);
            if ( v21 == CRenderTargetBitmap::IsValid )
            {
              v22 = v20 + 5;
              if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(v20 + 5) )
              {
                v24 = *v22;
                v25 = *(__int64 (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v24 + 24LL);
                if ( v25 == CD2DBitmap::IsValid )
                {
                  if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v24 + 13) )
                  {
                    v27 = *(struct CD3DDevice *(__fastcall **)(CD2DResource *__hidden))(*(_QWORD *)v24 + 40LL);
                    v28 = v27 == CD2DResource::GetDevice
                        ? CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)v24 + 5) + 24LL))
                        : v27(v24);
                    IsValid = CD3DDevice::IsValid(v28);
                  }
                  else
                  {
                    IsValid = -2003292404;
                  }
                }
                else if ( (char *)v25 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
                {
                  IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v24);
                }
                else
                {
                  IsValid = (char *)v25 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid
                          ? CD2DBitmap::IsValid(v24)
                          : v25(v24);
                }
              }
              else
              {
                IsValid = -2003292412;
              }
            }
            else
            {
              IsValid = ((__int64 (__fastcall *)(CD2DBitmap **, __int64 (__fastcall *)(CRenderTargetBitmap *)))v21)(
                          v20,
                          CRenderTargetBitmap::IsValid);
            }
            if ( IsValid >= 0 )
            {
              v29 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 8) + 144LL))(*(_QWORD *)(v19 + 8));
              v30 = *(bool (__fastcall **)(CDeviceTextureTarget *))(*(_QWORD *)v29 + 176LL);
              if ( !(v30 == CDeviceTextureTarget::IsBlackedOutForReadback
                   ? v29[51]
                   : ((__int64 (__fastcall *)(_BYTE *))v30)(v29)) )
                break;
              v23 = g_pComposition;
              v50 = 0LL;
              if ( g_pComposition )
                v50 = *((_QWORD *)g_pComposition + 111);
              if ( (unsigned __int64)(v50 - *(_QWORD *)(v19 + 48)) < 5 )
                break;
            }
LABEL_62:
            v51 = (__int64 *)this[24];
            v52 = i;
            if ( i != v51 )
            {
              v53 = *(_QWORD *)&v16 - (_QWORD)i;
              do
              {
                v54 = *v52;
                *v52 = 0LL;
                v55 = *(__int64 *)((char *)v52 + v53);
                *(__int64 *)((char *)v52 + v53) = v54;
                if ( v55 )
                  std::default_delete<CCachedVisualImage::CCachedTarget>::operator()(v23);
                ++v52;
              }
              while ( v52 != v51 );
            }
            std::unique_ptr<CCachedVisualImage::CCachedTarget>::~unique_ptr<CCachedVisualImage::CCachedTarget>(*(_QWORD *)&this[24] - 8LL);
            *(_QWORD *)&this[24] -= 8LL;
          }
          v32 = *(_QWORD *)(v19 + 8) + 8LL;
          v33 = *(struct D2D_SIZE_U (__fastcall **)(CRenderTargetBitmap *, CCachedVisualImage::CCachedTarget **))(*(_QWORD *)v32 + 32LL);
          if ( (char *)v33 == (char *)CRenderTargetBitmap::GetSize )
          {
            v34 = (__int64 *)(*(_QWORD *)(v19 + 8) + 40LL);
            if ( !wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(v34) )
            {
              v80 = 0LL;
              goto LABEL_32;
            }
            v32 = *v34;
            v33 = *(struct D2D_SIZE_U (__fastcall **)(CRenderTargetBitmap *, CCachedVisualImage::CCachedTarget **))(*(_QWORD *)*v34 + 88LL);
            if ( (char *)v33 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
            {
              IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v32, &v80);
              goto LABEL_32;
            }
          }
          v33((CRenderTargetBitmap *)v32, &v80);
LABEL_32:
          if ( v80 != (CCachedVisualImage::CCachedTarget *)__PAIR64__(v71, v10) )
            goto LABEL_62;
          *(_QWORD *)&v16 += 8LL;
        }
      }
      v70 = 1034;
    }
    else
    {
      if ( *(_QWORD *)&this[23] != *(_QWORD *)&this[24] )
      {
        std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>();
        this[24] = this[23];
      }
      v70 = 1010;
    }
LABEL_57:
    v47 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, v70, 0LL);
    return v47;
  }
  CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)this, this[256]);
  ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget((CCachedVisualImage *)this, a2);
  if ( !ExistingCachedTarget )
  {
    v69 = (struct CCachedVisualImage::CCachedTarget **)this[23];
    if ( !((__int64)(*(_QWORD *)&this[24] - (_QWORD)v69) >> 3) || (ExistingCachedTarget = *v69) == 0LL )
    {
      v70 = 997;
      goto LABEL_57;
    }
  }
  v57 = (struct IRenderTargetBitmap *)*((_QWORD *)ExistingCachedTarget + 1);
  if ( v57 )
  {
    v58 = (CMILRefCountImpl *)*((_QWORD *)ExistingCachedTarget + 1);
    if ( *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v57 + 8LL) == CMILRefCountImpl::AddReference )
    {
      CMILRefCountImpl::AddReference(v58);
      v47 = 0;
      *v82 = v57;
      return v47;
    }
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v57 + 8LL))(v58);
  }
  v47 = 0;
  *v82 = v57;
  return v47;
}
