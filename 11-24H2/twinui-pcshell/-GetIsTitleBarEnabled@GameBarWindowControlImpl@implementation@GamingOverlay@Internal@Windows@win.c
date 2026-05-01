/*
 * XREFs of ?GetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_NUread_lock_required@wil@@@Z @ 0x18036352C
 * Callers:
 *     ?IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NXZ @ 0x180363A60 (-IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@W_ea_180363A60.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetIsTitleBarEnabled(
        __int64 a1)
{
  __int64 v1; // r8
  int v2; // eax
  int v3; // eax
  int v4; // eax
  bool v5; // bl
  int v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    v9 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 32LL))(v1, &v9);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2A5,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v2,
        v7);
    v8 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 144LL))(v9, &v8);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2A7,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v3,
        v7);
    v7 = 1;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 40LL))(v8, &v7);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2A9,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v4,
        v7);
    v5 = v7 != 0;
    if ( v8 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v8);
    if ( v9 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
    return v5;
  }
  else if ( *(_BYTE *)(a1 + 157) )
  {
    return *(_BYTE *)(a1 + 156);
  }
  else
  {
    return 1;
  }
}
