/*
 * XREFs of _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::catch$30 @ 0x1806FE686
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::catch_30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 328),
    (void *)0xB6,
    (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
    a4);
  return 0LL;
}
