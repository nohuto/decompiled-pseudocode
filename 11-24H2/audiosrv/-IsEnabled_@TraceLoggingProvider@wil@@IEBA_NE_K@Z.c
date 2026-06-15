/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18011410C
 * Callers:
 *     ?IsEnabled@AudioSrvTelemetryProvider@@SA_NE_K@Z @ 0x1801140E8 (-IsEnabled@AudioSrvTelemetryProvider@@SA_NE_K@Z.c)
 *     ??$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z @ 0x18014E9B4 (--$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this, unsigned __int8 a2, __int64 a3)
{
  _DWORD *v3; // rcx
  char v4; // r9

  v3 = (_DWORD *)*((_QWORD *)this + 1);
  v4 = 0;
  if ( v3 && (unsigned int)a2 < *v3 )
    return tlgKeywordOn((__int64)v3, a3);
  return v4;
}
