/*
 * XREFs of ??_GAudioProcessingObjectTelemetryProvider@@UEAAPEAXI@Z @ 0x140061F60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x140061DA0 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

AudioProcessingObjectTelemetryProvider *__fastcall AudioProcessingObjectTelemetryProvider::`scalar deleting destructor'(
        AudioProcessingObjectTelemetryProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
