/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18028759C
 * Callers:
 *     CalculateDisplayBlankTime @ 0x180229E74 (CalculateDisplayBlankTime.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1801FFA08 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@@Z @ 0x1802878D4 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  char *v10; // r14

  v2 = 0x3FFFFFFFFFFFFFFLL;
  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 6;
  v7 = v5 >> 6;
  v8 = v6 >> 1;
  if ( v6 <= 0x3FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<64>(v2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_MODE_INFO>>(&v10[64 * v7], a2 - v7);
  memmove_0(v10, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFC0uLL);
  *a1 = v10;
  a1[1] = &v10[64 * a2];
  a1[2] = &v10[64 * v2];
}
