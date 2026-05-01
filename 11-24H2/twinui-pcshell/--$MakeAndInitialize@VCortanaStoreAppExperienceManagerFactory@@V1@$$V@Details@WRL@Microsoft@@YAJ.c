/*
 * XREFs of ??$MakeAndInitialize@VCortanaStoreAppExperienceManagerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCortanaStoreAppExperienceManagerFactory@@@Z @ 0x180176DBC
 * Callers:
 *     ??$CreateClassFactory@VCortanaStoreAppExperienceManagerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180176CF0 (--$CreateClassFactory@VCortanaStoreAppExperienceManagerFactory@@@Details@WRL@Microsoft@@YAJPEAIP.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0CortanaStoreAppExperienceManagerFactory@@QEAA@XZ @ 0x180176E48 (--0CortanaStoreAppExperienceManagerFactory@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CortanaStoreAppExperienceManagerFactory,CortanaStoreAppExperienceManagerFactory,>(
        CortanaStoreAppExperienceManagerFactory **a1)
{
  void *v2; // rax
  CortanaStoreAppExperienceManagerFactory *v4; // rax
  CortanaStoreAppExperienceManagerFactory *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = CortanaStoreAppExperienceManagerFactory::CortanaStoreAppExperienceManagerFactory((CortanaStoreAppExperienceManagerFactory *)v2);
    v5 = v4;
    if ( v4 )
      (*(void (__fastcall **)(CortanaStoreAppExperienceManagerFactory *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(CortanaStoreAppExperienceManagerFactory *))(*(_QWORD *)v5 + 16LL))(v5);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
    return 2147942414LL;
  }
}
