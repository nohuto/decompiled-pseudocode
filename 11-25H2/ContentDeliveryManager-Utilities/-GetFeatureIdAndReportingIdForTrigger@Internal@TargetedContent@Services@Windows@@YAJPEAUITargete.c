/*
 * XREFs of ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x1800805D0
 * Callers:
 *     ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180081D40 (-SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedCon.c)
 *     ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180081F20 (-UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x18008229C (-stoi@std@@YAHAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
        Windows::Services::TargetedContent::Internal *this,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a2,
        unsigned int *a3,
        unsigned __int16 *a4)
{
  __int64 (__fastcall *v7)(Windows::Services::TargetedContent::Internal *, HSTRING *); // rbx
  int v8; // eax
  __int64 (__fastcall *v9)(Windows::Services::TargetedContent::Internal *, HSTRING *); // rbx
  int v10; // eax
  HSTRING v12; // [rsp+20h] [rbp-58h] BYREF
  HSTRING string; // [rsp+28h] [rbp-50h] BYREF
  wchar_t String[16]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  string = 0LL;
  v7 = *(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, HSTRING *))(*(_QWORD *)this + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = v7(this, &string);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x212,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8,
      (int)v12);
  if ( WindowsIsStringEmpty(string) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)0x80070057LL,
      (int)v12);
  v12 = 0LL;
  v9 = *(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, HSTRING *))(*(_QWORD *)this + 96LL);
  WindowsDeleteString(0LL);
  v12 = 0LL;
  v10 = v9(this, &v12);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x215,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v10,
      (int)v12);
  if ( WindowsIsStringEmpty(v12) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)0x80070057LL,
      (int)v12);
  WindowsGetStringRawBuffer(string, 0LL);
  std::wstring::wstring((__int64)String);
  *(_DWORD *)a2 = std::stoi(String);
  std::wstring::_Tidy(String, 1, 0LL);
  WindowsGetStringRawBuffer(v12, 0LL);
  std::wstring::wstring((__int64)String);
  *(_WORD *)a3 = std::stoi(String);
  std::wstring::_Tidy(String, 1, 0LL);
  WindowsDeleteString(v12);
  v12 = 0LL;
  WindowsDeleteString(string);
  return 0LL;
}
