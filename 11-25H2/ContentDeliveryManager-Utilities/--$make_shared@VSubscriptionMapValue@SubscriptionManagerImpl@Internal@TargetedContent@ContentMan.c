/*
 * XREFs of ??$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEBGU_FILETIME@@@std@@YA?AV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@0@$$QEAPEBG$$QEAU_FILETIME@@@Z @ 0x18005F5C8
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x1800627B0 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x18005B5EC (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 *     ?CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z @ 0x180061028 (-CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180064A20 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::make_shared<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue,unsigned short const *,_FILETIME>(
        _QWORD *a1,
        CreativeFramework::SubscribedContentStore **a2,
        __int64 *a3)
{
  _DWORD *v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  CreativeFramework::SubscribedContentStore *v9; // rdi
  void **v10; // r8

  v6 = operator new(0x38uLL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::`vftable';
    v8 = *a3;
    v9 = *a2;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v6 + 4,
      0LL);
    CreativeFramework::SubscribedContentStore::CreateSubscriptionHandle(v9, (const unsigned __int16 *)(v7 + 16), v10);
    *(_QWORD *)(v7 + 48) = v8;
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(a1, v7 + 16, v7);
  return a1;
}
