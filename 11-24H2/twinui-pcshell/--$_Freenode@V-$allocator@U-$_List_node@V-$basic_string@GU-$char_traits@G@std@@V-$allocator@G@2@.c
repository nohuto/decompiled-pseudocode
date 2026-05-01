/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A3708
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800B9260 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x1800BCF10 (-CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1800BE900 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ??1?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x1801DC5E8 (--1-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_st.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::__lambda_88c52b909d46191f2a7b9cf853665f36_ @ 0x1802A36B8 (_lambda_88c52b909d46191f2a7b9cf853665f36_--__lambda_88c52b909d46191f2a7b9cf853665f36_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_::_CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_ @ 0x180585A20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__-_--_CTas.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180585A78 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>(
        __int64 a1,
        void **a2)
{
  std::wstring::_Tidy_deallocate(a2 + 2);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x30);
}
