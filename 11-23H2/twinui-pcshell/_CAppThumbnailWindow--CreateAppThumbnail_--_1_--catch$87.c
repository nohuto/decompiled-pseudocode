/*
 * XREFs of _CAppThumbnailWindow::CreateAppThumbnail_::_1_::catch$87 @ 0x1805568CF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAppThumbnailWindow::CreateAppThumbnail_::_1_::catch_87(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 152) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 344),
                            (void *)0x248,
                            (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                            a4);
  return 0LL;
}
