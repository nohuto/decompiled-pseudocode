/*
 * XREFs of ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180095ACC
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0VirtualDesktopsApi@@QEAA@XZ @ 0x1802B6F94 (--0VirtualDesktopsApi@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopsApi@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@@Z @ 0x1802BD074 (-RuntimeClassInitialize@VirtualDesktopsApi@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopsApi_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopCollection *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IVirtualDesktopWindowMoveManager *a4,
        struct IVirtualDesktopLock *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v11; // rsi
  struct _GUID *v12; // rax
  int v13; // edi
  void **v14; // rcx
  VirtualDesktopsApi *v16; // rbx
  int v17; // eax
  unsigned int v18; // ebx
  VirtualDesktopsApi *v19; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v11 = a7;
  *a7 = 0LL;
  a7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a7);
  a7 = 0LL;
  v12 = (struct _GUID *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  a6 = v12;
  if ( !v12 )
  {
    v13 = -2147024882;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)v13);
    v14 = a7;
    if ( a7 )
    {
      a7 = 0LL;
      (*((void (__fastcall **)(void **))*v14 + 2))(v14);
    }
    return (unsigned int)v13;
  }
  v16 = VirtualDesktopsApi::VirtualDesktopsApi((VirtualDesktopsApi *)v12);
  v19 = v16;
  a6 = 0LL;
  v13 = VirtualDesktopsApi::RuntimeClassInitialize(v16, a1, a2, a3, a4, a5);
  if ( v13 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&a6);
    goto LABEL_3;
  }
  if ( v16 )
    (*(void (__fastcall **)(VirtualDesktopsApi *))(*(_QWORD *)v16 + 8LL))(v16);
  a7 = (void **)v16;
  if ( v16 )
  {
    (*(void (__fastcall **)(VirtualDesktopsApi *))(*(_QWORD *)v16 + 16LL))(v16);
    v16 = (VirtualDesktopsApi *)a7;
  }
  v17 = (**(__int64 (__fastcall ***)(VirtualDesktopsApi *, GUID *, void **))v16)(
          v16,
          &GUID_56b835c4_6024_4967_9907_c350814eca0e,
          v11);
  v18 = v17;
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a7);
  return v18;
}
