/*
 * XREFs of ??$_Allocate_at_least_helper@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@AEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@AEA_K@Z @ 0x14000EB14
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_K@Z @ 0x14000ED60 (--$_Construct_n@$$V@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@s.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1400100E8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Allocate_at_least_helper<std::allocator<DISPLAYCONFIG_PATH_INFO>>(__int64 a1, _QWORD *a2)
{
  if ( *a2 > 0x38E38E38E38E38EuLL )
    std::_Throw_bad_array_new_length();
  return std::_Allocate<16,std::_Default_allocate_traits,0>(72LL * *a2);
}
