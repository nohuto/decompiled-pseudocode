/*
 * XREFs of sub_18002FA2C @ 0x18002FA2C
 * Callers:
 *     sub_18002E55C @ 0x18002E55C (sub_18002E55C.c)
 *     sub_18002F488 @ 0x18002F488 (sub_18002F488.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

__int64 __fastcall sub_18002FA2C(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = -8388609;
  *(_DWORD *)(a1 + 4) = 2139095039;
  std::wstring::wstring(a1 + 24, word_1800F88E8);
  return a1;
}
