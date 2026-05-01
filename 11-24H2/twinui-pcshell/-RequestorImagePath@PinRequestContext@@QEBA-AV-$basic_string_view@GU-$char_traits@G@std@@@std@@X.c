/*
 * XREFs of ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C650C
 * Callers:
 *     ??R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x1805E40D0 (--R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1805E485C (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805E50D0 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$share_ea_1805E50D0.c)
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1805E56E0 (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805EB6E0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall PinRequestContext::RequestorImagePath(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  _OWORD *result; // rax
  __int128 v5; // [rsp+0h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)&v5 = *(_QWORD *)(a1 + 32);
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v2 + 2 * v3) );
    *((_QWORD *)&v5 + 1) = v3;
  }
  else
  {
    v5 = 0uLL;
  }
  result = a2;
  *a2 = v5;
  return result;
}
