/*
 * XREFs of ??_ENUIAudioTracing@@UEAAPEAXI@Z @ 0x180146200
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_904e72f60f56877f633fc2ab0ce9f5f8_@@CA@XZ @ 0x180146120 (-_lambda_invoker_cdecl_@_lambda_904e72f60f56877f633fc2ab0ce9f5f8_@@CA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800AE2F4 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

NUIAudioTracing *__fastcall NUIAudioTracing::`vector deleting destructor'(NUIAudioTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
