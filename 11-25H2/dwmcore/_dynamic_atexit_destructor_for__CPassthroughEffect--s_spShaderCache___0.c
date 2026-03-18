/*
 * XREFs of _dynamic_atexit_destructor_for__CPassthroughEffect::s_spShaderCache___0 @ 0x1802E9160
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x1801B199C (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

CShaderCache *dynamic_atexit_destructor_for__CPassthroughEffect::s_spShaderCache___0()
{
  CShaderCache *result; // rax

  if ( CPassthroughEffect::s_spShaderCache )
    return CShaderCache::`scalar deleting destructor'(CPassthroughEffect::s_spShaderCache);
  return result;
}
