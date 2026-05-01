/*
 * XREFs of ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x1800893C0
 * Callers:
 *     ?HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1802F4590 (-HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0CTaskWindow@@QEAA@XZ @ 0x1802B80BC (--0CTaskWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802C03A4 (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$CopyTo@UITaskWindow@@@?$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEBAJPEAPEAUITaskWindow@@@Z @ 0x180306DA8 (--$CopyTo@UITaskWindow@@@-$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEBAJPEAPEAUITaskWindow@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CTaskWindow::s_CreateInstance(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        CTaskWindow *a7,
        _QWORD *a8)
{
  _QWORD *v12; // rsi
  CTaskWindow *v13; // rax
  int v14; // edi
  __int64 v15; // rcx
  CTaskWindow *v17; // rbx
  void *v18; // [rsp+40h] [rbp-28h] BYREF

  v12 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a8);
  a8 = 0LL;
  v13 = (CTaskWindow *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  a7 = v13;
  if ( v13 )
  {
    v17 = CTaskWindow::CTaskWindow(v13);
    a7 = v17;
    v18 = 0LL;
    v14 = CTaskWindow::RuntimeClassInitialize(v17, a1, a2, a3, a4, a5, a6);
    if ( v14 >= 0 )
    {
      v14 = Microsoft::WRL::ComPtr<CTaskWindow>::CopyTo<ITaskWindow>(&a7, &a8);
      if ( v17 )
        (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v17 + 16LL))(v17);
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
      if ( v14 >= 0 )
        v14 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a8)(
                a8,
                &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
                v12);
    }
    else if ( v17 )
    {
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  else
  {
    v14 = -2147024882;
  }
  v15 = (__int64)a8;
  if ( a8 )
  {
    a8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v14;
}
