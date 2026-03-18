/*
 * XREFs of _dynamic_atexit_destructor_for__g_spCompositingShaderCache___0 @ 0x1802DFE90
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCCompositingShaderCache@@@std@@QEBAXPEAVCCompositingShaderCache@@@Z @ 0x1802DC1C4 (--R-$default_delete@VCCompositingShaderCache@@@std@@QEBAXPEAVCCompositingShaderCache@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__g_spCompositingShaderCache___0(__int64 a1)
{
  if ( g_spCompositingShaderCache )
    std::default_delete<CCompositingShaderCache>::operator()(a1, (CCompositingShaderCache *)g_spCompositingShaderCache);
}
