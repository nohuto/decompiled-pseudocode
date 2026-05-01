/*
 * XREFs of _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig_::_1_::catch$5 @ 0x180043562
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000EFB4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 216),
                           (void *)0x198,
                           (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
                           a4);
  return 0LL;
}
