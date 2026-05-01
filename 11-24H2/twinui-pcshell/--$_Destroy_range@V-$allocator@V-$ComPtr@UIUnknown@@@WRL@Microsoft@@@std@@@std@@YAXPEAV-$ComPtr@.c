/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@0@@Z @ 0x1803EE7B0
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1803EE7E8 (--$_Emplace_reallocate@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIApplic.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x1803EE928 (--$_Uninitialized_move@PEAV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UI.c)
 *     ??1ObjectArray@Discover@PenWorkspace@@UEAA@XZ @ 0x1803EEAB0 (--1ObjectArray@Discover@PenWorkspace@@UEAA@XZ.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x18040FC84 (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IApplicationView__std::allocator_Microsoft::WRL::ComPtr_IApplicationView_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IApplicationView____::_1_::catch$0 @ 0x1806E7345 (_std--vector_Microsoft--WRL--ComPtr_IApplicationView__std--allocator_Microsoft--WRL--ComPtr_IApp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IUnknown>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
