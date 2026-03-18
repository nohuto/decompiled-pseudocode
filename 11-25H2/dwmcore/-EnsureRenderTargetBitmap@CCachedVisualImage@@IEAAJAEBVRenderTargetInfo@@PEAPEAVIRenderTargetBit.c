/*
 * XREFs of ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801470F0
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801462F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x180148150 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801BD88C (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801C1E00 (-RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801D7560 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180298470 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180298534 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 * Callees:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18003F8E8 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180144790 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180145C30 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AU_LUID@@XZ @ 0x180147010 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA-AU_LUID@@XZ.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x180147A00 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?IsValid@CD3DDevice@@QEBAJXZ @ 0x180147A20 (-IsValid@CD3DDevice@@QEBAJXZ.c)
 *     ??1?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@QEAA@XZ @ 0x180147A38 (--1-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarget@CCachedVisua.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x180147A70 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18016F2A0 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1801852CC (--$_Emplace_reallocate@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCach.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x180185434 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delet.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1801BDB20 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ??R?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisualImage@@@Z @ 0x1802077BC (--R-$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisua.c)
 *     ??1CCachedTarget@CCachedVisualImage@@QEAA@XZ @ 0x1802077EC (--1CCachedTarget@CCachedVisualImage@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D30 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802D6E70 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ @ 0x1802D6EC0 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmap(
        struct D2D_SIZE_U *this,
        const struct RenderTargetInfo *a2,
        struct IRenderTargetBitmap **a3)
{
  struct D2D_SIZE_U v5; // rax
  CCachedVisualImage *v6; // rcx
  struct D2D_SIZE_U (__fastcall *v7)(CCachedVisualImage *__hidden); // rax
  float v8; // xmm0_4
  UINT32 v9; // edi
  struct D2D_SIZE_U v10; // rax
  __m128 v11; // xmm2
  float width; // xmm1_4
  __m128 v13; // xmm3
  float height; // xmm2_4
  struct D2D_SIZE_U v15; // rbx
  __int64 *i; // r12
  __int64 (__fastcall *v17)(CRenderTargetBitmap *); // rdx
  __int64 v18; // r14
  CD2DBitmap **v19; // rcx
  __int64 (__fastcall *v20)(CRenderTargetBitmap *); // rax
  CD2DBitmap **v21; // rsi
  CGlobalComposition *v22; // rcx
  CD2DBitmap *v23; // rsi
  __int64 (__fastcall *v24)(CD2DBitmap *__hidden); // rax
  int IsValid; // eax
  struct CD3DDevice *(__fastcall *v26)(CD2DResource *); // rax
  CD3DDevice *v27; // rax
  _BYTE *v28; // rcx
  bool (__fastcall *v29)(CDeviceTextureTarget *); // rax
  __int64 v31; // rcx
  struct D2D_SIZE_U (__fastcall *v32)(CRenderTargetBitmap *, CCachedVisualImage::CCachedTarget **); // rax
  __int64 *v33; // rsi
  struct D2D_SIZE_U v34; // rsi
  struct D2D_SIZE_U v35; // r14
  struct RenderTargetInfo *v36; // r12
  char v37; // r15
  __int64 v38; // rdi
  __int64 (__fastcall *v39)(__int64, __int64); // rax
  bool IsHardwareProtected; // cl
  __int64 v41; // rax
  __int64 v42; // rdx
  char v43; // al
  CCachedVisualImage::CCachedTarget *v44; // rbx
  int v45; // eax
  unsigned int v46; // esi
  CMILRefCountImpl *v47; // rbx
  __int64 v49; // rax
  __int64 *v50; // r15
  __int64 *v51; // rsi
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // rdx
  struct CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  struct IRenderTargetBitmap *v56; // rbx
  CMILRefCountImpl *v57; // rcx
  __int64 (__fastcall *v58)(__int64); // rdx
  char IsProtected; // al
  int v60; // eax
  CCachedVisualImage::CCachedTarget *v61; // rdi
  int v62; // eax
  CMILRefCountImpl *v63; // rcx
  CCachedVisualImage::CCachedTarget **v64; // rdx
  CCachedVisualImage::CCachedTarget *v65; // rdi
  __int64 v66; // rcx
  struct IRenderTargetBitmap **v67; // rax
  struct CCachedVisualImage::CCachedTarget **v68; // rcx
  unsigned int v69; // [rsp+28h] [rbp-39h]
  UINT32 v70; // [rsp+3Ch] [rbp-25h]
  struct D2D_RECT_F v71; // [rsp+40h] [rbp-21h] BYREF
  __int64 v72; // [rsp+50h] [rbp-11h] BYREF
  int v73; // [rsp+58h] [rbp-9h]
  int v74; // [rsp+5Ch] [rbp-5h]
  float v75; // [rsp+60h] [rbp-1h]
  bool v76; // [rsp+64h] [rbp+3h]
  __int16 v77; // [rsp+65h] [rbp+4h]
  char v78; // [rsp+67h] [rbp+6h]
  CCachedVisualImage::CCachedTarget *v79; // [rsp+C8h] [rbp+67h] BYREF
  struct RenderTargetInfo *v80; // [rsp+D0h] [rbp+6Fh]
  struct IRenderTargetBitmap **v81; // [rsp+D8h] [rbp+77h]
  struct D2D_SIZE_U v82; // [rsp+E0h] [rbp+7Fh] BYREF

  v81 = a3;
  v80 = a2;
  *a3 = 0LL;
  if ( this[18].width )
  {
    v46 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467263, 0x3CDu, 0LL);
    return v46;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( !BYTE1(this[257].width) )
  {
    v5 = this[10];
    v6 = (CCachedVisualImage *)&this[10];
    v7 = *(struct D2D_SIZE_U (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)&v5 + 32LL);
    if ( v7 == CCachedVisualImage::GetSize )
      CCachedVisualImage::GetSize(v6);
    else
      ((void (__fastcall *)(CCachedVisualImage *, struct D2D_SIZE_U *))v7)(v6, &v82);
    v8 = 0.0;
    v71 = 0LL;
    if ( *(_QWORD *)&this[17] && (v9 = v82.width) != 0 && v82.height )
    {
      if ( BYTE2(this[257].width) )
      {
        v13.m128_i32[0] = 0;
        v71.left = 0.0;
        height = (float)(int)v82.height;
        width = (float)(int)v82.width;
      }
      else
      {
        v10 = this[14];
        if ( v10 )
        {
          v13 = *(__m128 *)(*(_QWORD *)&v10 + 72LL);
          LODWORD(v71.left) = v13.m128_i32[0];
          LODWORD(v8) = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
          LODWORD(width) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
          LODWORD(height) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
        }
        else
        {
          v11 = *(__m128 *)&this[12].width;
          LODWORD(v71.left) = v11.m128_i32[0];
          LODWORD(v8) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
          LODWORD(width) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
          v13.m128_i32[0] = v11.m128_i32[0];
          LODWORD(height) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
        }
      }
      v71.top = v8;
      v71.right = width;
      v71.bottom = height;
      if ( width > v13.m128_f32[0] && height > v8 )
      {
        v15 = this[23];
        v70 = v82.height;
        for ( i = (__int64 *)(*(_QWORD *)&v15 + 8LL); ; ++i )
        {
          while ( 1 )
          {
            v17 = CRenderTargetBitmap::IsValid;
            if ( v15 == *(_QWORD *)&this[24] )
            {
              v34 = this[23];
              v35 = this[24];
              v36 = v80;
              v37 = *((_BYTE *)g_pComposition + 6490);
              while ( v34 != v35 )
              {
                v38 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(CRenderTargetBitmap *)))(**(_QWORD **)(**(_QWORD **)&v34 + 8LL) + 144LL))(
                        *(_QWORD *)(**(_QWORD **)&v34 + 8LL),
                        v17)
                    + 16;
                v39 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 120LL);
                if ( v39 == CDeviceTextureTarget::GetRenderTargetInfo )
                {
                  IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid((_QWORD *)(v38 - 256), &v72);
                  v73 = *(_DWORD *)(v38 - 28);
                  v74 = *(_DWORD *)(v38 + 24);
                  v75 = *(float *)(v38 + 28);
                  IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(v38 - 256));
                  v76 = IsHardwareProtected;
                  v77 = 0;
                  v78 = 0;
                }
                else
                {
                  v39(v38, (__int64)&v72);
                  IsHardwareProtected = v76;
                }
                if ( v72 == *(_QWORD *)v36 && (v73 == -1 || v73 == *((_DWORD *)v36 + 2) || *((_DWORD *)v36 + 2) == -3) )
                {
                  LOBYTE(v17) = v75 != 0.0;
                  if ( (v75 != 0.0) == (*((float *)v36 + 4) != 0.0) && (!IsHardwareProtected || *((_BYTE *)v36 + 20)) )
                  {
                    v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(**(_QWORD **)&v34 + 8LL) + 144LL))(*(_QWORD *)(**(_QWORD **)&v34 + 8LL));
                    v42 = *(_QWORD *)v41;
                    if ( v37 )
                    {
                      v58 = *(__int64 (__fastcall **)(__int64))(v42 + 160);
                      if ( v58 == CDeviceTextureTarget::IsProtected )
                        IsProtected = CDeviceTextureTarget::IsProtected(v41);
                      else
                        IsProtected = v58(v41);
                      if ( !IsProtected )
                      {
LABEL_48:
                        v44 = **(CCachedVisualImage::CCachedTarget ***)&v34;
                        v79 = v44;
                        if ( v44 )
                        {
                          v45 = CCachedVisualImage::CCachedTarget::Update(
                                  (__int64 **)v44,
                                  &v71,
                                  this[21].width,
                                  (char *)v36);
                          v46 = v45;
                          if ( v45 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x414u, 0LL);
                          }
                          else
                          {
                            v47 = (CMILRefCountImpl *)*((_QWORD *)v44 + 1);
                            if ( !v47 )
                            {
LABEL_53:
                              *v81 = v47;
                              return v46;
                            }
                            if ( *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v47 + 8LL) != CMILRefCountImpl::AddReference )
                            {
                              (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v47 + 8LL))(v47);
                              goto LABEL_53;
                            }
                            CMILRefCountImpl::AddReference(v47);
                            *v81 = v47;
                          }
                          return v46;
                        }
LABEL_84:
                        v60 = CCachedVisualImage::CreateCachedTarget((CCachedVisualImage *)this, v82, v36, &v79);
                        v46 = v60;
                        if ( v60 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v60, 0x41Eu, 0LL);
                        }
                        else
                        {
                          v61 = v79;
                          v62 = CCachedVisualImage::CCachedTarget::Update(
                                  (__int64 **)v79,
                                  &v71,
                                  this[21].width,
                                  (char *)v36);
                          v46 = v62;
                          if ( v62 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v62, 0x424u, 0LL);
                            if ( v61 )
                              std::default_delete<CCachedVisualImage::CCachedTarget>::operator()(v66);
                          }
                          else
                          {
                            v47 = (CMILRefCountImpl *)*((_QWORD *)v61 + 1);
                            if ( v47 )
                            {
                              v63 = (CMILRefCountImpl *)*((_QWORD *)v61 + 1);
                              if ( *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v47 + 8LL) == CMILRefCountImpl::AddReference )
                                CMILRefCountImpl::AddReference(v63);
                              else
                                (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v47 + 8LL))(v63);
                            }
                            v64 = (CCachedVisualImage::CCachedTarget **)this[24];
                            if ( v64 == (CCachedVisualImage::CCachedTarget **)this[25] )
                            {
                              std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::_Emplace_reallocate<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
                                &this[23],
                                v64,
                                &v79);
                              v65 = v79;
                              if ( v79 )
                              {
                                CCachedVisualImage::CCachedTarget::~CCachedTarget(v79);
                                operator delete(v65, 0x40uLL);
                              }
                              goto LABEL_53;
                            }
                            v67 = v81;
                            *v64 = v61;
                            *(_QWORD *)&this[24] += 8LL;
                            *v67 = v47;
                          }
                        }
                        return v46;
                      }
                    }
                    else
                    {
                      v17 = *(__int64 (__fastcall **)(CRenderTargetBitmap *))(v42 + 176);
                      if ( (char *)v17 == (char *)CDeviceTextureTarget::IsBlackedOutForReadback )
                        v43 = *(_BYTE *)(v41 + 51);
                      else
                        v43 = v17((CRenderTargetBitmap *)v41);
                      if ( !v43 )
                        goto LABEL_48;
                    }
                  }
                }
                *(_QWORD *)&v34 += 8LL;
              }
              v79 = 0LL;
              goto LABEL_84;
            }
            v18 = **(_QWORD **)&v15;
            v19 = *(CD2DBitmap ***)(**(_QWORD **)&v15 + 8LL);
            v20 = (__int64 (__fastcall *)(CRenderTargetBitmap *))*((_QWORD *)*v19 + 3);
            if ( v20 == CRenderTargetBitmap::IsValid )
            {
              v21 = v19 + 5;
              if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(v19 + 5) )
              {
                v23 = *v21;
                v24 = *(__int64 (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v23 + 24LL);
                if ( v24 == CD2DBitmap::IsValid )
                {
                  if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v23 + 13) )
                  {
                    v26 = *(struct CD3DDevice *(__fastcall **)(CD2DResource *))(*(_QWORD *)v23 + 40LL);
                    v27 = v26 == CD2DResource::GetDevice
                        ? CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)v23 + 5) + 24LL))
                        : v26(v23);
                    IsValid = CD3DDevice::IsValid(v27);
                  }
                  else
                  {
                    IsValid = -2003292404;
                  }
                }
                else if ( (char *)v24 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
                {
                  IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v23);
                }
                else
                {
                  IsValid = (char *)v24 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid
                          ? CD2DBitmap::IsValid(v23)
                          : v24(v23);
                }
              }
              else
              {
                IsValid = -2003292412;
              }
            }
            else
            {
              IsValid = ((__int64 (__fastcall *)(CD2DBitmap **, __int64 (__fastcall *)(CRenderTargetBitmap *)))v20)(
                          v19,
                          CRenderTargetBitmap::IsValid);
            }
            if ( IsValid >= 0 )
            {
              v28 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 8) + 144LL))(*(_QWORD *)(v18 + 8));
              v29 = *(bool (__fastcall **)(CDeviceTextureTarget *))(*(_QWORD *)v28 + 176LL);
              if ( !(v29 == CDeviceTextureTarget::IsBlackedOutForReadback
                   ? v28[51]
                   : ((__int64 (__fastcall *)(_BYTE *))v29)(v28)) )
                break;
              v22 = g_pComposition;
              v49 = 0LL;
              if ( g_pComposition )
                v49 = *((_QWORD *)g_pComposition + 111);
              if ( (unsigned __int64)(v49 - *(_QWORD *)(v18 + 48)) < 5 )
                break;
            }
LABEL_62:
            v50 = (__int64 *)this[24];
            v51 = i;
            if ( i != v50 )
            {
              v52 = *(_QWORD *)&v15 - (_QWORD)i;
              do
              {
                v53 = *v51;
                *v51 = 0LL;
                v54 = *(__int64 *)((char *)v51 + v52);
                *(__int64 *)((char *)v51 + v52) = v53;
                if ( v54 )
                  std::default_delete<CCachedVisualImage::CCachedTarget>::operator()(v22);
                ++v51;
              }
              while ( v51 != v50 );
            }
            std::unique_ptr<CCachedVisualImage::CCachedTarget>::~unique_ptr<CCachedVisualImage::CCachedTarget>(*(_QWORD *)&this[24] - 8LL);
            *(_QWORD *)&this[24] -= 8LL;
          }
          v31 = *(_QWORD *)(v18 + 8) + 8LL;
          v32 = *(struct D2D_SIZE_U (__fastcall **)(CRenderTargetBitmap *, CCachedVisualImage::CCachedTarget **))(*(_QWORD *)v31 + 32LL);
          if ( (char *)v32 == (char *)CRenderTargetBitmap::GetSize )
          {
            v33 = (__int64 *)(*(_QWORD *)(v18 + 8) + 40LL);
            if ( !wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(v33) )
            {
              v79 = 0LL;
              goto LABEL_32;
            }
            v31 = *v33;
            v32 = *(struct D2D_SIZE_U (__fastcall **)(CRenderTargetBitmap *, CCachedVisualImage::CCachedTarget **))(*(_QWORD *)*v33 + 88LL);
            if ( (char *)v32 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
            {
              IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v31, &v79);
              goto LABEL_32;
            }
          }
          v32((CRenderTargetBitmap *)v31, &v79);
LABEL_32:
          if ( v79 != (CCachedVisualImage::CCachedTarget *)__PAIR64__(v70, v9) )
            goto LABEL_62;
          *(_QWORD *)&v15 += 8LL;
        }
      }
      v69 = 1034;
    }
    else
    {
      if ( *(_QWORD *)&this[23] != *(_QWORD *)&this[24] )
      {
        std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>();
        this[24] = this[23];
      }
      v69 = 1010;
    }
LABEL_57:
    v46 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, v69, 0LL);
    return v46;
  }
  CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)this, this[256]);
  ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget((CCachedVisualImage *)this, a2);
  if ( !ExistingCachedTarget )
  {
    v68 = (struct CCachedVisualImage::CCachedTarget **)this[23];
    if ( !((__int64)(*(_QWORD *)&this[24] - (_QWORD)v68) >> 3) || (ExistingCachedTarget = *v68) == 0LL )
    {
      v69 = 997;
      goto LABEL_57;
    }
  }
  v56 = (struct IRenderTargetBitmap *)*((_QWORD *)ExistingCachedTarget + 1);
  if ( v56 )
  {
    v57 = (CMILRefCountImpl *)*((_QWORD *)ExistingCachedTarget + 1);
    if ( *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v56 + 8LL) == CMILRefCountImpl::AddReference )
    {
      CMILRefCountImpl::AddReference(v57);
      v46 = 0;
      *v81 = v56;
      return v46;
    }
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v56 + 8LL))(v57);
  }
  v46 = 0;
  *v81 = v56;
  return v46;
}
