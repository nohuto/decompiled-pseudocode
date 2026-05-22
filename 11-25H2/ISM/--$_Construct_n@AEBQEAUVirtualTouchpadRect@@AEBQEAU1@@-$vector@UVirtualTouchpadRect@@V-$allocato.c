/*
 * XREFs of ??$_Construct_n@AEBQEAUVirtualTouchpadRect@@AEBQEAU1@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_KAEBQEAUVirtualTouchpadRect@@1@Z @ 0x180199888
 * Callers:
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801996D4 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessag.c)
 * Callees:
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C0DC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??1?$_Tidy_guard@V?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@@std@@QEAA@XZ @ 0x180199A08 (--1-$_Tidy_guard@V-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@.c)
 *     ?_Buy_raw@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x18019A12C (-_Buy_raw@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

__int64 __fastcall std::vector<VirtualTouchpadRect>::_Construct_n<VirtualTouchpadRect * const &,VirtualTouchpadRect * const &>(
        void **a1,
        unsigned __int64 a2,
        const void **a3,
        _QWORD *a4)
{
  signed __int64 v7; // rbx
  char *v8; // rdi
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0xAAAAAAAAAAAAAAALL )
      std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
    std::vector<VirtualTouchpadRect>::_Buy_raw(a1, a2);
    v7 = *a4 - (_QWORD)*a3;
    v8 = (char *)*a1;
    memmove_0(*a1, *a3, v7);
    v10 = 0LL;
    a1[1] = &v8[8 * (v7 >> 3)];
    return std::_Tidy_guard<std::vector<VirtualTouchpadRect>>::~_Tidy_guard<std::vector<VirtualTouchpadRect>>(&v10);
  }
  return result;
}
