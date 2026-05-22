/*
 * XREFs of ??$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x180079AFC
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180032680 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18003B92C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEAAXQEAU?$pair@KPEAUIInputProcessor@@@2@_K1@Z @ 0x180079BF4 (-_Change_array@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInputProc.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x18009A19C (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor *>(
        const void **a1,
        _BYTE *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  signed __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // r15
  size_t size_of; // rax
  char *v12; // rax
  char *v13; // rsi
  char *v14; // rdi
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8
  char *result; // rax
  char *v20; // [rsp+68h] [rbp+10h]

  v7 = a2 - (_BYTE *)*a1;
  v8 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v8 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v8 + 1);
  size_of = std::_Get_size_of_n<16>(v10);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v20 = v12;
  try
  {
    v14 = &v12[v7 & 0xFFFFFFFFFFFFFFF0uLL];
    *(_DWORD *)v14 = *a3;
    *((_QWORD *)v14 + 1) = *a4;
    v15 = a1[1];
    v16 = *a1;
    v17 = v12;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v12, v16, a2 - (_BYTE *)*a1);
      v17 = v14 + 16;
      v18 = (_BYTE *)a1[1] - a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    std::vector<std::pair<unsigned long,IInputProcessor *>>::_Change_array(a1, v13, v9, v10);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(16 * v10));
    throw;
  }
  return result;
}
