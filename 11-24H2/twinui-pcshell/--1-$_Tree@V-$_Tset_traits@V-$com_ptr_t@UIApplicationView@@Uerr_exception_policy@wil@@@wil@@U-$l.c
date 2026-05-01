/*
 * XREFs of ??1?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18017141C
 * Callers:
 *     ??1?$set@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@@std@@QEAA@XZ @ 0x18023B2A0 (--1-$set@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U-$less@V-$com_ptr_t@U.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x180171A78 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::~_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>::_Erase_tree<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(
    a1,
    a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
