/*
 * XREFs of ?TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800BDC70
 * Callers:
 *     ??0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@E@Z @ 0x1800BD948 (--0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V-$basic_string@GU-$char_trait.c)
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x18031C3C0 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x180048B80 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 */

void __fastcall JsonGameMruManager::TrimItemsToMaxSize(unsigned __int8 *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rbx

  v2 = *a1;
  if ( (__int64)(*((_QWORD *)a1 + 8) - *((_QWORD *)a1 + 7)) >> 4 > v2 )
  {
    v3 = *((_QWORD *)a1 + 7) + 16 * v2;
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v3, *((_QWORD *)a1 + 8));
    *((_QWORD *)a1 + 8) = v3;
  }
}
