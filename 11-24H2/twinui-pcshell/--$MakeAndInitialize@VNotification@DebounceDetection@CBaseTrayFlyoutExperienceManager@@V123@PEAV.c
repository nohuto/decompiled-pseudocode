/*
 * XREFs of ??$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x1803C74C4
 * Callers:
 *     ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x1803C8394 (-BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1803879CC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@@.c)
 *     ?RuntimeClassInitialize@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x1803CBD98 (-RuntimeClassInitialize@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAJPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification,CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification,CBaseTrayFlyoutExperienceManager::DebounceDetection *>(
        __int64 *a1,
        struct CBaseTrayFlyoutExperienceManager::DebounceDetection **a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (__int64)v4;
  v9 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification>(v4);
    *(_QWORD *)v5 = &CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::`vftable';
    *(_QWORD *)(v5 + 8) = &CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::`vftable'{for `IImmersiveRawInputMouseNotification'};
    *(_QWORD *)(v5 + 16) = &CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_DWORD *)(v5 + 56) = 0;
    v8 = v5;
    v9 = 0LL;
    v6 = CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(
           (CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *)v5,
           *a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
      v6 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
  return (unsigned int)v6;
}
