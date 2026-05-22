/*
 * XREFs of ??$_Emplace_reallocate@AEAPEBGAEA_K@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEAPEBGAEA_K@Z @ 0x1800CB57C
 * Callers:
 *     ?GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800CBA3C (-GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV-$vector@V-$basic.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x180028AB0 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C2AC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800CB77C (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1800CB7F0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800CBD28 (-_Calculate_growth@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$all.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x1800CBD64 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

char *__fastcall std::vector<std::wstring>::_Emplace_reallocate<unsigned short const * &,unsigned __int64 &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  size_t size_of; // rax
  char *v11; // rdi
  char *v12; // rsi
  __int64 v13; // rdx
  char *v14; // r8
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<std::wstring>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<32>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[v6 & 0xFFFFFFFFFFFFFFE0uLL];
  try
  {
    std::wstring::wstring(v12, *a3, *a4);
    v18 = (__int64)v12;
    v13 = a1[1];
    v14 = v11;
    v15 = *a1;
    if ( a2 != v13 )
    {
      std::_Uninitialized_move<std::wstring *>(v15, a2, v11);
      v18 = (__int64)v11;
      v14 = v12 + 32;
      v13 = a1[1];
      v15 = a2;
    }
    std::_Uninitialized_move<std::wstring *>(v15, v13, v14);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v18, (__int64)(v12 + 32));
    std::allocator<std::wstring>::deallocate(v17, v11, v9);
    throw;
  }
  std::vector<std::wstring>::_Change_array(a1, v11, v8, v9, v9, v11);
  return v12;
}
