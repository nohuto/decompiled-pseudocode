/*
 * XREFs of ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x180148150
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18018EDE0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18020E2D0 (-SetStateOnDevice@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801470F0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180147C20 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x1801483E8 (-EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ.c)
 *     ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x18014A240 (-GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801B5730 (-GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802E10C0 (-GetDeviceTexture@CDxHandleBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListBitmap::GetShaderResourceView(
        CDrawListBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID3D11ShaderResourceView **a3,
        struct PixelFormatInfo *a4)
{
  CCachedImageProducer *v4; // rbx
  __int64 v8; // rax
  struct ID3D11ShaderResourceView *v9; // rdi
  int (*v10)(CCachedVisualImage *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int v11; // eax
  int v12; // ebx
  CRenderTargetBitmap *v13; // rcx
  __int64 (__fastcall *v14)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int v15; // eax
  struct IDeviceTexture *v16; // rbx
  struct ID3D11ShaderResourceView *(__fastcall *v17)(CDeviceTextureTarget *__hidden); // rax
  __int64 v18; // rax
  struct ID3D11ShaderResourceView *ShaderResourceView; // rax
  int DeviceTexture; // eax
  struct IDeviceTexture *v22; // [rsp+30h] [rbp-48h] BYREF
  struct IRenderTargetBitmap *v23[2]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (CCachedImageProducer *)*((_QWORD *)this + 1);
  if ( !v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v8 = *(_QWORD *)v4;
  v9 = 0LL;
  v22 = 0LL;
  v10 = *(int (**)(CCachedVisualImage *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **))(v8 + 96);
  if ( v10 != CCachedVisualImage::GetDeviceTexture )
  {
    if ( v10 == CCachedImageProducer::GetDeviceTexture )
    {
      DeviceTexture = CCachedImageProducer::GetDeviceTexture(v4, a2, &v22);
    }
    else
    {
      if ( (char *)v10 == (char *)CDxHandleBitmapRealization::GetDeviceTexture )
      {
        v12 = CDxHandleBitmapRealization::GetDeviceTexture(v4, a2, &v22);
        goto LABEL_9;
      }
      DeviceTexture = ((__int64 (__fastcall *)(CCachedImageProducer *, const struct RenderTargetInfo *, struct IDeviceTexture **))v10)(
                        v4,
                        a2,
                        &v22);
    }
    v12 = DeviceTexture;
    goto LABEL_9;
  }
  v23[0] = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v23);
  v11 = CCachedVisualImage::EnsureRenderTargetBitmap((struct D2D_SIZE_U *)v4 - 10, a2, v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x193u, 0LL);
  }
  else
  {
    v13 = (struct IRenderTargetBitmap *)((char *)v23[0] + 8);
    v14 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **))(*((_QWORD *)v23[0] + 1) + 96LL);
    if ( v14 == CRenderTargetBitmap::GetDeviceTexture )
      v15 = CRenderTargetBitmap::GetDeviceTexture(v13, a2, &v22);
    else
      v15 = v14(v13, a2, &v22);
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x196u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v23);
LABEL_9:
  if ( v12 >= 0 )
  {
    v16 = v22;
    v17 = *(struct ID3D11ShaderResourceView *(__fastcall **)(CDeviceTextureTarget *__hidden))(*(_QWORD *)v22 + 128LL);
    if ( v17 == CD2DBitmap::GetShaderResourceView )
    {
      CD2DBitmap::EnsureShaderResourceView((struct IDeviceTexture *)((char *)v22 - 72));
      v9 = (struct ID3D11ShaderResourceView *)*((_QWORD *)v16 + 5);
    }
    else
    {
      if ( v17 == CDeviceTextureTarget::GetShaderResourceView )
      {
        if ( !*((_BYTE *)v22 + 218) && !*((_BYTE *)v22 + 217) )
          goto LABEL_13;
        ShaderResourceView = CD2DBitmap::GetShaderResourceView(v22);
      }
      else
      {
        ShaderResourceView = v17(v22);
      }
      v9 = ShaderResourceView;
    }
    v16 = v22;
LABEL_13:
    *a3 = v9;
    if ( a4 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, struct IRenderTargetBitmap **))(*((_QWORD *)v16 + 1) + 24LL))(
              (__int64)v16 + 8,
              v23);
      v16 = v22;
      *(_QWORD *)a4 = *(_QWORD *)v18;
      *((_DWORD *)a4 + 2) = *(_DWORD *)(v18 + 8);
    }
    if ( v16 )
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v16 + 16LL))(v16);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x72,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
    (const char *)(unsigned int)v12);
  if ( v22 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)v12;
}
