/*
 * XREFs of ??$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180144918
 * Callers:
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801448D0 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspe.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperien.c)
 *     ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x180060774 (--0CJumpViewExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801449D0 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801892F0 (-QueryInterface@CJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CJumpViewExperienceManager,IInspectable,IServiceProvider * &>(
        void **a1,
        struct IServiceProvider **a2)
{
  void *v4; // rax
  CJumpViewExperienceManager *v6; // rbx
  int Interface; // edi
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CJumpViewExperienceManager *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x3A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = CJumpViewExperienceManager::CJumpViewExperienceManager((CJumpViewExperienceManager *)v4);
  v9 = v6;
  v8 = 0LL;
  Interface = CJumpViewExperienceManager::RuntimeClassInitialize(v6, *a2);
  if ( Interface >= 0 )
  {
    Interface = CJumpViewExperienceManager::QueryInterface(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a1);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::Release((__int64)v6);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  }
  else if ( v6 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::Release((__int64)v6);
  }
  return (unsigned int)Interface;
}
