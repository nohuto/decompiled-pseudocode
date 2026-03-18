/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801462F0
 * Callers:
 *     ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x180144430 (-SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180144C20 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180063B40 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801470F0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180147B40 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180147C20 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x1801483E8 (-EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ.c)
 *     ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x18014A240 (-GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x18014A4E0 (-TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18014ABE0 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1801903B4 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     ?GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801B5730 (-GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18025C7C0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18025C828 (_Init_thread_header.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802E10C0 (-GetDeviceTexture@CDxHandleBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextu.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802E1100 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  int v3; // r12d
  int *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  CCommonRenderingEffect *v8; // r11
  __int64 v9; // rax
  int *v10; // rax
  float v11; // xmm1_4
  int v12; // r15d
  __int64 i; // rbx
  __int64 v14; // r14
  CCachedImageProducer *v15; // rbx
  const struct RenderTargetInfo *v16; // rdi
  int (*v17)(CCachedVisualImage *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int v18; // eax
  unsigned int v19; // ebx
  CRenderTargetBitmap *v20; // rcx
  __int64 (__fastcall *v21)(CRenderTargetBitmap *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int v22; // eax
  struct IDeviceTexture *v23; // rbx
  struct ID3D11ShaderResourceView *(__fastcall *v24)(CD2DBitmap *__hidden); // rax
  struct ID3D11ShaderResourceView *ShaderResourceView; // rax
  __int64 v26; // rax
  int v27; // ebx
  char *v28; // r8
  int *v29; // rsi
  _DWORD *v30; // rax
  __int64 v31; // rax
  unsigned int v32; // r14d
  unsigned int ColorChannelDepth; // eax
  __int64 v34; // r10
  unsigned int v35; // esi
  _BYTE *v36; // rdi
  bool (__fastcall *v37)(CCompositionSurfaceBitmap *__hidden); // rax
  __int64 (__fastcall *v38)(__int64, __int64); // rax
  struct IBitmapRealization *RenderingRealization; // rax
  _DWORD *(__fastcall *v40)(__int64, _DWORD *); // r8
  int v41; // eax
  __int64 *v42; // rax
  bool v43; // r8
  int v44; // edx
  int v45; // r9d
  int v46; // ecx
  unsigned int v47; // eax
  __m128i v48; // xmm1
  int CommonRenderingShaderInternalNoRef; // eax
  unsigned int v50; // edi
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // r8
  unsigned int v54; // esi
  void (__fastcall *v55)(__int64, __int64, _QWORD, _QWORD); // r14
  __int64 j; // rcx
  __int64 v57; // rax
  __int64 v58; // rbx
  _BYTE *v60; // rbx
  __int64 (__fastcall *v61)(__int64, __int64); // rax
  struct IBitmapRealization *v62; // rax
  _DWORD *(__fastcall *v63)(__int64, _DWORD *); // r8
  int v64; // eax
  __int64 *v65; // rax
  char v66; // al
  __int64 v67; // rcx
  __int64 *v68; // rdx
  int DeviceTexture; // eax
  __int64 v70; // rcx
  __int64 *v71; // rdx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // r9
  __int64 *v79; // rcx
  __int64 v80; // rax
  int v81; // edi
  bool v82; // zf
  bool v83; // al
  bool v84; // cf
  unsigned int v85; // eax
  unsigned int v86; // [rsp+30h] [rbp-D0h] BYREF
  struct IDeviceTexture *v87; // [rsp+38h] [rbp-C8h] BYREF
  CCommonRenderingEffect *v88; // [rsp+40h] [rbp-C0h]
  int *v89; // [rsp+48h] [rbp-B8h]
  __int16 v90; // [rsp+50h] [rbp-B0h]
  __int16 v91; // [rsp+60h] [rbp-A0h]
  __int16 v92; // [rsp+70h] [rbp-90h]
  __int64 v93; // [rsp+80h] [rbp-80h] BYREF
  __m128i v94; // [rsp+88h] [rbp-78h]
  int v95; // [rsp+98h] [rbp-68h]
  int v96; // [rsp+9Ch] [rbp-64h]
  struct IRenderTargetBitmap *v97; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v98; // [rsp+A8h] [rbp-58h]
  struct ID3D11PixelShader *v99; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v100; // [rsp+B8h] [rbp-48h]
  unsigned int *v101; // [rsp+C0h] [rbp-40h]
  __m128i v102; // [rsp+C8h] [rbp-38h]
  __int128 v103; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v104; // [rsp+E8h] [rbp-18h] BYREF
  DXGI_FORMAT v105[4]; // [rsp+F8h] [rbp-8h]
  __int64 v106; // [rsp+108h] [rbp+8h] BYREF
  int v107; // [rsp+110h] [rbp+10h]
  __int64 v108; // [rsp+118h] [rbp+18h] BYREF
  int v109; // [rsp+120h] [rbp+20h]
  __int64 v110; // [rsp+128h] [rbp+28h] BYREF
  int v111; // [rsp+130h] [rbp+30h]
  __int64 v112; // [rsp+138h] [rbp+38h] BYREF
  int v113; // [rsp+140h] [rbp+40h]
  _DWORD v114[3]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v115; // [rsp+154h] [rbp+54h]
  int v116; // [rsp+15Ch] [rbp+5Ch]
  int v117; // [rsp+160h] [rbp+60h]
  __int128 v118; // [rsp+164h] [rbp+64h]
  int v119; // [rsp+174h] [rbp+74h]
  int v120; // [rsp+178h] [rbp+78h]
  char v121[16]; // [rsp+180h] [rbp+80h] BYREF
  char v122; // [rsp+190h] [rbp+90h] BYREF
  char v123; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v3 = 0;
  v4 = (int *)*((_QWORD *)a2 + 1);
  v5 = *((_QWORD *)a2 + 3);
  v6 = *((_QWORD *)a2 + 14);
  v100 = *((_QWORD *)a2 + 2);
  v8 = this;
  v101 = a3;
  v93 = 0LL;
  v94.m128i_i64[0] = (__int64)"NoOp";
  v96 = 0;
  v9 = *((_QWORD *)a2 + 5);
  v88 = this;
  v89 = v4;
  v99 = 0LL;
  v94.m128i_i32[2] = 0;
  v103 = 0LL;
  v104 = 0LL;
  if ( v9 )
  {
    v10 = (int *)(v9 + 16);
  }
  else
  {
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                       + (unsigned int)tls_index)
                                                                     + 4LL) )
    {
      Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
      {
        `CLightsMask::NoLights'::`2'::noLights = -1;
        Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      }
      v8 = v88;
    }
    v10 = &`CLightsMask::NoLights'::`2'::noLights;
  }
  v11 = *(float *)(v6 + 16);
  v95 = *v10;
  LOBYTE(v96) = 1;
  BYTE1(v96) = v11 != 0.0;
  v12 = v93;
  if ( *(_BYTE *)(v5 + 256) )
  {
    v12 = v93 | 0x10;
    LODWORD(v93) = v93 | 0x10;
  }
  if ( *((_DWORD *)a2 + 14) == 22 )
  {
    v12 |= 8u;
    LODWORD(v93) = v12;
  }
  for ( i = 0LL; ; i = v86 + 1 )
  {
    v86 = i;
    if ( (unsigned int)i >= 2 )
    {
      v86 = 0x80000000;
      CommonRenderingShaderInternalNoRef = CCommonRenderingShaderCache::GetCommonRenderingShaderInternalNoRef(
                                             (CCommonRenderingShaderCache *)CCachedImageProducer::GetDeviceTexture,
                                             (struct CD3DDevice *)v4,
                                             (const struct CommonRenderingShaderDesc *)&v93,
                                             &v86,
                                             &v99);
      v50 = CommonRenderingShaderInternalNoRef;
      if ( CommonRenderingShaderInternalNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CommonRenderingShaderInternalNoRef, 0x132u, 0LL);
      }
      else
      {
        v51 = v100;
        v52 = 0LL;
        v53 = v4[382];
        v54 = v86;
        v55 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v100 + 88LL);
        for ( j = 0LL; j < v53; ++j )
        {
          if ( *(_DWORD *)(*((_QWORD *)v89 + 189) + 4 * j) == v86 )
          {
            if ( (_DWORD)v52 != -1 )
            {
              v57 = *((_QWORD *)v89 + 190);
              v58 = *(_QWORD *)(v57 + 8LL * (int)v52);
              if ( v58 )
              {
                (*(void (__fastcall **)(_QWORD, __int64, __int64, int *))(*(_QWORD *)v58 + 8LL))(
                  *(_QWORD *)(v57 + 8LL * (int)v52),
                  v52,
                  v53,
                  v89);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
                goto LABEL_65;
              }
            }
            break;
          }
          v52 = (unsigned int)(v52 + 1);
        }
        v58 = 0LL;
LABEL_65:
        v55(v51, v58, 0LL, 0LL);
        (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v51 + 72LL))(
          v51,
          v99,
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v51 + 64LL))(v51, 0LL, 2LL, &v103);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v51 + 80LL))(v51, 0LL, 2LL, &v104);
        *v101 = v54;
      }
      return v50;
    }
    v14 = (unsigned int)i;
    v98 = 3 * i;
    v15 = (CCachedImageProducer *)*((_QWORD *)v8 + 3 * i + 3);
    if ( v15 )
      break;
