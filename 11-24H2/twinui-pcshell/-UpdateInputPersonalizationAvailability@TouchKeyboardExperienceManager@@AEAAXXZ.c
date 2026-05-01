/*
 * XREFs of ?UpdateInputPersonalizationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801DE9E4
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_667fd7e99eed23067ce923c3254328c4__void___cdecl(void)_::operator() @ 0x18046F440 (wistd--__function--__func__lambda_667fd7e99eed23067ce923c3254328c4__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchKeyboardExperienceManager::UpdateInputPersonalizationAvailability(
        TouchKeyboardExperienceManager *this)
{
  int PolicyInt; // eax
  int v3; // edx
  unsigned int v4; // r8d
  int v5; // eax
  const WCHAR *v6; // rdi
  KeyboardHosting::TabTipAdapter *v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned int v9; // eax
  UINT32 v10; // edx
  HRESULT v11; // eax
  int v12; // edx
  unsigned int v13; // r8d
  HSTRING v14; // rbx
  HRESULT v15; // eax
  int v16; // edx
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-48h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER v22; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v23; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v19 = 0;
  PolicyInt = PolicyManager_GetPolicyInt(L"Privacy", L"AllowInputPersonalization", &v19);
  if ( PolicyInt < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x958,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)PolicyInt);
    v5 = 1;
    v19 = 1;
  }
  else
  {
    v5 = v19;
  }
  v6 = L"1";
  if ( v5 != 1 )
    v6 = L"0";
  v7 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  string = 0LL;
  v8 = -1LL;
  do
    ++v8;
  while ( v6[v8] );
  if ( v8 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v3, v4);
    __debugbreak();
  }
  v9 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v8, v3, v4);
  v10 = v9 - 1;
  if ( (unsigned int)v8 < v9 )
    v10 = v8;
  v11 = WindowsCreateStringReference(v6, v10, &hstringHeader, &string);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11, v12, v13);
    goto LABEL_18;
  }
  v14 = string;
  v23 = 0LL;
  v15 = WindowsCreateStringReference(L"AllowInputPersonalization", 0x19u, &v22, &v23);
  if ( v15 < 0 )
  {
LABEL_18:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15, v16, v17);
    JUMPOUT(0x1801DEB62LL);
  }
  v18 = KeyboardHosting::TabTipAdapter::SetShellPreference(v7, v23, v14);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x95E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
}
