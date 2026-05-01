/*
 * XREFs of ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180097E4C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801FC2B8 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDCompBatchAnimationCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801FC2E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDCompBatchAnima.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x180208DCC (--$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopForegroundPolicy_CreateInstance(
        struct IVirtualDesktopCollection *a1,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopDefaultForegroundHandler *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  void *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopCollection *v11; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v12; // [rsp+48h] [rbp+28h] BYREF
  struct IVirtualDesktopDefaultForegroundHandler *v13; // [rsp+50h] [rbp+30h] BYREF
  void *v14; // [rsp+58h] [rbp+38h] BYREF

  v13 = a3;
  v12 = a2;
  v11 = a1;
  v5 = a5;
  *a5 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v14);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopForegroundPolicy,CVirtualDesktopForegroundPolicy,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopDefaultForegroundHandler * &>(
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
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDCompBatchAnimationCallback>::Release();
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF3,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v14);
    return v7;
  }
}
