/*
 * XREFs of ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x1800AC95C
 * Callers:
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800AC9EC (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800AEC90 (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180063030 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@QEAAX_N.c)
 */

LPCWCH __fastcall CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(
        LPCWCH lpString1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // si
  const wchar_t near *const *i; // rbx

  v4 = (char)a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentAPI>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  for ( i = &off_1800DC190; ; i += 3 )
  {
    if ( i == &off_1800DC3B8 )
      return lpString1;
    if ( CompareStringOrdinal(lpString1, -1, *i, -1, 1) == 2 )
      break;
  }
  if ( v4 )
    return (LPCWCH)*((_QWORD *)i + 1);
  else
    return (LPCWCH)*((_QWORD *)i + 2);
}
