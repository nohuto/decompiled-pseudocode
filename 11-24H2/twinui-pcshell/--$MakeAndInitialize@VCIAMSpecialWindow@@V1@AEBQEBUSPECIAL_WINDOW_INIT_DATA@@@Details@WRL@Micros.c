/*
 * XREFs of ??$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAVCIAMSpecialWindow@@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x1800A01B8
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18009F1F4 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x1800A1F84 (-InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CIAMSpecialWindow,CIAMSpecialWindow,SPECIAL_WINDOW_INIT_DATA const * const &>(
        CIAMSpecialWindowBase **a1,
        const struct SPECIAL_WINDOW_INIT_DATA **a2)
{
  unsigned int v4; // edi
  CIAMSpecialWindowBase *v5; // rax
  CIAMSpecialWindowBase *v6; // rbx
  int v8; // esi
  CIAMSpecialWindowBase *v9; // [rsp+40h] [rbp+8h] BYREF
  CIAMSpecialWindowBase *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (CIAMSpecialWindowBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v9 = v5;
  if ( !v5 )
    return (unsigned int)-2147024882;
  *(_QWORD *)v5 = &CIAMSpecialWindowBase::`vftable';
  *((_QWORD *)v5 + 2) = 0LL;
  *((_DWORD *)v5 + 6) = 0;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = 0LL;
  *((_DWORD *)v5 + 13) = 1;
  *(_QWORD *)v5 = &CIAMSpecialWindow::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v6 = &CIAMSpecialWindow::`vftable';
  v10 = v6;
  v9 = 0LL;
  v8 = CIAMSpecialWindowBase::InitializeSpecialWindow(v6, *a2);
  if ( v8 >= 0 )
  {
    (*(void (__fastcall **)(CIAMSpecialWindowBase *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    (*(void (__fastcall **)(CIAMSpecialWindowBase *))(*(_QWORD *)v6 + 16LL))(v6);
    return v4;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v9);
  return (unsigned int)v8;
}
