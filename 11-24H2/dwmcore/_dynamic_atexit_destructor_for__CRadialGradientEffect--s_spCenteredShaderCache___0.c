/*
 * XREFs of _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredShaderCache___0 @ 0x1802DFE00
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x1801B424C (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

CShaderCache *dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredShaderCache___0()
{
  CShaderCache *result; // rax

  if ( CRadialGradientEffect::s_spCenteredShaderCache )
    return CShaderCache::`scalar deleting destructor'(CRadialGradientEffect::s_spCenteredShaderCache);
  return result;
}
