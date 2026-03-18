/*
 * XREFs of ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18019F174
 * Callers:
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x180170F18 (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x18019EF74 (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1802D43C8 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180170400 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertSingleResource(
        __int64 a1,
        __int64 a2,
        int a3,
        struct D2D_POINT_2F a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v12; // rbp
  __int64 v13; // rcx
  char v14; // bl
  float v15; // xmm6_4
  int v16; // edi
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  _DWORD v21[8]; // [rsp+70h] [rbp-48h] BYREF
  int v22; // [rsp+C0h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 296) + 88LL))(*(_QWORD *)(a1 + 296), &v22);
  v12 = *(_QWORD *)(a1 + 64);
  v13 = *(_QWORD *)(a1 + 296) + 16LL;
  v14 = *(_BYTE *)(a1 + 124);
  v15 = *(float *)(a1 + 120);
  v16 = *(_DWORD *)(a1 + 100);
  v21[0] = *a8;
  v21[1] = a8[1];
  v21[2] = a8[2];
  v21[3] = a8[3];
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 176LL))(v13);
  v18 = CD3DDevice::HDRConvert(v12, a2, a3, a4, a5, (int)a6, a7, v17, &v22, v16, v15, v14, (__int64)v21);
  v19 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x369u, 0LL);
  return v19;
}
