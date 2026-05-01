/*
 * XREFs of ??$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x180061B14
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x1802B225C (--$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180061920 (-InternalRelease@-$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180061B00 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIconLoa.c)
 *     ?RuntimeClassInitialize@AppViewIconLoader@@QEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Z @ 0x180061C88 (-RuntimeClassInitialize@AppViewIconLoader@@QEAAJUIconProperties@Multitasking@ComposableShell@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewIconLoader,AppViewIconLoader,Windows::Internal::ComposableShell::Multitasking::IconProperties &,IApplicationView *,Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *,IApplicationViewIconLoader *>(
        __int64 *a1,
        _OWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5)
{
  void *v9; // rax
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rdx
  volatile int *v13; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF
  void *v19; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v9;
  v19 = v9;
  if ( !v9 )
    return (unsigned int)-2147024882;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>((__int64)v9);
  *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IApplicationViewIconLoaderNotifications>::`vftable';
  *(_QWORD *)(v10 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IApplicationViewIconLoaderNotifications>::`vftable'{for `IApplicationViewIconLoaderNotifications'};
  *(_QWORD *)(v10 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IApplicationViewIconLoaderNotifications>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v10 = &AppViewIconLoader::`vftable';
  *(_QWORD *)(v10 + 8) = &AppViewIconLoader::`vftable'{for `IApplicationViewIconLoaderNotifications'};
  *(_QWORD *)(v10 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IApplicationViewIconLoaderNotifications>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *(_QWORD *)(v10 + 40) = 0LL;
  v17 = v10;
  v19 = 0LL;
  v12 = *a5;
  v18[0] = *a2;
  v18[1] = a2[1];
  v11 = AppViewIconLoader::RuntimeClassInitialize(v10, v18, *a3, *a4, v12);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(v10);
    return (unsigned int)v11;
  }
  v15 = *(_QWORD *)(v10 + 32);
  while ( v15 >= 0 )
  {
    if ( (_DWORD)v15 != 0x7FFFFFFF )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 32), v15 + 1, v15);
      if ( v16 != v15 )
        continue;
    }
    goto LABEL_14;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v15 + 16), v13);
LABEL_14:
  *a1 = v10;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(&v17);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v19);
  return 0LL;
}
