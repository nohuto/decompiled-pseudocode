/*
 * XREFs of _dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache___0 @ 0x180247D80
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x1801B199C (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

CShaderCache *dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache___0()
{
  CShaderCache *result; // rax

  if ( g_spProjectedShadowShaderCache )
    return CShaderCache::`scalar deleting destructor'(g_spProjectedShadowShaderCache);
  return result;
}
