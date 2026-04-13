/*
 * XREFs of ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800AF114
 * Callers:
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800ACD14 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800AEFB0 (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 * Callees:
 *     _Init_thread_footer @ 0x180023DAC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180023E1C (_Init_thread_header.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4B0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4D4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?IsContentDeliveryAllowedOverrideInEffect@ContentDeliveryManagerDebugSettings@CreativeFramework@@YA_NPEA_N@Z @ 0x1800535A4 (-IsContentDeliveryAllowedOverrideInEffect@ContentDeliveryManagerDebugSettings@CreativeFramework@.c)
 *     ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800AD8B8 (-IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 */

char __fastcall CreativeFramework::Policy::ShouldUseInternal(CreativeFramework::Policy *this)
{
  char v1; // bl
  ContentDeliveryManager::AccountTokens *v2; // rcx
  bool *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // al
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+38h] [rbp+10h] BYREF

  AcquireSRWLockShared(&stru_18017B3E0);
  v1 = 0;
  v8 = &stru_18017B3E0;
  if ( byte_18017B3E8 )
  {
    v1 = byte_18017B3E9;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
    AcquireSRWLockExclusive(&stru_18017B3E0);
    v9 = &stru_18017B3E0;
    if ( byte_18017B3E8 )
    {
      v1 = byte_18017B3E9;
    }
    else
    {
      v2 = (ContentDeliveryManager::AccountTokens *)(unsigned int)tls_index;
      if ( __TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
      {
        Init_thread_header(&__TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA);
        if ( __TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA == -1 )
        {
          LOBYTE(v8) = 0;
          if ( !CreativeFramework::ContentDeliveryManagerDebugSettings::IsContentDeliveryAllowedOverrideInEffect(
                  (CreativeFramework::ContentDeliveryManagerDebugSettings *)&v8,
                  v3,
                  v4,
                  v5)
            || (v6 = 1, (_BYTE)v8) )
          {
            v6 = 0;
          }
          `CreativeFramework::Policy::IsContentDeliveryManagerDisabledCached'::`2'::isContentDeliveryManagerDisabled = v6;
          Init_thread_footer(&__TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA);
        }
      }
      if ( !`CreativeFramework::Policy::IsContentDeliveryManagerDisabledCached'::`2'::isContentDeliveryManagerDisabled
        && ContentDeliveryManager::AccountTokens::IsMicrosoftInternalUserCached(v2) )
      {
        v1 = 1;
      }
      byte_18017B3E9 = v1;
      byte_18017B3E8 = 1;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
  }
  return v1;
}
