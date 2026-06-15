/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$sub_match@PEBG@std@@V?$allocator@V?$sub_match@PEBG@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801277CC
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@V?$sub_match@PEBG@std@@V?$allocator@V?$sub_match@PEBG@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801274DC (--$_Resize@U_Value_init_tag@std@@@-$vector@V-$sub_match@PEBG@std@@V-$allocator@V-$sub_match@PEBG.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800A5C0C (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5E90 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 */

__int64 __fastcall std::vector<std::sub_match<unsigned short const *>>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  SIZE_T size_of; // rax
  char *v9; // rsi
  unsigned __int64 v10; // rdx
  char *v11; // rcx
  __int64 v12; // rcx

  v4 = 0xAAAAAAAAAAAAAAALL;
  if ( a2 > 0xAAAAAAAAAAAAAAALL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v5 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 24LL;
  v6 = (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 24LL;
  v7 = v6 >> 1;
  if ( v6 <= 0xAAAAAAAAAAAAAAALL - (v6 >> 1) )
  {
    v4 = v7 + v6;
    if ( v7 + v6 < a2 )
      v4 = a2;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  try
  {
    v10 = a2 - v5;
    if ( a2 != v5 )
    {
      v11 = &v9[16 * v5 + 16 + 8 * v5];
      do
      {
        *((_QWORD *)v11 - 2) = 0LL;
        *((_QWORD *)v11 - 1) = 0LL;
        *v11 = 0;
        v11 += 24;
        --v10;
      }
      while ( v10 );
    }
    memmove_0(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v12 = a1;
  }
  catch ( ... )
  {
    std::allocator<std::sub_match<unsigned short const *>>::deallocate(v12, v9, v4);
    throw;
  }
  return std::vector<std::sub_match<unsigned short const *>>::_Change_array();
}
