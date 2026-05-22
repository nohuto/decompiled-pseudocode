/*
 * XREFs of ??$_Construct_n@AEBQEAUDisplayOcclusionRect@@AEBQEAU1@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_KAEBQEAUDisplayOcclusionRect@@1@Z @ 0x18019A318
 * Callers:
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x18019A174 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessa.c)
 * Callees:
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C0DC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??1?$_Tidy_guard@V?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAA@XZ @ 0x18019A540 (--1-$_Tidy_guard@V-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std.c)
 *     ?_Buy_raw@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x18019AC28 (-_Buy_raw@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

__int64 __fastcall std::vector<DisplayOcclusionRect>::_Construct_n<DisplayOcclusionRect * const &,DisplayOcclusionRect * const &>(
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
    if ( a2 > 0x1745D1745D1745DLL )
      std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
    std::vector<DisplayOcclusionRect>::_Buy_raw(a1, a2);
    v7 = *a4 - (_QWORD)*a3;
    v8 = (char *)*a1;
    memmove_0(*a1, *a3, v7);
    v10 = 0LL;
    a1[1] = &v8[16 * (v7 >> 4)];
    return std::_Tidy_guard<std::vector<DisplayOcclusionRect>>::~_Tidy_guard<std::vector<DisplayOcclusionRect>>(&v10);
  }
  return result;
}
