/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F4740
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180437760 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180437760.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180437770 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180437770.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180437780 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180437780.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180437790 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180437790.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCDI@EAAKXZ @ 0x1804377A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_1804377A0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCEA@EAAKXZ @ 0x1804377C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_1804377C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1804377E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_1804377E0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1804377F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_1804377F0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x180437800 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180437800.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x180437810 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180437810.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x180437820 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180437820.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x180437830 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWi_ea_180437830.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 592);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 592), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
