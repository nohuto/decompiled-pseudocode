/*
 * XREFs of ?UpdateLinguisticDataAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801E8258
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_881d65feb2be65a54f7a8ffb02cc23bd__void___cdecl(void)_::operator() @ 0x18046F470 (wistd--__function--__func__lambda_881d65feb2be65a54f7a8ffb02cc23bd__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateLinguisticDataAvailability(TouchKeyboardExperienceManager *this)
{
  int PolicyInt; // eax
  KeyboardHosting::TabTipAdapter *v3; // rbx
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  HSTRING v7; // rdi
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  HRESULT v12; // eax
  int v13; // edx
  unsigned int v14; // r8d
  HSTRING v15; // rdi
  HRESULT v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  int v19; // eax
  int v20; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-48h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER v23; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v24; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v20 = 1;
  PolicyInt = PolicyManager_GetPolicyInt(L"TextInput", L"AllowLinguisticDataCollection", &v20);
  if ( PolicyInt < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x938,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)PolicyInt);
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( v20 != 1 )
  {
    string = 0LL;
    v4 = WindowsCreateStringReference(L"0", 1u, &hstringHeader, &string);
    if ( v4 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    }
    else
    {
      v7 = string;
      v24 = 0LL;
      v8 = WindowsCreateStringReference(L"LinguisticDataCollectionEnabled", 0x1Fu, &v23, &v24);
      if ( v8 >= 0 )
      {
        v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v24, v7);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x93E,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v11);
        return;
      }
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
    goto LABEL_16;
  }
  v24 = 0LL;
  v12 = WindowsCreateStringReference(L"1", 1u, &v23, &v24);
  if ( v12 < 0 )
  {
LABEL_16:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
    goto LABEL_17;
  }
  v15 = v24;
  string = 0LL;
  v16 = WindowsCreateStringReference(L"LinguisticDataCollectionEnabled", 0x1Fu, &hstringHeader, &string);
  if ( v16 < 0 )
  {
LABEL_17:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
    JUMPOUT(0x1801E842FLL);
  }
  v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, string, v15);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x942,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
}
