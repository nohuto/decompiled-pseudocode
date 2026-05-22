/*
 * XREFs of ??$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAPEAUVirtualTouchpadRect@@QEAU2@AEBU2@@Z @ 0x18013AF1C
 * Callers:
 *     ??$emplace@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@AEBUVirtualTouchpadRect@@@Z @ 0x18013B074 (--$emplace@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpa.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801A137C (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180054DB0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x180099E60 (-_Calculate_growth@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C2AC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

char *__fastcall std::vector<VirtualTouchpadRect>::_Emplace_reallocate<VirtualTouchpadRect const &>(
        char **a1,
        char *a2,
        __int64 a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  size_t size_of; // rax
  char *v11; // rax
  char *v12; // rdi
  char *v13; // r14
  char *v14; // r8
  char *v15; // rdx
  char *v16; // rcx
  size_t v17; // r8
  char *result; // rax
  char *v19; // [rsp+58h] [rbp+10h]

  v6 = (a2 - *a1) / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(a1, v8);
  size_of = std::_Get_size_of_n<24>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v19 = v11;
  try
  {
    v13 = &v11[24 * v6];
    *(_OWORD *)v13 = *(_OWORD *)a3;
    *((_QWORD *)v13 + 2) = *(_QWORD *)(a3 + 16);
    v14 = a1[1];
    v15 = *a1;
    v16 = v11;
    if ( a2 == v14 )
    {
      v17 = v14 - v15;
    }
    else
    {
      memmove_0(v11, v15, a2 - *a1);
      v16 = v13 + 24;
      v17 = a1[1] - a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    if ( *a1 )
      std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)(8 * ((a1[2] - *a1) >> 3)));
    *a1 = v12;
    a1[1] = &v12[24 * v8];
    a1[2] = &v12[24 * v9];
    result = v13;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(24 * v9));
    throw;
  }
  return result;
}
