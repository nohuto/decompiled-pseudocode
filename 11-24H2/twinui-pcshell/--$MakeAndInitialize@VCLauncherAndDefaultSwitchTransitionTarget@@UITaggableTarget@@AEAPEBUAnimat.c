/*
 * XREFs of ??$MakeAndInitialize@VCLauncherAndDefaultSwitchTransitionTarget@@UITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUITaggableTarget@@AEAPEBUAnimationPassState@@AEAK@Z @ 0x1804E5C48
 * Callers:
 *     CAppTransitionTarget_CreateInstance @ 0x1804E7E4C (CAppTransitionTarget_CreateInstance.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CAppTransitionTargetBase@@QEAA@XZ @ 0x1804E5DC8 (--0CAppTransitionTargetBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLauncherAndDefaultSwitchTransitionTarget,ITaggableTarget,AnimationPassState const * &,unsigned long &>(
        _QWORD *a1,
        _OWORD **a2,
        int *a3)
{
  char *v6; // rax
  char *v7; // rbx
  unsigned int v8; // edi
  _OWORD *v9; // rax
  int v10; // edx
  __int128 v11; // xmm1
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (char *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v6;
  v7 = v6;
  if ( v6 )
  {
    CAppTransitionTargetBase::CAppTransitionTargetBase((CAppTransitionTargetBase *)v6);
    v13 = 0LL;
    *(_QWORD *)v7 = &CLauncherAndDefaultSwitchTransitionTarget::`vftable'{for `ITaggableTarget'};
    *((_QWORD *)v7 + 1) = &CAppTransitionTargetBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
    v9 = *a2;
    v10 = *a3;
    *(_OWORD *)(v7 + 136) = **a2;
    v11 = v9[1];
    *((_DWORD *)v7 + 42) = v10;
    *(_OWORD *)(v7 + 152) = v11;
    v8 = ((__int64 (__fastcall *)(char *, GUID *, _QWORD *))CLauncherAndDefaultSwitchTransitionTarget::`vftable'{for `ITaggableTarget'})(
           v7,
           &GUID_42b028e4_80cd_42b1_b817_0191712101d7,
           a1);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v13);
  return v8;
}
