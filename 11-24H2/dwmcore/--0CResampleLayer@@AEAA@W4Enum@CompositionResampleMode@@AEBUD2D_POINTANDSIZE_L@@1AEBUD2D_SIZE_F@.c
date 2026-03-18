/*
 * XREFs of ??0CResampleLayer@@AEAA@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@1AEBUD2D_SIZE_F@@V?$optional@M@std@@PEAVIRenderTargetBitmap@@4@Z @ 0x18027C2AC
 * Callers:
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_SIZE_F@@AEBV?$optional@M@std@@PEAPEAV1@@Z @ 0x18027C4B4 (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSI.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800FE538 (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CResampleLayer::CResampleLayer(
        __int64 a1,
        int a2,
        _OWORD *a3,
        const struct D2D_POINTANDSIZE_L *a4,
        float *a5,
        __int64 a6,
        struct IRenderTargetBitmap *a7,
        __int64 a8)
{
  float v11; // xmm0_4
  __int64 result; // rax

  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a4, a7);
  *(_QWORD *)a1 = &CResampleLayer::`vftable';
  *(_DWORD *)(a1 + 120) = a2;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 128),
    a8);
  *(float *)(a1 + 136) = fmaxf(*a5, 1.0);
  v11 = fmaxf(a5[1], 1.0);
  *(_QWORD *)(a1 + 144) = a6;
  result = a1;
  *(float *)(a1 + 140) = v11;
  *(_OWORD *)(a1 + 152) = *a3;
  return result;
}
