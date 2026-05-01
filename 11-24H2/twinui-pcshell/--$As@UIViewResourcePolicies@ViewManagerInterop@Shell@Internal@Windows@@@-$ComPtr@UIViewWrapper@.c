/*
 * XREFs of ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800ADD54
 * Callers:
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1800632FC (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x1800AB160 (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 *     ?SetViewImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800AC8E0 (-SetViewImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UnboostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x1800ACC20 (-UnboostPriority@PriorityBoostHelper@@UEAAJXZ.c)
 *     ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800AD348 (-BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?BoostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800AD52C (-BoostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x1800AD5E4 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800AD7F0 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800ADDA4 (-UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ @ 0x1800F26F0 (-ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ.c)
 *     ?DisableActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801FCE90 (-DisableActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ResetActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1802C8EE0 (-ResetActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@CortanaSharedExperienceManager@@AEAAJAEAV?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1803791B8 (--$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@CortanaS.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18037E918 (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18037EA08 (-_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1803801F0 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x1803820C0 (-ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ.c)
 *     ?OnPriorityUnboostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180382500 (-OnPriorityUnboostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShel.c)
 *     ??$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppExperienceManager@@AEAAJAEAV?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1803AA5F0 (--$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@SearchAp.c)
 *     ?_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x1803ABC38 (-_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x1803ABD28 (-_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x1803AD2C4 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_35f1648c_265f_402c_b575_c9a325451df5, a2);
}