LABEL_53:
    ;
  }
  v16 = (const struct RenderTargetInfo *)*((_QWORD *)a2 + 14);
  v87 = 0LL;
  v17 = *(int (**)(CCachedVisualImage *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v15 + 96LL);
  if ( v17 != CCachedVisualImage::GetDeviceTexture )
  {
    if ( v17 == CCachedImageProducer::GetDeviceTexture )
    {
      DeviceTexture = CCachedImageProducer::GetDeviceTexture(v15, v16, &v87);
    }
    else
    {
      if ( (char *)v17 == (char *)CDxHandleBitmapRealization::GetDeviceTexture )
      {
        v19 = CDxHandleBitmapRealization::GetDeviceTexture(v15, v16, &v87);
        goto LABEL_18;
      }
      DeviceTexture = ((__int64 (__fastcall *)(CCachedImageProducer *, const struct RenderTargetInfo *, struct IDeviceTexture **))v17)(
                        v15,
                        v16,
                        &v87);
    }
    v19 = DeviceTexture;
    goto LABEL_18;
  }
  v97 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v97);
  v18 = CCachedVisualImage::EnsureRenderTargetBitmap((CCachedImageProducer *)((char *)v15 - 80), v16, &v97);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x193u, 0LL);
  }
  else
  {
    v20 = (struct IRenderTargetBitmap *)((char *)v97 + 8);
    v21 = *(__int64 (__fastcall **)(CRenderTargetBitmap *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **))(*((_QWORD *)v97 + 1) + 96LL);
    if ( v21 == CRenderTargetBitmap::GetDeviceTexture )
      v22 = CRenderTargetBitmap::GetDeviceTexture(v20, v16, &v87);
    else
      v22 = v21(v20, v16, &v87);
    v19 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x196u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v97);
