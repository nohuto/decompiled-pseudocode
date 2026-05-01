/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x1803441A0
 * Callers:
 *     ?reserve@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAX_K@Z @ 0x180361204 (-reserve@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801EF7E4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@YAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@@Z @ 0x180344634 (--$_Uninitialized_move@PEAU-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned long,std::wstring>>::_Reallocate<0>(
        _QWORD *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v7; // rdi
  size_t size_of; // rax
  void *v9; // rax
  void *v10; // rsi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  void *v13; // rdx
  _QWORD *v14; // rcx
  void *v16; // [rsp+40h] [rbp+8h]

  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 3);
  size_of = std::_Get_size_of_n<40>(*a2);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v10 = v9;
  v16 = v9;
  try
  {
    std::_Uninitialized_move<std::pair<unsigned long,std::wstring> *,std::allocator<std::pair<unsigned long,std::wstring>>>(
      *a1,
      a1[1],
      v9);
    v11 = *a2;
    v12 = v7;
    v13 = v10;
    v14 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)(40 * *a2));
    throw;
  }
  return std::vector<std::pair<unsigned long,std::wstring>>::_Change_array(v14, v13, v12, v11, a5);
}
