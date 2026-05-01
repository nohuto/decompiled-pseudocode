/*
 * XREFs of ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1802CB440
 * Callers:
 *     ?SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x1802EB740 (-SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z.c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802F7BB0 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x1802F9950 (-SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z.c)
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$3 @ 0x1806CA596 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$3.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$4 @ 0x1806D7552 (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$4.c)
 *     _CApplicationManager::SetApplicationWindow_::_1_::dtor$0 @ 0x1806DF23E (_CApplicationManager--SetApplicationWindow_--_1_--dtor$0.c)
 *     _CAppViewManager::SplitView_::_1_::dtor$2 @ 0x1806DF46F (_CAppViewManager--SplitView_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee(
        CAutoApplicationCreationResourceGuarantee *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
