/*
 * XREFs of ?GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801AB340
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010A6B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x18010C510 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18001D570 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x18001E3F0 (-GetRenderTargetInfo@CRenderTargetBitmap@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010BFE0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802CDC00 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedImageProducer::GetDeviceTexture(
        CCachedImageProducer *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  __int64 **v3; // rbx
  __int64 **v4; // rbp
  char v7; // r14
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  float *v11; // rax
  float *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  bool (__fastcall *v16)(CDeviceTextureTarget *); // rax
  char IsProtected; // al
  CRenderTargetBitmap *v18; // rcx
  __int64 (*v19)(void); // rax
  int IsValid; // eax
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  __int64 RenderTargetInfo; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  CRenderTargetBitmap *v27; // rcx
  __int64 (__fastcall *v28)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  unsigned int v30; // ebx
  _BYTE v32[32]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = (__int64 **)*((_QWORD *)this + 2);
  v4 = (__int64 **)*((_QWORD *)this + 3);
  v7 = *((_BYTE *)g_pComposition + 6466);
  while ( 1 )
  {
    if ( v3 == v4 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
        (const char *)0x800710DDLL);
      return 2147946717LL;
    }
    v8 = *v3;
    v9 = **v3;
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 88LL);
    v11 = (float *)(v10 == CRenderTargetBitmap::GetRenderTargetInfo
                  ? CRenderTargetBitmap::GetRenderTargetInfo(v9, (__int64)v32)
                  : v10(v9, (__int64)v32));
    v12 = v11;
    if ( *(_DWORD *)v11 == *(_DWORD *)a2 && *((_DWORD *)v11 + 1) == *((_DWORD *)a2 + 1) )
    {
      v13 = *((_DWORD *)v11 + 2);
      if ( (v13 == -1 || v13 == *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 2) == -3)
        && (v12[4] != 0.0) == (*((float *)a2 + 4) != 0.0)
        && (!*((_BYTE *)v12 + 20) || *((_BYTE *)a2 + 20)) )
      {
        break;
      }
    }
LABEL_28:
    ++v3;
  }
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 144LL))(*v8);
  v15 = *(_QWORD *)v14;
  if ( v7 )
  {
    v16 = *(bool (__fastcall **)(CDeviceTextureTarget *))(v15 + 160);
    if ( (char *)v16 == (char *)CDeviceTextureTarget::IsProtected )
    {
      IsProtected = CDeviceTextureTarget::IsProtected(v14);
      goto LABEL_13;
    }
  }
  else
  {
    v16 = *(bool (__fastcall **)(CDeviceTextureTarget *))(v15 + 176);
    if ( v16 == CDeviceTextureTarget::IsBlackedOutForReadback )
    {
      IsProtected = *(_BYTE *)(v14 + 51);
      goto LABEL_13;
    }
  }
  IsProtected = v16((CDeviceTextureTarget *)v14);
LABEL_13:
  if ( IsProtected )
    goto LABEL_28;
  v18 = (CRenderTargetBitmap *)**v3;
  v19 = *(__int64 (**)(void))(*(_QWORD *)v18 + 24LL);
  if ( (char *)v19 == (char *)CRenderTargetBitmap::IsValid )
    IsValid = CRenderTargetBitmap::IsValid(v18);
  else
    IsValid = v19();
  v21 = IsValid;
  if ( IsValid < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
      (const char *)(unsigned int)IsValid);
    return v21;
  }
  else
  {
    v22 = **v3;
    v23 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 88LL);
    if ( v23 == CRenderTargetBitmap::GetRenderTargetInfo )
      RenderTargetInfo = CRenderTargetBitmap::GetRenderTargetInfo(v22, (__int64)v32);
    else
      RenderTargetInfo = v23(v22, (__int64)v32);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 4) - *(float *)(RenderTargetInfo + 16)) & _xmm) > 0.0000011920929 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
        (const char *)0x88982F04LL);
      return 2291674884LL;
    }
    else
    {
      v25 = **v3;
      v26 = *(_QWORD *)(v25 + 8);
      v27 = (CRenderTargetBitmap *)(v25 + 8);
      v28 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **))(v26 + 96);
      if ( v28 == CRenderTargetBitmap::GetDeviceTexture )
        DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(v27, a2, a3);
      else
        DeviceTexture = v28(v27, a2, a3);
      v30 = DeviceTexture;
      if ( DeviceTexture < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x50,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cachedimageproducer.cpp",
          (const char *)(unsigned int)DeviceTexture);
        return v30;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
