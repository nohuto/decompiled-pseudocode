/*
 * XREFs of ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x18029691C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU23@AEBU23@@Z @ 0x1805ACFF8 (--$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@-$vector@UIntendedHotKeySnapIn.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180296974 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<56>(unsigned __int64 a1)
{
  if ( a1 > 0x492492492492492LL )
    std::_Throw_bad_array_new_length();
  return 56 * a1;
}
