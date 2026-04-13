/*
 * XREFs of ?GetSubscriptionIdByName@TargetedContent@CreativeFramework@@YAPEB_WPEB_W@Z @ 0x180095398
 * Callers:
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180094B5C (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 * Callees:
 *     <none>
 */

LPCWSTR __fastcall CreativeFramework::TargetedContent::GetSubscriptionIdByName(
        LPCWSTR lpStringSource,
        const wchar_t *a2)
{
  const wchar_t near *const *i; // rbx

  for ( i = &off_1800DBD40; i != (const wchar_t near *const *)&off_1800DBF68; i += 3 )
  {
    if ( FindStringOrdinal(0x200000u, lpStringSource, -1, i[2], -1, 1) >= 0
      || FindStringOrdinal(0x200000u, lpStringSource, -1, i[1], -1, 1) >= 0 )
    {
      return *i;
    }
  }
  return lpStringSource;
}
