/*
 * XREFs of ?OnContentSizeChanged@CCaptureController@@IEAAXXZ @ 0x1802936FC
 * Callers:
 *     ?SetContentSize@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJUD2D_SIZE_F@@@Z @ 0x180278788 (-SetContentSize@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJUD2D_SIZE.c)
 * Callees:
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x180096F3C (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CCaptureController::OnContentSizeChanged(
        CCaptureController *this,
        __int64 a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  COffScreenRenderTarget **v3; // rdi
  COffScreenRenderTarget **v4; // rbx
  int v5; // esi
  int v6; // ebp
  COffScreenRenderTarget *v7; // rcx

  v3 = (COffScreenRenderTarget **)*((_QWORD *)this + 20);
  v4 = (COffScreenRenderTarget **)*((_QWORD *)this + 19);
  if ( v4 != v3 )
  {
    v5 = (int)*((float *)this + 19);
    v6 = (int)*((float *)this + 20);
    do
    {
      v7 = *v4;
      *((_DWORD *)v7 + 30) = v5;
      *((_DWORD *)v7 + 31) = v6;
      COffScreenRenderTarget::CalcTreeBounds(v7, a2, a3);
      ++v4;
    }
    while ( v4 != v3 );
  }
}