LABEL_18:
  if ( (v19 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
      (const char *)v19);
    if ( v87 )
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v87 + 16LL))(v87);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xF3u, 0LL);
    return v19;
  }
  v23 = v87;
  v24 = *(struct ID3D11ShaderResourceView *(__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v87 + 128LL);
  if ( v24 == CD2DBitmap::GetShaderResourceView )
  {
    CD2DBitmap::EnsureShaderResourceView((struct IDeviceTexture *)((char *)v87 - 72));
    ShaderResourceView = (struct ID3D11ShaderResourceView *)*((_QWORD *)v23 + 5);
LABEL_21:
    v23 = v87;
    goto LABEL_22;
  }
  if ( v24 != CDeviceTextureTarget::GetShaderResourceView )
  {
    ShaderResourceView = v24(v87);
    goto LABEL_21;
  }
  if ( *((_BYTE *)v87 + 218) || *((_BYTE *)v87 + 217) )
  {
    ShaderResourceView = CD2DBitmap::GetShaderResourceView(v87);
    goto LABEL_21;
  }
  ShaderResourceView = 0LL;
LABEL_22:
  *((_QWORD *)&v103 + v14) = ShaderResourceView;
  v26 = (*(__int64 (__fastcall **)(__int64, char *))(*((_QWORD *)v23 + 1) + 24LL))((__int64)v23 + 8, v121);
  v27 = *(_DWORD *)(v26 + 8);
  *(_QWORD *)v105 = *(_QWORD *)v26;
  if ( v87 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v87 + 16LL))(v87);
  v8 = v88;
  v28 = (char *)v88 + 2 * v14;
  v90 = *(_WORD *)&v28[v14 + 64];
  v29 = &v4[32 * (unsigned __int8)v90 + 8 * HIBYTE(v90) + 2 * (unsigned __int8)v28[v14 + 66]];
  if ( *((_QWORD *)v29 + 221) )
    goto LABEL_25;
  v91 = *(_WORD *)&v28[v14 + 64];
  if ( HIBYTE(v91) && v28[v14 + 66] )
    v72 = 37120;
  else
    v72 = 37632;
  if ( v89[154] >= v72 )
  {
    v92 = *(_WORD *)&v28[v14 + 64];
    if ( (unsigned __int8)v92 == 2 || (_BYTE)v92 )
      v73 = 21;
    else
      v73 = 0;
    v114[0] = v73;
    v74 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v92));
    v76 = *(unsigned __int8 *)(v14 + v75 + 66);
    v114[1] = v74;
    v77 = ExtendMode::ToD3D11TextureAddressMode(v76);
    v79 = *(__int64 **)(v78 + 552);
    v114[2] = v77;
    v115 = 3LL;
    v116 = 1;
    v117 = 8;
    v118 = 0LL;
    v119 = 0;
    v120 = 2139095039;
    v80 = *v79;
    *((_QWORD *)v29 + 221) = 0LL;
    v81 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, int *))(v80 + 184))(v79, v114, v29 + 442);
    if ( v81 < 0 )
    {
      v85 = 3129;
      goto LABEL_193;
    }
    v8 = v88;
