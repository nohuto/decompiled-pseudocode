/*
 * XREFs of ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800959D8
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualPinnedAppsHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x180095674 (--$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopPinnedAppsHandler_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopRegistryHelpers *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IUnknown *a4,
        struct IVirtualDesktopLock *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  VirtualPinnedAppsHandler *v11; // rcx
  VirtualPinnedAppsHandler *v13; // rcx
  VirtualPinnedAppsHandler *v14; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v16; // [rsp+50h] [rbp+20h] BYREF
  struct IVirtualDesktopRegistryHelpers *v17; // [rsp+58h] [rbp+28h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v18; // [rsp+60h] [rbp+30h] BYREF
  VirtualPinnedAppsHandler *v19; // [rsp+68h] [rbp+38h] BYREF

  v18 = a3;
  v17 = a2;
  v16 = a1;
  v7 = a7;
  *a7 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<VirtualPinnedAppsHandler,VirtualPinnedAppsHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopRegistryHelpers * &,IVirtualDesktopVisibilityPolicy * &,std::nullptr_t,IVirtualDesktopLock * &>(
         &v19,
         &v16,
         &v17,
         &v18,
         v14,
         &a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16B,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v8);
    v13 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
    v10 = (**(__int64 (__fastcall ***)(VirtualPinnedAppsHandler *, GUID *, void **))v19)(
            v19,
            &GUID_eb8033b6_74a3_4bd8_9b46_400d380a753c,
            v7);
    v9 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16C,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v10);
    v11 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return v9;
}
