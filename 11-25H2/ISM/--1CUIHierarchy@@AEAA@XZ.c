/*
 * XREFs of ??1CUIHierarchy@@AEAA@XZ @ 0x180093E20
 * Callers:
 *     _CUIHierarchy::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__ @ 0x1801D2800 (_CUIHierarchy--GetInstance_--_2_--_dynamic_atexit_destructor_for__instance__.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x180014BA0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180026AAC (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?StopWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800AB6F0 (-StopWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 */

void __fastcall CUIHierarchy::~CUIHierarchy(__int64 **this)
{
  __int64 *v2; // rcx

  if ( this[9] )
    CUIHierarchy::StopWindowWatcher((CUIHierarchy *)this);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)(this + 9));
  v2 = this[2];
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v2, this[3]);
    std::_Deallocate<16,0>(
      (char *)this[2],
      (const struct std::nothrow_t *)(((char *)this[4] - (char *)this[2]) & 0xFFFFFFFFFFFFFFF8uLL));
    this[2] = 0LL;
    this[3] = 0LL;
    this[4] = 0LL;
  }
}
