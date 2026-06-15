/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$basic_regex@GV?$regex_traits@G@std@@@std@@@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@AEAAPEAV?$basic_regex@GV?$regex_traits@G@std@@@1@QEAV21@AEBV21@@Z @ 0x180142A98
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180145224 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18009BBF0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_move@PEAV?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@YAPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x180143434 (--$_Uninitialized_move@PEAV-$basic_regex@GV-$regex_traits@G@std@@@std@@V-$allocator@V-$basic_reg.c)
 *     ??$construct@V?$basic_regex@GV?$regex_traits@G@std@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@1@QEAV?$basic_regex@GV?$regex_traits@G@std@@@1@AEBV31@@Z @ 0x1801434BC (--$construct@V-$basic_regex@GV-$regex_traits@G@std@@@std@@AEBV12@@-$_Default_allocator_traits@V-.c)
 *     ?_Change_array@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@AEAAXQEAV?$basic_regex@GV?$regex_traits@G@std@@@2@_K1@Z @ 0x1801478F0 (-_Change_array@-$vector@V-$basic_regex@GV-$regex_traits@G@std@@@std@@V-$allocator@V-$basic_regex.c)
 */

char *__fastcall std::vector<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>::_Emplace_reallocate<std::basic_regex<unsigned short,std::regex_traits<unsigned short>> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  SIZE_T size_of; // rax
  char *v12; // rdi
  __int64 v13; // rcx
  char *v14; // r14
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) / 40;
  v6 = (a1[1] - *a1) / 40;
  v7 = 0x666666666666666LL;
  if ( v6 == 0x666666666666666LL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) / 40;
  v10 = v9 >> 1;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<40>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = 5 * v5;
  v14 = &v12[40 * v5];
  try
  {
    std::_Default_allocator_traits<std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>::construct<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>,std::basic_regex<unsigned short,std::regex_traits<unsigned short>> const &>(
      v13,
      v14,
      a3);
    v20 = (__int64)v14;
    v15 = a1[1];
    v16 = v12;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<std::basic_regex<unsigned short,std::regex_traits<unsigned short>> *,std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>(
        v17,
        a2,
        v12);
      v20 = (__int64)v12;
      v16 = v14 + 40;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<std::basic_regex<unsigned short,std::regex_traits<unsigned short>> *,std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>(
      v17,
      v15,
      v16);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>(
      v20,
      (__int64)(v14 + 40));
    std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>::deallocate(v19, v12, v7);
    throw;
  }
  std::vector<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>::_Change_array(a1, v12, v8, v7, v12);
  return v14;
}
