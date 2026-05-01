/*
 * XREFs of ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x1801826E8
 * Callers:
 *     ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x18018260C (-RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x180182668 (-InternalRelease@-$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@IEAAKX.c)
 *     ?RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180182784 (-RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardLi.c)
 *     ??0DummyWindow@CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1802B2960 (--0DummyWindow@CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CExperienceManagerAnimationHelper::DummyWindow,CExperienceManagerAnimationHelper::DummyWindow,IDWMStoryboardListener * &>(
        volatile signed __int32 **a1,
        struct IDWMStoryboardListener **a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile int *v6; // rdx
  int v7; // edi
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( !v4 )
    return 2147942414LL;
  v5 = (volatile signed __int32 *)CExperienceManagerAnimationHelper::DummyWindow::DummyWindow((CExperienceManagerAnimationHelper::DummyWindow *)v4);
  v9 = v5;
  v10 = 0LL;
  v7 = CExperienceManagerAnimationHelper::DummyWindow::RuntimeClassInitialize(
         (CExperienceManagerAnimationHelper::DummyWindow *)v5,
         *a2);
  if ( v7 >= 0 )
  {
    if ( v5 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 3), v6);
    *a1 = v5;
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::InternalRelease(&v9);
  return (unsigned int)v7;
}
