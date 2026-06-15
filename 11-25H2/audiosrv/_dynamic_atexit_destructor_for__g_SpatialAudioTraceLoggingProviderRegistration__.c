/*
 * XREFs of _dynamic_atexit_destructor_for__g_SpatialAudioTraceLoggingProviderRegistration__ @ 0x180169940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG dynamic_atexit_destructor_for__g_SpatialAudioTraceLoggingProviderRegistration__()
{
  _DWORD *v0; // rax
  REGHANDLE v1; // rcx

  v0 = (_DWORD *)g_SpatialAudioTraceLoggingProviderRegistration;
  v1 = *(_QWORD *)(g_SpatialAudioTraceLoggingProviderRegistration + 32LL);
  *(_QWORD *)(g_SpatialAudioTraceLoggingProviderRegistration + 32LL) = 0LL;
  *v0 = 0;
  return EventUnregister(v1);
}
