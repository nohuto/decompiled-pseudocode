/*
 * XREFs of ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@V?$initializer_list@W4_Button@@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x18019E308
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x18019F29C (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C0DC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x18017B884 (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@std@@QEAA@XZ @ 0x18019E480 (--1-$_Tidy_guard@V-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@@std@@QEAA@XZ.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

void **__fastcall std::vector<enum _Button>::vector<enum _Button>(void **a1, __int64 a2, __int64 a3)
{
  const void *v3; // r14
  __int64 v5; // rbp
  signed __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  char *v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(const void **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  *a1 = 0LL;
  v6 = v5 - (_QWORD)v3;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v7 = v6 >> 2;
  if ( v6 >> 2 )
  {
    if ( v7 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
    std::vector<std::pair<unsigned short,bool>>::_Buy_raw(a1, v6 >> 2);
    v8 = (char *)*a1;
    memmove_0(*a1, v3, v6);
    v10 = 0LL;
    a1[1] = &v8[4 * v7];
    std::_Tidy_guard<std::vector<enum _Button>>::~_Tidy_guard<std::vector<enum _Button>>(&v10);
  }
  return a1;
}
