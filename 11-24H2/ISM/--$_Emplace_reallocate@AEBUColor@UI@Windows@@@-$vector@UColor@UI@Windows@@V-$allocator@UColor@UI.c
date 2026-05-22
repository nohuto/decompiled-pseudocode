/*
 * XREFs of ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x18007376C
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086EF0 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800154A8 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAUColor@UI@Windows@@_K1@Z @ 0x180073874 (-_Change_array@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAU.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C2AC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

char *__fastcall std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>(
        const void **a1,
        _BYTE *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  size_t size_of; // rax
  char *v14; // rsi
  char *v15; // r14
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8

  v7 = (a2 - (_BYTE *)*a1) >> 2;
  v8 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v9 = 0x3FFFFFFFFFFFFFFFLL;
  if ( v8 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(a1, a2, a3, a4);
  v10 = v8 + 1;
  v11 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v12 = v11 >> 1;
  if ( v11 <= 0x3FFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v9 = v12 + v11;
    if ( v12 + v11 < v10 )
      v9 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v9);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v15 = &v14[4 * v7];
  *(_DWORD *)v15 = *a3;
  v16 = a1[1];
  v17 = *a1;
  v18 = v14;
  if ( a2 == v16 )
  {
    v19 = v16 - v17;
  }
  else
  {
    memmove_0(v14, v17, a2 - (_BYTE *)*a1);
    v18 = v15 + 4;
    v19 = (_BYTE *)a1[1] - a2;
    v17 = a2;
  }
  memmove_0(v18, v17, v19);
  std::vector<Windows::UI::Color>::_Change_array(a1, v14, v10, v9);
  return v15;
}
