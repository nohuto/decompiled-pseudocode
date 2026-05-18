/*
 * XREFs of sub_18002F8CC @ 0x18002F8CC
 * Callers:
 *     sub_18002E3FC @ 0x18002E3FC (sub_18002E3FC.c)
 *     sub_18002F328 @ 0x18002F328 (sub_18002F328.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

__int64 __fastcall sub_18002F8CC(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = -8388609;
  *(_DWORD *)(a1 + 4) = 2139095039;
  std::wstring::wstring(a1 + 24, word_1800F78E8);
  return a1;
}
