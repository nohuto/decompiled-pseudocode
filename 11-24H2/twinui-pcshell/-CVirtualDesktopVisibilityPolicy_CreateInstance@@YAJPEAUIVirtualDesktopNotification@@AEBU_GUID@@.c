/*
 * XREFs of ?CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18009777C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF524 (-InternalRelease@-$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopCollection@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801AF550 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopC.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopVisibilityPolicy@@V1@AEAPEAUIVirtualDesktopNotification@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@@Z @ 0x180228A50 (--$MakeAndInitialize@VCVirtualDesktopVisibilityPolicy@@V1@AEAPEAUIVirtualDesktopNotification@@@D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopVisibilityPolicy_CreateInstance(
        struct IVirtualDesktopNotification *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int v5; // ebx
  const struct _GUID *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopNotification *v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = a1;
  *a3 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(&v12);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopVisibilityPolicy,CVirtualDesktopVisibilityPolicy,IVirtualDesktopNotification * &>(
         &v12,
         &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_d9f556e1_e62d_4847_b4af_4ef5dacdc290, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v8 = v12;
      *a3 = v12;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
      v5 = 0;
    }
    else if ( InlineIsEqualGUID(v6, v6) )
    {
      v7 = v12;
      *a3 = v12;
      v5 = 0;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x189,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x188,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v4);
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopCollection>::Release();
    }
  }
  return (unsigned int)v5;
}
