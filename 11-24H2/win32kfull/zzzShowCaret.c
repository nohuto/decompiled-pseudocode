/*
 * XREFs of zzzShowCaret @ 0x1400952E0
 * Callers:
 *     NtUserShowCaret @ 0x140095090 (NtUserShowCaret.c)
 *     xxxEndScroll @ 0x1402E6AC0 (xxxEndScroll.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x140035B94 (zzzInternalShowCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x140095308 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall zzzShowCaret(struct tagWND *a1)
{
  __int64 result; // rax

  result = UT_CaretSet(a1);
  if ( (_DWORD)result )
  {
    zzzInternalShowCaret();
    return 1LL;
  }
  return result;
}
