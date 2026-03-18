/*
 * XREFs of ?EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x180102648
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x180101830 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 * Callees:
 *     ?Create@CDecodeBitmap@@SAJPEAPEAV1@@Z @ 0x180043968 (-Create@CDecodeBitmap@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180100A2C (-reset@-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureDecodeBitmap(CGlobalDrawingContext **this)
{
  unsigned int v1; // ebx
  struct CDecodeBitmap **v2; // rdi
  int v3; // eax

  v1 = 0;
  v2 = this + 1;
  if ( !this[1] )
  {
    wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::reset(this + 1);
    v3 = CDecodeBitmap::Create(v2);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x76Bu, 0LL);
  }
  return v1;
}
