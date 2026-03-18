/*
 * XREFs of ??0CResampleLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@2@Z @ 0x1800288FC
 * Callers:
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x180028648 (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@MMW4Enum@CompositionResamp.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800295A8 (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 */

__int64 __fastcall CResampleLayer::CResampleLayer(
        __int64 a1,
        __int128 *a2,
        const struct D2D_POINTANDSIZE_L *a3,
        float a4,
        float a5,
        int a6,
        struct IRenderTargetBitmap *a7,
        __int64 a8)
{
  __int64 result; // rax
  __int128 v11; // xmm0

  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a3, a7);
  *(_QWORD *)a1 = &CResampleLayer::`vftable';
  *(_DWORD *)(a1 + 120) = a6;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    a1 + 128,
    a8);
  result = a1;
  *(float *)(a1 + 140) = fmaxf(a5, 1.0);
  v11 = *a2;
  *(float *)(a1 + 136) = fmaxf(a4, 1.0);
  *(_OWORD *)(a1 + 144) = v11;
  return result;
}
