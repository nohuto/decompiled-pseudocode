/*
 * XREFs of ??$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@$$QEAU2@@Z @ 0x180054E14
 * Callers:
 *     ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18000B778 (-OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV-$vector@UINPUT_SPACE_PAYLOAD.c)
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18000B874 (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180054F60 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXQEAUINPUT_SPACE_PAYLOAD@@_K1@Z @ 0x180054F90 (-_Change_array@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEA.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C0DC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  signed __int64 v6; // r9
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  size_t size_of; // rax
  char *v14; // rax
  char *v15; // rdi
  char *v16; // r14
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  char *v19; // rcx
  size_t v20; // r8
  char *result; // rax
  char *v22; // [rsp+58h] [rbp+10h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = v6 / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  v9 = 0xAAAAAAAAAAAAAAALL;
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(
      a1,
      (unsigned __int128)(v6 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
      a3,
      v6);
  v10 = v8 + 1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v12 = v11 >> 1;
  if ( v11 <= 0xAAAAAAAAAAAAAAALL - (v11 >> 1) )
  {
    v9 = v12 + v11;
    if ( v12 + v11 < v10 )
      v9 = v10;
  }
  size_of = std::_Get_size_of_n<24>(v9);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v15 = v14;
  v22 = v14;
  try
  {
    v16 = &v14[24 * v7];
    *(_OWORD *)v16 = *(_OWORD *)a3;
    *((_QWORD *)v16 + 2) = *(_QWORD *)(a3 + 16);
    v17 = a1[1];
    v18 = *a1;
    v19 = v14;
    if ( a2 == v17 )
    {
      v20 = v17 - v18;
    }
    else
    {
      memmove_0(v14, v18, a2 - (_BYTE *)*a1);
      v19 = v16 + 24;
      v20 = (_BYTE *)a1[1] - a2;
      v18 = a2;
    }
    memmove_0(v19, v18, v20);
    std::vector<INPUT_SPACE_PAYLOAD>::_Change_array(a1, v15, v10, v9);
    result = v16;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(24 * v9));
    throw;
  }
  return result;
}
