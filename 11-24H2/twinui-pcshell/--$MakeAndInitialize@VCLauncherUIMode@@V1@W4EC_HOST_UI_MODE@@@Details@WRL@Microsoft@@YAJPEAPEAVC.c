/*
 * XREFs of ??$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJPEAPEAVCLauncherUIMode@@$$QEAW4EC_HOST_UI_MODE@@@Z @ 0x1803A143C
 * Callers:
 *     ??$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCLauncherUIMode@@@WRL@Microsoft@@@012@$$QEAW4EC_HOST_UI_MODE@@@Z @ 0x1803A14E0 (--$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV-$ComPt.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E290 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CLauncherUIMode@@QEAA@XZ @ 0x1803A1C60 (--0CLauncherUIMode@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLauncherUIMode,CLauncherUIMode,enum EC_HOST_UI_MODE>(
        CLauncherUIMode **a1,
        _DWORD *a2)
{
  unsigned int v4; // ebx
  void *v5; // rax
  CLauncherUIMode *v6; // rdi
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  CLauncherUIMode *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    v6 = CLauncherUIMode::CLauncherUIMode((CLauncherUIMode *)v5);
    v9 = v6;
    v8 = 0LL;
    *((_DWORD *)v6 + 37) = *a2;
    *((_DWORD *)v6 + 36) = 0;
    if ( v6 )
      (*(void (__fastcall **)(CLauncherUIMode *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return v4;
}
