/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18015F14C
 * Callers:
 *     ?InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z @ 0x18015F204 (-InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180014ED8 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x18009A1D8 (-_Calculate_growth@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C0DC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  size_t size_of; // rax
  char *v7; // r14

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = std::vector<Windows::UI::Color>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<4>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memset_0(&v7[4 * v4], 0, 4 * (a2 - v4));
  memmove_0(v7, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  return std::vector<unsigned int>::_Change_array((__int64)a1, (__int64)v7, a2, v5);
}
