/*
 * XREFs of ?BuildInputAppStartupPreferences@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180251AD4
 * Callers:
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046ECA4 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TouchKeyboardExperienceManager::BuildInputAppStartupPreferences(__int64 a1, _QWORD *a2)
{
  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  std::wstring::append(a2, L"MultiViewMode", 0xDuLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, (void *)L"Desktop", 7uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"BlankDefaultViewEnabled", 0x17uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"StandardViewsEnabled", 0x14uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"ToolBarEnabled", 0xEuLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, (void *)L"ModernUX", 8uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"SuggestionUIEnabled", 0x13uLL);
  std::wstring::append(a2, L" ", 1uLL);
  return a2;
}
