/*
 * XREFs of ??$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z @ 0x180146174
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x180146238 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x1801462AC (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 *     ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x1801462F8 (-get@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z.c)
 */

void __fastcall NUIAudioTracing::NuiAudioTrace<char (&)[512]>(char *a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // r8
  NUIAudioTracing *v4; // rcx

  v3 = *(_DWORD **)(wil::details::static_lazy<NUIAudioTracing>::get(
                      a1,
                      _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v3 )
  {
    if ( *v3 )
    {
      wil::details::static_lazy<NUIAudioTracing>::get(
        v2,
        _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
      NUIAudioTracing::NuiAudioTrace_(v4, a1);
    }
  }
}
