/*
 * XREFs of wistd::__function::__func__lambda_cbaf62729d2d822032acf631d3132aef__void___cdecl(void)_::operator() @ 0x180464D80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1801E9174 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 *     ??$SearchDisabledByPolicy@AEA_NAEAU?$atomic@_N@std@@@StartWindowTelemetry@@SAXAEA_NAEAU?$atomic@_N@std@@@Z @ 0x180463E00 (--$SearchDisabledByPolicy@AEA_NAEAU-$atomic@_N@std@@@StartWindowTelemetry@@SAXAEA_NAEAU-$atomic@.c)
 */

char __fastcall wistd::__function::__func__lambda_cbaf62729d2d822032acf631d3132aef__void___cdecl_void__::operator()(
        DisableSearchPolicy *a1)
{
  __int64 v2; // rax

  *(_BYTE *)(*((_QWORD *)a1 + 1) + 1079LL) = DisableSearchPolicy::IsSearchDisabled(a1);
  v2 = *((_QWORD *)a1 + 1);
  if ( !*(_BYTE *)(v2 + 1073) )
  {
    LOBYTE(v2) = *(_BYTE *)(v2 + 1079);
    if ( (_BYTE)v2 )
      LOBYTE(v2) = StartWindowTelemetry::SearchDisabledByPolicy<bool &,std::atomic<bool> &>(
                     (char *)(*((_QWORD *)a1 + 1) + 1073LL),
                     (char *)(*((_QWORD *)a1 + 1) + 1079LL));
  }
  return v2;
}
