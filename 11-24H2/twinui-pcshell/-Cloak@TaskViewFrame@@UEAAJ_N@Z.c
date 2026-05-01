/*
 * XREFs of ?Cloak@TaskViewFrame@@UEAAJ_N@Z @ 0x1806BA6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D0A88 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 */

__int64 __fastcall TaskViewFrame::Cloak(TaskViewFrame *this)
{
  __int64 *v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 72);
  try
  {
    winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEA,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
                           v2);
  }
  return result;
}
