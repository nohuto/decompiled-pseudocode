/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@@Z @ 0x1802A521C
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@@Z @ 0x1802222DC (--$_Uninitialized_move@PEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??1?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1802A51D4 (--1-$vector@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIDiscoverRec.c)
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1803EF920 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1803F18D4 (--$_Emplace_reallocate@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IDiscoverRecentItem__std::allocator_Microsoft::WRL::ComPtr_IDiscoverRecentItem_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IDiscoverRecentItem__&__::_1_::catch$1 @ 0x1806E7550 (_std--vector_Microsoft--WRL--ComPtr_IDiscoverRecentItem__std--allocator_Microsoft--WRL--ComPtr_I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
