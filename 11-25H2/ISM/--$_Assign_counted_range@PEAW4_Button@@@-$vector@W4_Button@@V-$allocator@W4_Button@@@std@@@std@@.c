/*
 * XREFs of ??$_Assign_counted_range@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEAW4_Button@@_K@Z @ 0x18019DA2C
 * Callers:
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18019E5C4 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x18009A1D8 (-_Calculate_growth@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C0DC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x18017B884 (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<enum _Button>::_Assign_counted_range<enum _Button *>(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rdi
  char *v5; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // r10
  size_t v9; // rbx
  unsigned __int64 v10; // rbp
  char *result; // rax

  v3 = *a1;
  v5 = a2;
  if ( a3 <= (a1[2] - *a1) >> 2 )
  {
    v10 = (a1[1] - v3) >> 2;
    if ( a3 <= v10 )
    {
      v9 = 4 * a3;
    }
    else
    {
      memmove_0(v3, a2, 4 * v10);
      v3 = a1[1];
      a2 = &v5[4 * v10];
      v9 = 4 * (a3 - v10);
    }
  }
  else
  {
    if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
    v7 = std::vector<Windows::UI::Color>::_Calculate_growth(a1, a3);
    if ( v3 )
    {
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(4 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    std::vector<std::pair<unsigned short,bool>>::_Buy_raw(a1, v7);
    v3 = *a1;
    v9 = 4 * a3;
    a2 = v5;
  }
  memmove_0(v3, a2, v9);
  result = &v3[v9];
  a1[1] = &v3[v9];
  return result;
}
