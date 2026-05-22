/*
 * XREFs of ??$_Assign_counted_range@PEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXPEAUDisplayOcclusionRect@@_K@Z @ 0x18019A214
 * Callers:
 *     ??4?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18019A588 (--4-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAV01@AE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C0DC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ?_Calculate_growth@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEBA_K_K@Z @ 0x180138C14 (-_Calculate_growth@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@st.c)
 *     ?_Buy_raw@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x18019AC28 (-_Buy_raw@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<DisplayOcclusionRect>::_Assign_counted_range<DisplayOcclusionRect *>(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rdi
  unsigned __int64 v4; // r14
  char *v5; // r15
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned __int64 v9; // rbp
  char *result; // rax

  v3 = *a1;
  v4 = a3;
  v5 = a2;
  if ( a3 <= 0x2E8BA2E8BA2E8BA3LL * ((a1[2] - *a1) >> 4) )
  {
    v9 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - v3) >> 4);
    if ( a3 > v9 )
    {
      memmove_0(v3, a2, 16 * ((a1[1] - v3) >> 4));
      v3 = a1[1];
      a2 = &v5[176 * v9];
      v4 -= v9;
    }
  }
  else
  {
    if ( a3 > 0x1745D1745D1745DLL )
      std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
    v7 = std::vector<DisplayOcclusionRect>::_Calculate_growth(a1, a3);
    if ( v3 )
    {
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(176 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    std::vector<DisplayOcclusionRect>::_Buy_raw(a1, v7);
    v3 = *a1;
    a2 = v5;
  }
  memmove_0(v3, a2, 176 * v4);
  result = &v3[176 * v4];
  a1[1] = result;
  return result;
}