LABEL_25:
    v82 = v86 == 0;
    *(_QWORD *)&v105[2 * v14 - 4] = *((_QWORD *)v29 + 221);
    if ( !v82 )
    {
      v12 |= 2u;
LABEL_80:
      LODWORD(v93) = v12;
LABEL_52:
      v4 = v89;
      goto LABEL_53;
    }
    v12 |= 1u;
    v82 = *((_BYTE *)v8 + 64) == 2;
    LODWORD(v93) = v12;
    if ( v82 )
    {
      v12 |= 0x20u;
      LODWORD(v93) = v12;
    }
    v30 = &unk_18033AD70;
    while ( *v30 != v27 )
    {
      if ( ++v30 == (_DWORD *)&unk_18033AD88 )
        goto LABEL_33;
    }
    if ( v30 != (_DWORD *)&unk_18033AD88 )
    {
      v31 = *((_QWORD *)a2 + 15);
      LOBYTE(v96) = 0;
      v3 = *(_DWORD *)(v31 + 8);
    }
LABEL_33:
    v32 = 0;
    v102.m128i_i64[0] = (__int64)"NoOp";
    v102.m128i_i32[2] = 0;
    ColorChannelDepth = GetColorChannelDepth(v105[0]);
    v34 = v98;
    v35 = ColorChannelDepth;
    if ( *((_BYTE *)v8 + 8 * v98 + 32) )
    {
      v43 = 1;
    }
    else
    {
      v36 = (_BYTE *)*((_QWORD *)v8 + v98 + 2);
      if ( !v36 )
      {
        v67 = *((_QWORD *)v8 + v98 + 3);
        v68 = (__int64 *)&v122;
        v38 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v67 + 24LL);
        goto LABEL_89;
      }
      v37 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v36 + 32LL);
      if ( v37 == CCompositionSurfaceBitmap::IsOpaque )
      {
        v38 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 24LL);
        if ( v38 == CCompositionSurfaceBitmap::GetPixelFormatInfo )
        {
          RenderingRealization = CCompositionSurfaceBitmap::TryGetRenderingRealization((CCompositionSurfaceBitmap *)(v36 - 72));
          if ( RenderingRealization )
          {
            v40 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*(_QWORD *)RenderingRealization + 24LL);
            if ( (char *)v40 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
            {
              CDxHandleBitmapRealization::GetPixelFormatInfo(RenderingRealization, &v110);
            }
            else if ( v40 == CDxHandleBitmapRealization::GetPixelFormatInfo )
            {
              CDxHandleBitmapRealization::GetPixelFormatInfo((__int64)RenderingRealization, &v110);
            }
            else
            {
              (*(void (__fastcall **)(struct IBitmapRealization *, __int64 *))(*(_QWORD *)RenderingRealization + 24LL))(
                RenderingRealization,
                &v110);
            }
            v41 = HIDWORD(v110);
            if ( v36[40] )
              v41 = 3;
            HIDWORD(v110) = v41;
            v107 = v111;
            v42 = &v106;
            v106 = v110;
          }
          else
          {
            v84 = v36[40] != 0;
            LODWORD(v106) = 0;
            v107 = 0;
            v42 = &v106;
            HIDWORD(v106) = v84 ? 3 : 0;
          }
          goto LABEL_43;
        }
        v68 = &v106;
        v67 = *((_QWORD *)v8 + v98 + 2);
