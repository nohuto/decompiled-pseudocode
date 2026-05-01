/*
 * XREFs of ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x180296948
 * Callers:
 *     ??$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAPEAUGamepadButtonCollectionTracker@@QEAU2@AEBU2@@Z @ 0x180343348 (--$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@-$vector@UGamepadButtonCollectionTra.c)
 *     ??$_Emplace_reallocate@AEBUDISPLAYCONFIG_MODE_INFO@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAPEAUDISPLAYCONFIG_MODE_INFO@@QEAU2@AEBU2@@Z @ 0x1805BD068 (--$_Emplace_reallocate@AEBUDISPLAYCONFIG_MODE_INFO@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$alloc.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180296974 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Get_size_of_n<64>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return a1 << 6;
}
