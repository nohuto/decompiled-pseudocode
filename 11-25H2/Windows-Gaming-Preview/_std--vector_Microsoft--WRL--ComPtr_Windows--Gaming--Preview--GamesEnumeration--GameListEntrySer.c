/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const_&__::_1_::catch$0 @ 0x1800434A4
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180002E20 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18000C690 (--$_Destroy_range@V-$allocator@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?deallocate@?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@QEAAXQEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@_K@Z @ 0x180010F90 (-deallocate@-$allocator@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>(
    *(__int64 **)(a2 + 152),
    *(__int64 **)(a2 + 48));
  std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::deallocate(
    v3,
    *(_QWORD **)(a2 + 136),
    *(_QWORD *)(a2 + 128));
  throw;
}
