/*
 * XREFs of ??_GAudioSrvPolicyManagerTelemetryProvider@@UEAAPEAXI@Z @ 0x180028760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18002860C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

AudioSrvPolicyManagerTelemetryProvider *__fastcall AudioSrvPolicyManagerTelemetryProvider::`scalar deleting destructor'(
        AudioSrvPolicyManagerTelemetryProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
