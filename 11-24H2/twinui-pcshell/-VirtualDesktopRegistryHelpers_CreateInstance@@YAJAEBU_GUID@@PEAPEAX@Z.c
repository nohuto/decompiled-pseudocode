/*
 * XREFs of ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180097BA8
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x1801D9618 (--$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVir.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D96F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopR.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ @ 0x1802116D4 (-InternalRelease@-$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopRegistryHelpers_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  int v4; // ebx
  const struct _GUID *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopRegistryHelpers>::InternalRelease(&v10);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopRegistryHelpers,VirtualDesktopRegistryHelpers,>(&v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_b3038f52_6c01_47f7_8363_bc7bed1d4dbb, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v7 = v10;
      *a2 = v10;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
      v4 = 0;
    }
    else if ( InlineIsEqualGUID(v5, v5) )
    {
      v6 = v10;
      *a2 = v10;
      v4 = 0;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
        (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<VirtualDesktopRegistryHelpers>::InternalRelease(&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)(unsigned int)v3);
    if ( v10 )
    {
      v10 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopRegistryHelpers>::Release();
    }
  }
  return (unsigned int)v4;
}
