/*
 * XREFs of ??_GCShaderCache@@QEAAPEAXI@Z @ 0x1801B424C
 * Callers:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800455EC (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x180047BE0 (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     _dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache___0 @ 0x180240CA0 (_dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache___0.c)
 *     ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x180250370 (-reset@-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShader.c)
 *     ??1?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ @ 0x1802DBB40 (--1-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredShaderCache___0 @ 0x1802DFE00 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spCenteredShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredShaderCache___0 @ 0x1802DFE30 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spNonCenteredShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spShaderCache___0 @ 0x1802DFE60 (_dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect--s_spShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CPassthroughEffect::s_spShaderCache___0 @ 0x1802DFEC0 (_dynamic_atexit_destructor_for__CPassthroughEffect--s_spShaderCache___0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F020 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CShaderCache *__fastcall CShaderCache::`scalar deleting destructor'(CShaderCache *this)
{
  int i; // edi
  void *v3; // rcx

  if ( *(_QWORD *)this )
  {
    for ( i = 0; i < *((_DWORD *)this + 4); ++i )
      Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease((volatile signed __int32 **)(*((_QWORD *)this + 1) + 8LL * i));
    operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  operator delete(this, 0x20uLL);
  return this;
}
