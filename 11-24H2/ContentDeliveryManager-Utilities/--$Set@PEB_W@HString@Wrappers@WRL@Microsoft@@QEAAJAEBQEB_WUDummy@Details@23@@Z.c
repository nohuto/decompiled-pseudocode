/*
 * XREFs of ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x180080138
 * Callers:
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18008030C (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveTriggerName@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180081F70 (-ResolveTriggerName@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(
        Microsoft::WRL::Wrappers::HString *a1,
        const wchar_t **a2)
{
  const wchar_t *v2; // rdx
  unsigned __int64 v3; // r8

  v2 = *a2;
  if ( v2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v2[v3] );
    if ( v3 > 0xFFFFFFFF )
      return 2147942934LL;
  }
  else
  {
    LODWORD(v3) = 0;
    v2 = word_1800E78BC;
  }
  return Microsoft::WRL::Wrappers::HString::Set(a1, v2, v3);
}
