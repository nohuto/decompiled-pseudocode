/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1801B76AC
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18009ADD0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this)
{
  _DWORD *v1; // rcx
  char v2; // r8

  v1 = (_DWORD *)*((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 && *v1 )
    return (unsigned __int8)tlgKeywordOn(v1, 0LL) != 0;
  return v2;
}
