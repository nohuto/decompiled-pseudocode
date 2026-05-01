/*
 * XREFs of _AppViewIconLoader::IconLoadedInternal_::_1_::catch$4 @ 0x180648434
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewIconLoader::IconLoadedInternal_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x3E,
                            (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
                            a4);
  return 0LL;
}
