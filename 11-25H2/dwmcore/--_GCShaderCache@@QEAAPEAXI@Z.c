/*
 * XREFs of ??_GCShaderCache@@QEAAPEAXI@Z @ 0x1801B199C
 * Callers:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x18006F218 (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x180071910 (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     _dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache___0 @ 0x180247D80 (_dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache___0.c)
 *     ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x18025B9C0 (-reset@-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShader.c)
 *     ??1?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ @ 0x1802E4DE0 (--1-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredShaderCache___0 @ 0x1802E90A0 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spCenteredShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredShaderCache___0 @ 0x1802E90D0 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spNonCenteredShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spShaderCache___0 @ 0x1802E9100 (_dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect--s_spShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CPassthroughEffect::s_spShaderCache___0 @ 0x1802E9160 (_dynamic_atexit_destructor_for__CPassthroughEffect--s_spShaderCache___0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D680 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
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
