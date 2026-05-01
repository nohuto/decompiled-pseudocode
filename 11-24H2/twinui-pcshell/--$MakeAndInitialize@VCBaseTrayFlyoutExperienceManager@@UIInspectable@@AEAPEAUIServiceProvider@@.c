/*
 * XREFs of ??$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG@Z @ 0x180239AE4
 * Callers:
 *     BaseTrayFlyoutExperienceManager_CreateInstance @ 0x1802AEA88 (BaseTrayFlyoutExperienceManager_CreateInstance.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$CopyTo@UIInspectable@@@?$ComPtr@VCBaseTrayFlyoutExperienceManager@@@WRL@Microsoft@@QEBAJPEAPEAUIInspectable@@@Z @ 0x1803C723C (--$CopyTo@UIInspectable@@@-$ComPtr@VCBaseTrayFlyoutExperienceManager@@@WRL@Microsoft@@QEBAJPEAPE.c)
 *     ??0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z @ 0x1803C77F0 (--0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z.c)
 *     ?Attach@?$ComPtr@VPWSLayoutPolicyManager@@@WRL@Microsoft@@QEAAXPEAVPWSLayoutPolicyManager@@@Z @ 0x1803C82CC (-Attach@-$ComPtr@VPWSLayoutPolicyManager@@@WRL@Microsoft@@QEAAXPEAVPWSLayoutPolicyManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager,IInspectable,IServiceProvider * &,unsigned short const * &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  CBaseTrayFlyoutExperienceManager *v6; // rax
  int v7; // edx
  int v8; // r8d
  CBaseTrayFlyoutExperienceManager *v10; // rax
  int v11; // ebx
  CBaseTrayFlyoutExperienceManager *v12; // [rsp+30h] [rbp+8h] BYREF
  void *v13; // [rsp+48h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (CBaseTrayFlyoutExperienceManager *)operator new(0x1E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v6;
  if ( !v6 )
    return 2147942414LL;
  v10 = CBaseTrayFlyoutExperienceManager::CBaseTrayFlyoutExperienceManager(v6, v7, v8);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<PWSLayoutPolicyManager>::Attach(&v12, v10);
  v13 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CBaseTrayFlyoutExperienceManager *, _QWORD, _QWORD))(*(_QWORD *)v12 + 80LL))(
          v12,
          *a2,
          *a3);
  if ( v11 >= 0 )
    v11 = Microsoft::WRL::ComPtr<CBaseTrayFlyoutExperienceManager>::CopyTo<IInspectable>(&v12, a1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v13);
  return (unsigned int)v11;
}
