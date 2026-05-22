/*
 * XREFs of ??$_Emplace_reallocate@PEAG@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAPEAG@Z @ 0x1800CB684
 * Callers:
 *     ?GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800CBA3C (-GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV-$vector@V-$basic.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x180028AB0 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C2AC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800CB77C (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Calculate_growth@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800CBD28 (-_Calculate_growth@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$all.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x1800CBD64 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

__int64 __fastcall std::vector<std::wstring>::_Emplace_reallocate<unsigned short *>(
        __int64 *a1,
        __int64 a2,
        _WORD **a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  size_t size_of; // rax
  void *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  void *v13; // r8
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+78h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v18 = v7 + 1;
  v8 = std::vector<std::wstring>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<32>(v8);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = (__int64)v10 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  try
  {
    std::wstring::wstring(v11, *a3);
    v17 = v11;
    v12 = a1[1];
    v13 = v10;
    v14 = *a1;
    if ( a2 != v12 )
    {
      std::_Uninitialized_move<std::wstring *>(v14, a2, v10);
      v17 = (__int64)v10;
      v13 = (void *)(v11 + 32);
      v12 = a1[1];
      v14 = a2;
    }
    std::_Uninitialized_move<std::wstring *>(v14, v12, v13);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v17, v11 + 32);
    std::allocator<std::wstring>::deallocate(v16, v10, v8);
    throw;
  }
  std::vector<std::wstring>::_Change_array(a1, v10, v18, v8, v8, v10);
  return v11;
}
