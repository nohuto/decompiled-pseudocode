/*
 * XREFs of ??$MakeAndInitialize@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1804040D8
 * Callers:
 *     ?Create@AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x180404340 (-Create@AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019118 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x180404190 (--0AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
        __int64 **a1,
        __int64 *a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  __int64 *v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    v6 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AppViewTitleChangeListener((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)v5);
    v8 = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(v6 + 10, *a2);
    if ( v6 )
      (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    *a1 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return v4;
}
