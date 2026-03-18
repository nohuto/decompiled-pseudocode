/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18028769C
 * Callers:
 *     CalculateDisplayBlankTime @ 0x180229E74 (CalculateDisplayBlankTime.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802461D8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@@Z @ 0x180287910 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  char *v10; // rsi
  char *result; // rax

  if ( a2 > 0x38E38E38E38E38ELL )
    std::_Xlength_error("vector too long");
  v4 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v5 = 0x8E38E38E38E38E39uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v6 = v5 >> 1;
  v7 = 0x8E38E38E38E38E39uLL * (v4 >> 3);
  if ( v5 <= 0x38E38E38E38E38ELL - (v5 >> 1) )
  {
    v8 = v6 + v5;
    if ( v6 + v5 >= a2 )
    {
      if ( v8 > 0x38E38E38E38E38ELL )
        std::_Throw_bad_array_new_length();
    }
    else
    {
      v8 = a2;
    }
  }
  else
  {
    v8 = 0x38E38E38E38E38ELL;
  }
  v9 = 72 * v8;
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(72 * v8);
  std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_PATH_INFO>>(&v10[72 * v7], a2 - v7);
  memmove_0(v10, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, 8 * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3));
  *a1 = v10;
  result = &v10[v9];
  a1[1] = &v10[72 * a2];
  a1[2] = &v10[v9];
  return result;
}
