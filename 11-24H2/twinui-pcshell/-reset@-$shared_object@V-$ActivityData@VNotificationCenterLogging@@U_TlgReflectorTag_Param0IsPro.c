/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E68C0
 * Callers:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18003E340 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaiseHideExperienceRequestedEvent@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x1800E6568 (-RaiseHideExperienceRequestedEvent@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E6820 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E6C60 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801A7628 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180230424 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 * Callees:
 *     ??1?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802CABE0 (--1-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 2);
        operator delete((void *)v3, (const struct std::nothrow_t *)0x110);
      }
    }
    *a1 = 0LL;
  }
}
