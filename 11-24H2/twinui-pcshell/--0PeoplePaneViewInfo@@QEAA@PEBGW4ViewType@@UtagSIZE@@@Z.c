/*
 * XREFs of ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x18040FA98
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180412280 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1804129F0 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

__int64 __fastcall PeoplePaneViewInfo::PeoplePaneViewInfo(__int64 a1, _WORD *a2, int a3, __int64 a4)
{
  std::wstring::wstring((char **)a1, a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = a4;
  *(_DWORD *)(a1 + 60) = a3;
  *(_QWORD *)(a1 + 72) = 0LL;
  return a1;
}
