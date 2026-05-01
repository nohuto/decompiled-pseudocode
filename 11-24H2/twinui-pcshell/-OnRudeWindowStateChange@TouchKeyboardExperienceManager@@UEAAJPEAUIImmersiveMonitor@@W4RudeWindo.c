/*
 * XREFs of ?OnRudeWindowStateChange@TouchKeyboardExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z @ 0x18003DD40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnRudeWindowStateChange(__int64 a1, int a2, char a3)
{
  KeyboardHosting::TabTipAdapter *v3; // rsi
  const WCHAR *v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned int v6; // eax
  UINT32 v7; // edx
  HRESULT v8; // eax
  int v9; // edx
  char v10; // r8
  HSTRING v11; // rbx
  HRESULT v12; // eax
  int v13; // edx
  char v14; // r8
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-58h] BYREF
  HSTRING string; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v20; // [rsp+40h] [rbp-38h] BYREF
  HSTRING v21; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *(KeyboardHosting::TabTipAdapter **)(a1 + 416);
  if ( v3 )
  {
    string = 0LL;
    v4 = L"1";
    if ( (a3 & 1) == 0 )
      v4 = L"0";
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
    if ( v5 <= 0xFFFFFFFF )
    {
      v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v5, a2, a3);
      v7 = v6 - 1;
      if ( (unsigned int)v5 < v6 )
        v7 = v5;
      v8 = WindowsCreateStringReference(v4, v7, &hstringHeader, &string);
      if ( v8 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
      }
      else
      {
        v11 = string;
        v21 = 0LL;
        v12 = WindowsCreateStringReference(L"FullScreenMode", 0xEu, &v20, &v21);
        if ( v12 >= 0 )
        {
          v15 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v21, v11);
          v16 = retaddr;
          if ( v15 >= 0 )
            return 0LL;
LABEL_14:
          wil::details::in1diag3::_Log_Hr(
            v16,
            (void *)0x13CF,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v15);
          return 0LL;
        }
      }
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
      JUMPOUT(0x18003DE79LL);
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    goto LABEL_14;
  }
  return 0LL;
}