LABEL_89:
        v42 = (__int64 *)v38(v67, (__int64)v68);
LABEL_43:
        v34 = v98;
        v8 = v88;
        v43 = *((_DWORD *)v42 + 1) == 3;
        goto LABEL_44;
      }
      v83 = v37(*((CCompositionSurfaceBitmap **)v8 + v98 + 2));
      v34 = v98;
      v43 = v83;
      v8 = v88;
    }
LABEL_44:
    v44 = 0;
    v45 = -2003292288;
    switch ( v27 )
    {
      case 0:
        if ( !v3 )
          goto LABEL_97;
        if ( v3 != 1 )
          goto LABEL_45;
        v44 = 6;
        goto LABEL_85;
      case 1:
        if ( v3 == 1 )
        {
          v44 = 48;
          goto LABEL_97;
        }
        if ( !v3 )
        {
          v44 = 2;
          v45 = 0;
          v46 = 2;
          goto LABEL_46;
        }
        if ( v3 != 12 )
          goto LABEL_45;
        v44 = 4;
        v45 = 0;
        v46 = 4;
        goto LABEL_46;
      case 2:
        if ( v3 )
        {
          if ( v3 != 1 )
            goto LABEL_45;
          if ( v35 == 8 )
          {
            v44 = 22;
            v45 = 0;
            v46 = 22;
            goto LABEL_46;
          }
          v82 = v35 == 10;
          goto LABEL_147;
        }
        if ( v35 == 8 )
        {
          v44 = 20;
          v45 = 0;
          v46 = 20;
          goto LABEL_46;
        }
        if ( v35 == 10 )
        {
          v44 = 28;
          goto LABEL_97;
        }
        goto LABEL_45;
      case 3:
        if ( !v3 )
        {
          v44 = 30;
          v45 = 0;
          goto LABEL_45;
        }
        v82 = v3 == 1;
LABEL_147:
        if ( !v82 )
          goto LABEL_45;
        v44 = 32;
LABEL_85:
        v45 = 0;
        v46 = v44;
        goto LABEL_46;
      case 12:
        switch ( v3 )
        {
          case 0:
            v44 = 16;
            v45 = 0;
            goto LABEL_45;
          case 1:
            v44 = 18;
            v45 = 0;
            v46 = 18;
            break;
          case 12:
            v45 = 0;
            v46 = 0;
            break;
          default:
            goto LABEL_45;
        }
        goto LABEL_46;
      case 14:
        if ( v3 == 12 )
        {
          v44 = 46;
          v45 = 0;
          goto LABEL_45;
        }
        if ( v3 )
        {
          if ( v3 != 1 )
            goto LABEL_45;
          v44 = 44;
          v45 = 0;
          v46 = 44;
        }
        else
        {
          v44 = 42;
          v45 = 0;
          v46 = 42;
        }
        goto LABEL_46;
      case 17:
        if ( v3 )
        {
          if ( v3 == 1 )
          {
            v44 = 10;
            v45 = 0;
            v46 = 10;
            goto LABEL_46;
          }
          if ( v3 == 12 )
          {
            v19 = -2003292288;
LABEL_86:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x118u, 0LL);
            return v19;
          }
        }
        else
        {
          v44 = 12;
          v45 = 0;
        }
