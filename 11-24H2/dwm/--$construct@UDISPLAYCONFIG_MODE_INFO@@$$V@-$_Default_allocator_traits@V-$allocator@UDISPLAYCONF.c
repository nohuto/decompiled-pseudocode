/*
 * XREFs of ??$construct@UDISPLAYCONFIG_MODE_INFO@@$$V@?$_Default_allocator_traits@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@SAXAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@QEAUDISPLAYCONFIG_MODE_INFO@@@Z @ 0x14000D56C
 * Callers:
 *     ??$_Emplace_back@$$V@?$_Uninitialized_backout_al@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAAXXZ @ 0x14000D460 (--$_Emplace_back@$$V@-$_Uninitialized_backout_al@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@s.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::_Default_allocator_traits<std::allocator<DISPLAYCONFIG_MODE_INFO>>::construct<DISPLAYCONFIG_MODE_INFO,>(
        __int64 a1,
        void *a2)
{
  return memset_0(a2, 0, 0x40uLL);
}
