/*
 * XREFs of ?SnapHotkeyHandler_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@AEBU_GUID@@PEAPEAX@Z @ 0x1800733D4
 * Callers:
 *     ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1800734E0 (-PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VHotkeyHandler@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyHandler@@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Z @ 0x180207388 (--$MakeAndInitialize@VHotkeyHandler@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistControl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SnapHotkeyHandler_CreateInstance(
        struct IPriviledgedPositioner *a1,
        struct ISnapAssistController *a2,
        struct IImmersiveMonitorManager *a3,
        struct IApplicationViewCollection *a4,
        struct IImmersiveSettingsCache *a5,
        struct ITabletModeController *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  void **v11; // rcx
  int v12; // eax
  void **v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IPriviledgedPositioner *v16; // [rsp+60h] [rbp+20h] BYREF
  struct ISnapAssistController *v17; // [rsp+68h] [rbp+28h] BYREF
  struct IImmersiveMonitorManager *v18; // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationViewCollection *v19; // [rsp+78h] [rbp+38h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v16 = a1;
  v8 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a8);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<HotkeyHandler,HotkeyHandler,IPriviledgedPositioner * &,ISnapAssistController * &,IImmersiveMonitorManager * &,IApplicationViewCollection * &,IImmersiveSettingsCache * &,ITabletModeController * &>(
         (unsigned int)&a8,
         (unsigned int)&v16,
         (unsigned int)&v17,
         (unsigned int)&v18,
         (__int64)&v19,
         (__int64)&a5,
         (__int64)&a6);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a8)(a8, &GUID_1646a5c2_c6f3_4070_91ad_4da266c6f197, v8);
    v10 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57E,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v12);
    v13 = a8;
    if ( a8 )
    {
      a8 = 0LL;
      (*((void (__fastcall **)(void **))*v13 + 2))(v13);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57D,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
      (const char *)(unsigned int)v9);
    v11 = a8;
    if ( a8 )
    {
      a8 = 0LL;
      (*((void (__fastcall **)(void **))*v11 + 2))(v11);
    }
  }
  return v10;
}
