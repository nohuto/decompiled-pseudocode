/*
 * XREFs of ?VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x180095828
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x180095908 (--$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopWindowMoveManager_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopCollection *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IVirtualDesktopPinnedAppsPrivate *a4,
        const struct _GUID *a5,
        void **a6)
{
  void **v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  void **v9; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v13; // [rsp+50h] [rbp+20h] BYREF
  struct IVirtualDesktopCollection *v14; // [rsp+58h] [rbp+28h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v15; // [rsp+60h] [rbp+30h] BYREF
  struct IVirtualDesktopPinnedAppsPrivate *v16; // [rsp+68h] [rbp+38h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v13 = a1;
  v6 = a6;
  *a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopWindowMoveManager,VirtualDesktopWindowMoveManager,IVirtualDesktopManagerPrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopPinnedAppsPrivate * &>(
         (unsigned int)&a6,
         (unsigned int)&v13,
         (unsigned int)&v14,
         (unsigned int)&v15,
         (__int64)&v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a6)(a6, &GUID_7d71a734_c5dc_4b40_8a73_180e5ad15c4f, v6);
    v8 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)(unsigned int)v7);
    v9 = a6;
    if ( a6 )
    {
      a6 = 0LL;
      (*((void (__fastcall **)(void **))*v9 + 2))(v9);
    }
  }
  return v8;
}
