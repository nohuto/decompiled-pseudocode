/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1801C916C
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800C8F00 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x18021DB24 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(
        wil::TraceLoggingProvider *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // rcx
  char v5; // r8

  v4 = (_DWORD *)*((_QWORD *)this + 1);
  v5 = 0;
  if ( v4 && *v4 )
    return (unsigned __int8)tlgKeywordOn(v4, 0LL, 0LL, a4) != 0;
  return v5;
}
