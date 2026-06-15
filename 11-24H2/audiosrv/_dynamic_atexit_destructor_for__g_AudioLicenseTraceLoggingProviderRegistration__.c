/*
 * XREFs of _dynamic_atexit_destructor_for__g_AudioLicenseTraceLoggingProviderRegistration__ @ 0x180173230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG dynamic_atexit_destructor_for__g_AudioLicenseTraceLoggingProviderRegistration__()
{
  _DWORD *v0; // rax
  REGHANDLE v1; // rcx

  v0 = (_DWORD *)g_AudioLicenseTraceLoggingProviderRegistration;
  v1 = *(_QWORD *)(g_AudioLicenseTraceLoggingProviderRegistration + 32LL);
  *(_QWORD *)(g_AudioLicenseTraceLoggingProviderRegistration + 32LL) = 0LL;
  *v0 = 0;
  return EventUnregister(v1);
}
