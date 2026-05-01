/*
 * XREFs of ??$MakeAndInitialize@VSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1803AA404
 * Callers:
 *     ?GetExperienceManager@SearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1803AAC90 (-GetExperienceManager@SearchAppExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInsp.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180377AE8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperien.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18037C9B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICor_ea_18037C9B0.c)
 *     ??0SearchAppExperienceManager@@QEAA@XZ @ 0x1803AA6C4 (--0SearchAppExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803AB510 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SearchAppExperienceManager,IInspectable,IServiceProvider * &>(
        _QWORD *a1,
        struct IServiceProvider **a2)
{
  void *v4; // rax
  int v5; // edi
  SearchAppExperienceManager *v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  SearchAppExperienceManager *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x228uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v6 = SearchAppExperienceManager::SearchAppExperienceManager((SearchAppExperienceManager *)v4);
    v9 = v6;
    v8 = 0LL;
    v5 = SearchAppExperienceManager::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>>(
             (__int64)v6,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a1);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release((__int64)v6);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return (unsigned int)v5;
}
