/*
 * XREFs of ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18007C3DC
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18007C680 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x18007D180 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 *     ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x18007F430 (-UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Window.c)
 * Callees:
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003DE1C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180066850 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@_W@std@@@std@@@std@@@-$basic_s.c)
 *     ?end@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@XZ @ 0x18006AA74 (-end@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA-AV-$_String_iterator@V-$_.c)
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x18007A284 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA-AV-$sha.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall Windows::Services::TargetedContent::Internal::GetCorrelationVector(char *a1, HSTRING a2)
{
  char *v3; // r8
  char *v4; // rdx
  const char *v5; // rax
  const char *v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  void *v9[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp-30h]
  _QWORD v11[4]; // [rsp+58h] [rbp-28h] BYREF

  v7 = a1;
  WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring((__int64)v11);
  v3 = (char *)*std::wstring::end(v11, &v8);
  v4 = (char *)v11;
  if ( v11[3] >= 8uLL )
    v4 = (char *)v11[0];
  v10 = 15LL;
  v9[2] = 0LL;
  LOBYTE(v9[0]) = 0;
  std::string::_Construct<std::_String_iterator<std::_String_val<std::_Simple_types<wchar_t>>>>(v9, v4, v3);
  v5 = (const char *)v9;
  if ( v10 >= 0x10 )
    v5 = (const char *)v9[0];
  v7 = v5;
  std::make_shared<ContentDeliveryManager::Background::CorrelationVectorWrapper,char const *>(a1, &v7);
  std::string::_Tidy(v9, 1, 0LL);
  std::wstring::_Tidy(v11, 1, 0LL);
  return a1;
}
