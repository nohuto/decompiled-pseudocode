/*
 * XREFs of ??$construct@UDISPLAYCONFIG_PATH_INFO@@$$V@?$_Default_allocator_traits@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@SAXAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@QEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x14000EF68
 * Callers:
 *     ??$_Emplace_back@$$V@?$_Uninitialized_backout_al@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAAXXZ @ 0x14000EE6C (--$_Emplace_back@$$V@-$_Uninitialized_backout_al@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@s.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::_Default_allocator_traits<std::allocator<DISPLAYCONFIG_PATH_INFO>>::construct<DISPLAYCONFIG_PATH_INFO,>(
        __int64 a1,
        void *a2)
{
  return memset_0(a2, 0, 0x48uLL);
}
