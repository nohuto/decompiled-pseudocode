/*
 * XREFs of ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180081270
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004AD68 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800596A4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180080A18 (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180080ADC (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180080E48 (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180081744 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800B2E90 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800B5B3C (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterTimerTrigger(__int64 *a1, __int64 *a2)
{
  __int64 (__fastcall *v4)(__int64 *, HSTRING *); // rbx
  int v5; // eax
  CreativeFramework::CommonHelper::StringUtils *StringRawBuffer; // rax
  const wchar_t *v7; // rdx
  bool v8; // r8
  DWORD dwLowDateTime; // ebx
  _QWORD *v10; // rdx
  unsigned int v11; // r8d
  PVOID Reserved1; // rdi
  unsigned int v13; // r8d
  const WCHAR *v14; // rcx
  HSTRING_HEADER *v15; // rax
  int v16; // r9d
  const char *v17; // r9
  std::_Ref_count_base *v18; // rcx
  std::_Ref_count_base *v20; // rcx
  int v21; // [rsp+20h] [rbp-108h]
  HSTRING string; // [rsp+50h] [rbp-D8h] BYREF
  const WCHAR *v23; // [rsp+58h] [rbp-D0h] BYREF
  __int64 *v24; // [rsp+60h] [rbp-C8h]
  __int64 v25; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v26[4]; // [rsp+78h] [rbp-B0h] BYREF
  _QWORD v27[4]; // [rsp+98h] [rbp-90h] BYREF
  HSTRING_HEADER v28; // [rsp+B8h] [rbp-70h] BYREF
  HSTRING_HEADER v29; // [rsp+D8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v24 = a2;
  string = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64 *, HSTRING *))(*a1 + 64);
  WindowsDeleteString(0LL);
  try
  {
    string = 0LL;
    v5 = v4(a1, &string);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1DD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v5,
        v21);
    StringRawBuffer = (CreativeFramework::CommonHelper::StringUtils *)WindowsGetStringRawBuffer(string, 0LL);
    dwLowDateTime = CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString(StringRawBuffer, v7, v8).dwLowDateTime;
    Windows::Services::TargetedContent::Internal::GetTaskOptionsFlagsForTrigger(a1);
    Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger(a1);
    Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((__int64)v27, (__int64)a1);
    v10 = v27;
    if ( v27[3] >= 8uLL )
      v10 = (_QWORD *)v27[0];
    Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v26, v10);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
      &v25,
      a2);
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)off_1800D2A30, v11)[1].Reserved.Reserved1;
    v14 = (const WCHAR *)v26;
    if ( v26[3] >= 8uLL )
      v14 = (const WCHAR *)v26[0];
    v23 = v14;
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, &v23, v13);
    CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger(
      v15[1].Reserved.Reserved1,
      (_DWORD)Reserved1,
      dwLowDateTime,
      v16);
    std::wstring::_Tidy(v26, 1, 0LL);
    std::wstring::_Tidy(v27, 1, 0LL);
    WindowsDeleteString(string);
  }
  catch ( ... )
  {
    LODWORD(string) = wil::details::in1diag3::Return_CaughtException(
                        retaddr,
                        (void *)0x1E9,
                        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
                        v17);
    v20 = (std::_Ref_count_base *)v24[1];
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    return (unsigned int)string;
  }
  string = 0LL;
  v18 = (std::_Ref_count_base *)a2[1];
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  return 0LL;
}
