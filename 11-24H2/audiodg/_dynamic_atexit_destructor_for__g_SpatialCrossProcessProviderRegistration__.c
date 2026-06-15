/*
 * XREFs of _dynamic_atexit_destructor_for__g_SpatialCrossProcessProviderRegistration__ @ 0x140097320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG dynamic_atexit_destructor_for__g_SpatialCrossProcessProviderRegistration__()
{
  _DWORD *v0; // rax
  REGHANDLE v1; // rcx

  v0 = (_DWORD *)g_SpatialCrossProcessProviderRegistration;
  v1 = *(_QWORD *)(g_SpatialCrossProcessProviderRegistration + 32LL);
  *(_QWORD *)(g_SpatialCrossProcessProviderRegistration + 32LL) = 0LL;
  *v0 = 0;
  return EventUnregister(v1);
}
