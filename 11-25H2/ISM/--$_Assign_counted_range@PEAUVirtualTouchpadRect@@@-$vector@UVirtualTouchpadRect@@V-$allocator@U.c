/*
 * XREFs of ??$_Assign_counted_range@PEAUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXPEAUVirtualTouchpadRect@@_K@Z @ 0x180199774
 * Callers:
 *     ??4?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180199A60 (--4-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAAEAV01@AEBV.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x180099C90 (-_Calculate_growth@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C0DC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ?_Buy_raw@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x18019A12C (-_Buy_raw@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<VirtualTouchpadRect>::_Assign_counted_range<VirtualTouchpadRect *>(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rdi
  char *v5; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // r10
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  char *result; // rax

  v3 = *a1;
  v5 = a2;
  if ( a3 <= 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3) )
  {
    v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - v3) >> 3);
    if ( a3 <= v10 )
    {
      v9 = 3 * a3;
    }
    else
    {
      memmove_0(v3, a2, 8 * ((a1[1] - v3) >> 3));
      v3 = a1[1];
      a2 = &v5[24 * v10];
      v9 = 3 * (a3 - v10);
    }
  }
  else
  {
    if ( a3 > 0xAAAAAAAAAAAAAAALL )
      std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
    v7 = std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(a1, a3);
    if ( v3 )
    {
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(24 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    std::vector<VirtualTouchpadRect>::_Buy_raw(a1, v7);
    v3 = *a1;
    v9 = 3 * a3;
    a2 = v5;
  }
  v11 = 8 * v9;
  memmove_0(v3, a2, 8 * v9);
  result = &v3[v11];
  a1[1] = &v3[v11];
  return result;
}
