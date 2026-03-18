/*
 * XREFs of xxxSetWindowPosAndBand @ 0x14022F1B8
 * Callers:
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x1400F4B34 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x14017CCA8 (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1402AD498 (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall xxxSetWindowPosAndBand(struct tagWND *a1, __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  _OWORD *v11; // rax
  struct tagSMWP *v12; // rax
  _BOOL8 result; // rax

  if ( (a7 & 0x80u) != 0 && *((struct tagTHREADINFO **)a1 + 2) == PtiCurrent((__int64)a1, a2) && IsWindowGhosted(a1) )
    xxxHandleHealthyWindow(a1);
  v11 = InternalBeginDeferWindowPos(1LL, a2);
  result = 0;
  if ( v11 )
  {
    v12 = (struct tagSMWP *)_DeferWindowPos((__int64)v11, (__int64)a1, a2, a3, a4, a5, a6, a7, 0);
    if ( v12 )
    {
      if ( (unsigned int)xxxEndDeferWindowPosEx(v12, a7 & 0x4000) )
        return 1;
    }
  }
  return result;
}
