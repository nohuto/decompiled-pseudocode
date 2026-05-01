/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_ITaskWindow__std::allocator_Microsoft::WRL::ComPtr_ITaskWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ITaskWindow____::_1_::catch$0 @ 0x1802BBD8A
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_ITaskWindow__std::allocator_Microsoft::WRL::ComPtr_ITaskWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ITaskWindow____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a2 + 96); i != *(__int64 **)(a2 + 104); ++i )
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(i);
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
