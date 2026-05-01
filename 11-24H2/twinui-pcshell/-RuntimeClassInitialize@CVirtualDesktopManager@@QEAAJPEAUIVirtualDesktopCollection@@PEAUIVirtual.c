/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x180093E84
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x180097EF8 (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ @ 0x180094374 (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::RuntimeClassInitialize(
        CVirtualDesktopManager *this,
        struct IVirtualDesktopCollection *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IVirtualDesktopNotification *a4,
        struct IVirtualDesktopForegroundPolicy *a5,
        struct IVirtualDesktopPersistence *a6,
        struct IUnknown *a7,
        struct IVirtualDesktopLock *a8)
{
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, GUID *, char *); // rsi
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 13, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 15, (__int64)a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 16, (__int64)a4);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 17, (__int64)a5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 18, (__int64)a6);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 20, (__int64)a8);
  v11 = *((_QWORD *)this + 13);
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v11 + 72LL);
  v13 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = v12(v11, 0LL, 5LL, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, (char *)this + 184);
  if ( v14 < 0 )
  {
    v16 = 1670LL;
  }
  else
  {
    v14 = CVirtualDesktopManager::SubscribeToWNFForBackgroundImage(this);
    if ( v14 >= 0 )
      return 0LL;
    v16 = 1671LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v14);
  return (unsigned int)v14;
}
