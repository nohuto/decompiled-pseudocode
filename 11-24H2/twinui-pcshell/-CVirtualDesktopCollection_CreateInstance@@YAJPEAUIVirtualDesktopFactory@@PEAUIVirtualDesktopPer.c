/*
 * XREFs of ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x180097A08
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x1801AF45C (--$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtu.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF524 (-InternalRelease@-$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopCollection@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801AF550 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection_CreateInstance(
        struct IVirtualDesktopFactory *a1,
        struct IVirtualDesktopPersistence *a2,
        char a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  void *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopFactory *v11; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopPersistence *v12; // [rsp+48h] [rbp+28h] BYREF
  char v13; // [rsp+50h] [rbp+30h] BYREF
  void *v14; // [rsp+58h] [rbp+38h] BYREF

  v13 = a3;
  v12 = a2;
  v11 = a1;
  v5 = a5;
  *a5 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(&v14);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopCollection,CVirtualDesktopCollection,IVirtualDesktopFactory * &,IVirtualDesktopPersistence * &,bool &>(
         &v14,
         &v11,
         &v12,
         &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v14;
    *v5 = v14;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopCollection>::Release();
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x198,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(&v14);
    return v7;
  }
}
