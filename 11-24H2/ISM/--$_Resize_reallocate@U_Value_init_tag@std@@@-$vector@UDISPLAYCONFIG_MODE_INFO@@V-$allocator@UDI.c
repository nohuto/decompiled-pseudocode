/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180112FF0
 * Callers:
 *     ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x180113D7C (-IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x180078DC8 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@@Z @ 0x180113214 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

void __fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  size_t size_of; // rax
  char *v9; // r14

  v4 = 0x3FFFFFFFFFFFFFFLL;
  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 6;
  v6 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 6;
  v7 = v6 >> 1;
  if ( v6 <= 0x3FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v4 = v7 + v6;
    if ( v7 + v6 < a2 )
      v4 = a2;
  }
  size_of = std::_Get_size_of_n<64>(v4);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  try
  {
    std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_MODE_INFO>>(&v9[64 * v5], a2 - v5);
    memmove_0(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL));
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = &v9[64 * a2];
    *(_QWORD *)(a1 + 16) = &v9[64 * v4];
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)(v4 << 6));
    throw;
  }
}
