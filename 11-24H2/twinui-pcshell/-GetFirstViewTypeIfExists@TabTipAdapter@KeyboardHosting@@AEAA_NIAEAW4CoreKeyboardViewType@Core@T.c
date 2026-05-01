/*
 * XREFs of ?GetFirstViewTypeIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1800E0738
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1800E0300 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18047DA70 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapter::GetFirstViewTypeIfExists(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 9);
  v8 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *, char *))(*(_QWORD *)v3 + 136LL))(
         v3,
         a2,
         a3,
         &v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xEF,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4,
      v6);
  return v8 != 0;
}
