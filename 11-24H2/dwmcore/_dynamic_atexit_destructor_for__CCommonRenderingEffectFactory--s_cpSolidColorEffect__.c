/*
 * XREFs of _dynamic_atexit_destructor_for__CCommonRenderingEffectFactory::s_cpSolidColorEffect__ @ 0x1802DF990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__CCommonRenderingEffectFactory::s_cpSolidColorEffect__()
{
  __int64 result; // rax

  if ( CCommonRenderingEffectFactory::s_cpSolidColorEffect )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)CCommonRenderingEffectFactory::s_cpSolidColorEffect + 8LL))(CCommonRenderingEffectFactory::s_cpSolidColorEffect);
  return result;
}
