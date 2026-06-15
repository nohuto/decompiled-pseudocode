/*
 * XREFs of _CExclusiveModeListener::OnHmdAdded_::_1_::catch$11 @ 0x180168BA7
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExclusiveModeListener::OnHmdAdded_::_1_::catch_11(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0xB6,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}
