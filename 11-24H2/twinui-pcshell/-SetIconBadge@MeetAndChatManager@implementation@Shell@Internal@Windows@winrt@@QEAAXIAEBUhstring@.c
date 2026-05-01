/*
 * XREFs of ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1805F5D74
 * Callers:
 *     ?SetIconBadge@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x1805F5D40 (-SetIconBadge@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetA.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18018E184 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180232DC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$IconBadgeChanged@AEBIPEBG@MeetAndChatTelemetry@@SAXAEBI$$QEAPEBG@Z @ 0x1805F13AC (--$IconBadgeChanged@AEBIPEBG@MeetAndChatTelemetry@@SAXAEBI$$QEAPEBG@Z.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F3C08 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1805F79C0 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SetIconBadge(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        unsigned int a2,
        const struct winrt::hstring *a3,
        __int64 a4)
{
  wil *v7; // rcx
  void *v8; // r9
  int v9; // eax
  const WCHAR *v10; // rax
  bool v11; // bl
  const unsigned __int16 *v12; // rax
  int v13; // r9d
  int v14; // eax
  const WCHAR *v15; // r8
  LPCWCH *v16; // r8
  int v17; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-D8h]
  struct _WNF_STATE_NAME v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  RTL_SRWLOCK v23; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v24; // [rsp+50h] [rbp-B0h]
  LPCWCH lpString2[3]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-90h]
  WCHAR String1[128]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v21 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MNIB>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_MNIB>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)this, &v23);
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)v23.Ptr + 48LL))(v23.Ptr);
  memset_0(String1, 0, sizeof(String1));
  v9 = wil::wnf_query_nothrow(
         v7,
         &v20,
         (bool *)String1,
         v8,
         (unsigned __int64)&v22,
         v19,
         *(struct wil::WNF_CHANGE_STAMP_STRUCT **)&v20);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5F,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v9,
      bIgnoreCase);
  if ( *(_QWORD *)a3 )
  {
    v10 = winrt::hstring::c_str(a3);
    v11 = CompareStringOrdinal(String1, -1, v10, -1, 1) != 2;
    v12 = winrt::hstring::c_str(a3);
    v14 = RtlPublishWnfStateData(WNF_SHEL_CHAT_ICON_BADGE, 0LL, v12, (unsigned int)(2 * v13 + 2)) | 0x10000000;
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6D,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v14,
        0);
  }
  else
  {
    std::to_wstring(lpString2, a2);
    v15 = (const WCHAR *)lpString2;
    if ( v26 > 7 )
      v15 = lpString2[0];
    v11 = CompareStringOrdinal(String1, -1, v15, -1, 1) != 2;
    v16 = lpString2;
    if ( v26 > 7 )
      v16 = (LPCWCH *)lpString2[0];
    v17 = RtlPublishWnfStateData(WNF_SHEL_CHAT_ICON_BADGE, 0LL, v16, 2 * (__int64)lpString2[2] + 2) | 0x10000000;
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x76,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v17,
        0);
    std::wstring::_Tidy_deallocate((void **)lpString2);
  }
  if ( v11 )
  {
    v22 = (unsigned __int64)winrt::hstring::c_str(a3);
    MeetAndChatTelemetry::IconBadgeChanged<unsigned int const &,unsigned short const *>((int *)&v21, (__int64 *)&v22);
  }
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
}
