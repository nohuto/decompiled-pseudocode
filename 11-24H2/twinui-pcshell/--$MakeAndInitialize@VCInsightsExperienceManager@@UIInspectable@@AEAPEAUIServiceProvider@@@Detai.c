/*
 * XREFs of ??$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18007878C
 * Callers:
 *     ?GetExperienceManager@InsightsExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180078720 (-GetExperienceManager@InsightsExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAUIInspe.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800606C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundat.c)
 *     ??0CInsightsExperienceManager@@QEAA@XZ @ 0x18007882C (--0CInsightsExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180078904 (-RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1802200EC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Founda.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CInsightsExperienceManager,IInspectable,IServiceProvider * &>(
        _QWORD *a1,
        struct IServiceProvider **a2)
{
  CInsightsExperienceManager *v4; // rax
  CInsightsExperienceManager *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = (CInsightsExperienceManager *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return 2147942414LL;
  v5 = CInsightsExperienceManager::CInsightsExperienceManager(v4);
  v6 = CInsightsExperienceManager::RuntimeClassInitialize(v5, *a2);
  if ( v6 >= 0 )
    v6 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>>(
           v5,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a1);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release((__int64)v5);
  return (unsigned int)v6;
}
