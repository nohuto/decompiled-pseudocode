/*
 * XREFs of ?WorkAreaMayHaveChanged@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1803C1760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1802458B4 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$T@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEB$$T@Z @ 0x1803D4CA8 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$T@-$event@U-$TypedEventHandler@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::WorkAreaMayHaveChanged(UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // edi
  float v5; // xmm0_4
  float v6; // xmm1_4
  __int64 v7; // rdx
  float v8[4]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
         *((_QWORD *)this + 11),
         *((_QWORD *)this + 7)) )
  {
    v2 = UndockedSearchAppExperienceManager::PositionSearchAppWindow(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    v5 = *((float *)this + 32);
    v6 = *((float *)this + 33);
    v9[0] = (int)v5;
    v9[1] = (int)v6;
    v9[2] = (int)(float)(v5 + *((float *)this + 34));
    v9[3] = (int)(float)(v6 + *((float *)this + 35));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 12) + 40LL))(
           *((_QWORD *)this + 12),
           v9) )
    {
      (*(void (__fastcall **)(_QWORD, float *, _DWORD *))(**((_QWORD **)this + 12) + 16LL))(
        *((_QWORD *)this + 12),
        v8,
        v9);
      v7 = (*((_QWORD *)this + 21) - 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 21) >> 64);
      *(double *)(v7 + 176) = v8[0];
      winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>::operator()<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,std::nullptr_t>(v7 + 128);
    }
  }
  return 0LL;
}
