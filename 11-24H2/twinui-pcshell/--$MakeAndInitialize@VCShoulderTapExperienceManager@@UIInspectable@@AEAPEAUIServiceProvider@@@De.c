/*
 * XREFs of ??$MakeAndInitialize@VCShoulderTapExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180209C1C
 * Callers:
 *     ?GetExperienceManager@ShoulderTapExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180209BD0 (-GetExperienceManager@ShoulderTapExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIIn.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?QueryInterface@CShoulderTapExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BC680 (-QueryInterface@CShoulderTapExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802AA9B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CShoulderTapExperienceManager@@QEAA@XZ @ 0x18038C154 (--0CShoulderTapExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18038D600 (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CShoulderTapExperienceManager,IInspectable,IServiceProvider * &>(
        void **a1,
        struct IServiceProvider **a2)
{
  void *v4; // rax
  CShoulderTapExperienceManager *v6; // rbx
  int Interface; // edi
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CShoulderTapExperienceManager *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = CShoulderTapExperienceManager::CShoulderTapExperienceManager((CShoulderTapExperienceManager *)v4);
  v9 = v6;
  v8 = 0LL;
  Interface = CShoulderTapExperienceManager::RuntimeClassInitialize(v6, *a2);
  if ( Interface >= 0 )
    Interface = CShoulderTapExperienceManager::QueryInterface(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a1);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v6);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return (unsigned int)Interface;
}
