/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180344290
 * Callers:
 *     ?GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@@Z @ 0x18035060C (-GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV-$vector@U_PDH_RAW_COUNTER_ITEM_W@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800D519C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAU_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PDH_RAW_COUNTER_ITEM_W@@QEAU1@0PEAU1@AEAV?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@0@@Z @ 0x180344754 (--$_Uninitialized_move@PEAU_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PDH_RAW_COUNTER_ITEM_W@@PEAU1@_KAEAV?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@0@@Z @ 0x180344824 (--$_Uninitialized_value_construct_n@V-$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PD.c)
 */

char *__fastcall std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  size_t size_of; // rax
  char *v9; // rax
  char *v10; // r14
  char *result; // rax
  void *v12; // [rsp+58h] [rbp+10h]

  v4 = 0x555555555555555LL;
  if ( a2 > 0x555555555555555LL )
    std::_Xlength_error("vector too long");
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4);
  v7 = v6 >> 1;
  if ( v6 <= 0x555555555555555LL - (v6 >> 1) )
  {
    v4 = v7 + v6;
    if ( v7 + v6 < a2 )
      v4 = a2;
  }
  size_of = std::_Get_size_of_n<48>(v4);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v10 = v9;
  v12 = v9;
  try
  {
    std::_Uninitialized_value_construct_n<std::allocator<_PDH_RAW_COUNTER_ITEM_W>>(&v9[48 * v5], a2 - v5);
    std::_Uninitialized_move<_PDH_RAW_COUNTER_ITEM_W *>(*(void **)a1);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)(16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4)));
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = &v10[48 * a2];
    result = &v10[48 * v4];
    *(_QWORD *)(a1 + 16) = result;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(48 * v4));
    throw;
  }
  return result;
}
