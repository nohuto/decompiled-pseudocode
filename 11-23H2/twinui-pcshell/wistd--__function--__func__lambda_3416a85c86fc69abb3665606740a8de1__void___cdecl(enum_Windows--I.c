/*
 * XREFs of wistd::__function::__func__lambda_3416a85c86fc69abb3665606740a8de1__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::operator() @ 0x180208F10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1800ACEF0 (-OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Hologr.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wistd::__function::__func__lambda_3416a85c86fc69abb3665606740a8de1__void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const____::operator()(
        __int64 a1,
        const enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = TouchKeyboardExperienceManager::OnHolographicDisplayChanged(*(TouchKeyboardExperienceManager **)(a1 + 8), a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14CD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
}
