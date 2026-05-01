/*
 * XREFs of ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x180121ECC
 * Callers:
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x1803CB830 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1W4LIGHT_DISMISS_FLAGS@@@Z @ 0x1803CB8D0 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1W4LIGH.c)
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z @ 0x1803CB970 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z.c)
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBGW4LIGHT_DISMISS_FLAGS@@1@Z @ 0x1803CBA20 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBGW4LIGHT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1800731D4 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800859D8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseTrayFlyoutExperienceManager::Initialize(
        CBaseTrayFlyoutExperienceManager *this,
        struct IServiceProvider *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  HSTRING v6; // rbx
  __int64 v7; // rax
  int HostExperiencePriorityManipulator; // ebx
  __int64 v9; // rdx
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v10; // r8
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  const unsigned __int16 *v13; // [rsp+30h] [rbp-88h] BYREF
  const unsigned __int16 *v14; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v16[32]; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v14 = a3;
  v13 = a4;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 47, (__int64)a2);
  v6 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v15, &v13) + 24);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v16, &v14);
  HostExperiencePriorityManipulator = CSingleViewShellExperience::RuntimeClassInitialize(
                                        (HSTRING *)this + 9,
                                        (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                                        a2,
                                        *(HSTRING *)(v7 + 24),
                                        v6);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v9 = 99LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
    return (unsigned int)HostExperiencePriorityManipulator;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                        (ExperienceManagerUtils *)a2,
                                        (struct IServiceProvider *)this + 7,
                                        v10);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v9 = 103LL;
    goto LABEL_7;
  }
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
                                        a2,
                                        &SID_InputHostLayout,
                                        &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
                                        (char *)this + 64);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v9 = 104LL;
    goto LABEL_7;
  }
  return (unsigned int)HostExperiencePriorityManipulator;
}
