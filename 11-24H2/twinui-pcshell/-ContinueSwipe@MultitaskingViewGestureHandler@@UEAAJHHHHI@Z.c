/*
 * XREFs of ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1801804F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x180180264 (-ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaski.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1801805BC (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x180180678 (-ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 *     ?ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18049F9E0 (-ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ContinueSwipe(
        MultitaskingViewGestureHandler *this,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  MultitaskingViewGestureHandler *v9; // rsi
  int MultitaskingViewState; // ebx
  __int64 v11; // rdx
  MultitaskingViewGestureHandler *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v15; // [rsp+30h] [rbp+8h] BYREF
  int v16; // [rsp+34h] [rbp+Ch]

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), 2LL);
  *((_DWORD *)this + 30) += a2;
  *((_DWORD *)this + 31) += a3;
  v9 = (MultitaskingViewGestureHandler *)((char *)this - 8);
  v16 = 0;
  v15 = 0;
  MultitaskingViewState = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                            v9,
                            (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v15);
  if ( MultitaskingViewState < 0 )
  {
    v11 = 115LL;
    goto LABEL_5;
  }
  if ( (v16 & 1) != 0
    || MultitaskingViewGestureHandler::ShouldProcessHorizontalGestureInput(v9)
    || MultitaskingViewGestureHandler::ShouldProcessVerticalGestureInput(v13) )
  {
    MultitaskingViewState = MultitaskingViewGestureHandler::ProcessTouchpadGestureInput(
                              (__int64)v9,
                              2,
                              (__int64)&v15,
                              a6);
    if ( MultitaskingViewState < 0 )
    {
      v11 = 118LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)MultitaskingViewState);
      return (unsigned int)MultitaskingViewState;
    }
  }
  return 0LL;
}
