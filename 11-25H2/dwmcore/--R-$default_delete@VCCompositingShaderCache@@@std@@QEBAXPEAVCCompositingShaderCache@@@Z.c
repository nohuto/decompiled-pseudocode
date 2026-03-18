/*
 * XREFs of ??R?$default_delete@VCCompositingShaderCache@@@std@@QEBAXPEAVCCompositingShaderCache@@@Z @ 0x1802E5464
 * Callers:
 *     ?EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z @ 0x18018E0E8 (-EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z.c)
 *     _dynamic_atexit_destructor_for__g_spCompositingShaderCache___0 @ 0x1802E9130 (_dynamic_atexit_destructor_for__g_spCompositingShaderCache___0.c)
 * Callees:
 *     ??1CCompositingShaderCache@@QEAA@XZ @ 0x180253304 (--1CCompositingShaderCache@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CCompositingShaderCache>::operator()(__int64 a1, CCompositingShaderCache *a2)
{
  if ( a2 )
  {
    CCompositingShaderCache::~CCompositingShaderCache(a2);
    operator delete(a2);
  }
}
