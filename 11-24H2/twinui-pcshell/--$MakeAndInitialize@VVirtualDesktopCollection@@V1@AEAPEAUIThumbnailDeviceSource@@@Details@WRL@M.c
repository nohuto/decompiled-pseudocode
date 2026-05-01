/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopCollection@@V1@AEAPEAUIThumbnailDeviceSource@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopCollection@@AEAPEAUIThumbnailDeviceSource@@@Z @ 0x1802C22E8
 * Callers:
 *     ?VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z @ 0x180230768 (-VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800602D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCo.c)
 *     ??0VirtualDesktopCollection@@QEAA@XZ @ 0x1802B8F60 (--0VirtualDesktopCollection@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollection,VirtualDesktopCollection,IThumbnailDeviceSource * &>(
        VirtualDesktopCollection **a1,
        __int64 *a2)
{
  void *v4; // rax
  volatile int *v6; // rdx
  VirtualDesktopCollection *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h]
  void *v14; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  v13 = v4;
  if ( !v4 )
    return 2147942414LL;
  v14 = v4;
  v7 = VirtualDesktopCollection::VirtualDesktopCollection((VirtualDesktopCollection *)v4);
  v12 = 0LL;
  v8 = *a2;
  v9 = *((_QWORD *)v7 + 32);
  *((_QWORD *)v7 + 32) = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v7 )
  {
    v10 = *((_QWORD *)v7 + 10);
    while ( v10 >= 0 )
    {
      if ( (_DWORD)v10 != 0x7FFFFFFF )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 10, v10 + 1, v10);
        if ( v11 != v10 )
          continue;
      }
      goto LABEL_14;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v10 + 16), v6);
LABEL_14:
    *a1 = v7;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release((__int64)v7);
  }
  else
  {
    *a1 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return 0LL;
}
