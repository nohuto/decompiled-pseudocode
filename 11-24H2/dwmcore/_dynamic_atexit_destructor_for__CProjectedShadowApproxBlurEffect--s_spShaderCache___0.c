/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spShaderCache___0 @ 0x1802DFE60
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x1801B424C (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

CShaderCache *dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spShaderCache___0()
{
  CShaderCache *result; // rax

  if ( CProjectedShadowApproxBlurEffect::s_spShaderCache )
    return CShaderCache::`scalar deleting destructor'(CProjectedShadowApproxBlurEffect::s_spShaderCache);
  return result;
}
