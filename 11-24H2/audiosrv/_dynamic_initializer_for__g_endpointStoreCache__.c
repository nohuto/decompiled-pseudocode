/*
 * XREFs of _dynamic_initializer_for__g_endpointStoreCache__ @ 0x1800084D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CEndpointStoreCache@@QEAA@XZ @ 0x1800A02E8 (--0CEndpointStoreCache@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_endpointStoreCache__(CEndpointStoreCache *a1)
{
  CEndpointStoreCache::CEndpointStoreCache(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_endpointStoreCache__);
}
