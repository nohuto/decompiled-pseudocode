/*
 * XREFs of ??1UwpAppPackageInfo@@QEAA@XZ @ 0x180572708
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VUwpAppPackageInfo@@@std@@EEAAXXZ @ 0x180573170 (-_Destroy@-$_Ref_count_obj2@VUwpAppPackageInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@U?$less@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180572640 (--1-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@.c)
 */

void __fastcall UwpAppPackageInfo::~UwpAppPackageInfo(void **this)
{
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>,std::shared_ptr<UwpAppViewInfo>,std::less<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>>,0>>::~_Tree<std::_Tmap_traits<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>,std::shared_ptr<UwpAppViewInfo>,std::less<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>>,0>>(this + 4);
  std::wstring::_Tidy_deallocate(this);
}
