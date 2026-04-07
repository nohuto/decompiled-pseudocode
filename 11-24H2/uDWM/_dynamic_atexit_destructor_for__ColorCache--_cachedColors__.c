/*
 * XREFs of _dynamic_atexit_destructor_for__ColorCache::_cachedColors__ @ 0x1800F9270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID dynamic_atexit_destructor_for__ColorCache::_cachedColors__()
{
  PVOID result; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    RestartKey = 0LL;
    result = RtlEnumerateGenericTableWithoutSplaying(&ColorCache::_cachedColors, &RestartKey);
    if ( !result )
      break;
    RtlDeleteElementGenericTable(&ColorCache::_cachedColors, result);
  }
  return result;
}
