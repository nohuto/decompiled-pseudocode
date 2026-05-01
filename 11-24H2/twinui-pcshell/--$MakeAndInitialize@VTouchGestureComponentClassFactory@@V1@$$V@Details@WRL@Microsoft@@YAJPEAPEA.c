/*
 * XREFs of ??$MakeAndInitialize@VTouchGestureComponentClassFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchGestureComponentClassFactory@@@Z @ 0x1802366B4
 * Callers:
 *     ??$CreateClassFactory@VTouchGestureComponentClassFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18058A770 (--$CreateClassFactory@VTouchGestureComponentClassFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCre.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TouchGestureComponentClassFactory@@QEAA@XZ @ 0x18058AD4C (--0TouchGestureComponentClassFactory@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TouchGestureComponentClassFactory,TouchGestureComponentClassFactory,>(
        TouchGestureComponentClassFactory **a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  TouchGestureComponentClassFactory *v4; // rax
  TouchGestureComponentClassFactory *v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = TouchGestureComponentClassFactory::TouchGestureComponentClassFactory((TouchGestureComponentClassFactory *)v3);
    v5 = v4;
    v7 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(TouchGestureComponentClassFactory *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(TouchGestureComponentClassFactory *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return v2;
}
