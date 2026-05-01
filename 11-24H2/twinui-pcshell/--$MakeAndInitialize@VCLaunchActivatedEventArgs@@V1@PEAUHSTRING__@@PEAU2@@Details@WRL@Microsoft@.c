/*
 * XREFs of ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x18018C5D4
 * Callers:
 *     ??R_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@QEBA@XZ @ 0x18018C538 (--R_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@QEBA@XZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CLaunchActivatedEventArgs@@QEAA@XZ @ 0x18018C694 (--0CLaunchActivatedEventArgs@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x18018C928 (-RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
        CLaunchActivatedEventArgs **a1,
        HSTRING *a2,
        HSTRING *a3)
{
  void *v6; // rax
  CLaunchActivatedEventArgs *v7; // rax
  HSTRING v8; // r8
  HSTRING v9; // rdx
  CLaunchActivatedEventArgs *v10; // rbx
  int v11; // esi
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  CLaunchActivatedEventArgs *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v6;
  if ( !v6 )
    return 2147942414LL;
  v7 = CLaunchActivatedEventArgs::CLaunchActivatedEventArgs((CLaunchActivatedEventArgs *)v6);
  v8 = *a3;
  v9 = *a2;
  v10 = v7;
  v13 = 0LL;
  v14 = v7;
  v11 = CLaunchActivatedEventArgs::RuntimeClassInitialize(v7, v9, v8);
  if ( v11 < 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v13);
    return (unsigned int)v11;
  }
  else
  {
    if ( v10 )
    {
      (*(void (__fastcall **)(CLaunchActivatedEventArgs *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      (*(void (__fastcall **)(CLaunchActivatedEventArgs *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      *a1 = 0LL;
    }
    return 0LL;
  }
}