LABEL_45:
        v46 = v44;
        if ( v45 < 0 )
        {
          v48 = v102;
          goto LABEL_49;
        }
LABEL_46:
        v47 = v44 + 1;
        if ( !v43 )
          v47 = v46;
        v48 = *((__m128i *)&ColorConversion::sc_rgShaders + v47);
        v32 = _mm_cvtsi128_si32(_mm_srli_si128(v48, 8));
        v102 = v48;
LABEL_49:
        v19 = v45;
        if ( v45 < 0 )
          goto LABEL_86;
        if ( v32 > 1 )
        {
          v94 = v48;
          goto LABEL_52;
        }
        if ( *((_BYTE *)v8 + 8 * v34 + 32) )
          goto LABEL_79;
        v60 = (_BYTE *)*((_QWORD *)v8 + v34 + 2);
        if ( !v60 )
        {
          v70 = *((_QWORD *)v8 + v34 + 3);
          v71 = (__int64 *)&v123;
          v61 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v70 + 24LL);
          goto LABEL_104;
        }
        if ( *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v60 + 32LL) == CCompositionSurfaceBitmap::IsOpaque )
        {
          v61 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 24LL);
          if ( v61 == CCompositionSurfaceBitmap::GetPixelFormatInfo )
          {
            v62 = CCompositionSurfaceBitmap::TryGetRenderingRealization((CCompositionSurfaceBitmap *)(v60 - 72));
            if ( v62 )
            {
              v63 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v62 + 24LL);
              if ( (char *)v63 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
              {
                CDxHandleBitmapRealization::GetPixelFormatInfo(v62, &v112);
              }
              else if ( v63 == CDxHandleBitmapRealization::GetPixelFormatInfo )
              {
                CDxHandleBitmapRealization::GetPixelFormatInfo((__int64)v62, &v112);
              }
              else
              {
                (*(void (__fastcall **)(struct IBitmapRealization *, __int64 *))(*(_QWORD *)v62 + 24LL))(v62, &v112);
              }
              v64 = HIDWORD(v112);
              if ( v60[40] )
                v64 = 3;
              HIDWORD(v112) = v64;
              v109 = v113;
              v65 = &v108;
              v108 = v112;
            }
            else
            {
              v84 = v60[40] != 0;
              LODWORD(v108) = 0;
              v109 = 0;
              v65 = &v108;
              HIDWORD(v108) = v84 ? 3 : 0;
            }
          }
          else
          {
            v71 = &v108;
            v70 = *((_QWORD *)v8 + v34 + 2);
LABEL_104:
            v65 = (__int64 *)v61(v70, (__int64)v71);
          }
          v66 = *((_DWORD *)v65 + 1) == 3;
          goto LABEL_78;
        }
        v66 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v60 + 32LL))(*((_QWORD *)v8 + v34 + 2));
LABEL_78:
        v8 = v88;
        if ( !v66 )
          goto LABEL_52;
LABEL_79:
        v12 |= 4u;
        break;
      case 20:
        if ( v3 )
        {
          if ( v3 != 1 )
            goto LABEL_45;
          if ( v35 == 8 )
          {
            v44 = 26;
            v45 = 0;
            v46 = 26;
            goto LABEL_46;
          }
          if ( v35 == 10 )
          {
            v44 = 36;
            v45 = 0;
            v46 = 36;
            goto LABEL_46;
          }
        }
        else
        {
          if ( v35 == 8 )
          {
            v44 = 24;
            v45 = 0;
            v46 = 24;
            goto LABEL_46;
          }
          if ( v35 == 10 )
          {
            v44 = 34;
LABEL_97:
            v45 = 0;
          }
        }
        goto LABEL_45;
      case 21:
        if ( v3 )
        {
          if ( v3 != 1 )
            goto LABEL_45;
          v44 = 40;
          v45 = 0;
          v46 = 40;
        }
        else
        {
          v44 = 38;
          v45 = 0;
          v46 = 38;
        }
        goto LABEL_46;
      default:
        goto LABEL_45;
    }
    goto LABEL_80;
  }
  v81 = -2147024809;
  v85 = 3124;
LABEL_193:
  v19 = v81;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v81, v85, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v81, 0xF5u, 0LL);
  return v19;
}
