/*
 * XREFs of ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x180142CF0
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180142C3C (--$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x18005FF20 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x18014403C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802AB0C4 (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIScaleChangeSink@@UIClosable@Foundation@8@@WRL@Microsoft@@QEAA@XZ @ 0x1802BE434 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualTouchpadExperienceManager@Exp.c)
 */

// Hidden C++ exception states: #wind=14
CVirtualTouchpadExperienceManager *__fastcall CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager(
        CVirtualTouchpadExperienceManager *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>();
  *(_QWORD *)this = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 1) = &CVirtualTouchpadExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 3) = &CVirtualTouchpadExperienceManager::`vftable'{for `IScaleChangeSink'};
  *((_QWORD *)this + 4) = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 7) = &CVirtualTouchpadExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  CSingleViewShellExperience::CSingleViewShellExperience((__int64)this + 64, (__int64)this + 56, 1);
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 317;
  *((_DWORD *)this + 71) = 420;
  *((_DWORD *)this + 72) = 420;
  *((_DWORD *)this + 73) = 360;
  *((_DWORD *)this + 74) = 4;
  *(_QWORD *)((char *)this + 300) = 0LL;
  *(_QWORD *)((char *)this + 308) = 0LL;
  *((_WORD *)this + 158) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((CVirtualTouchpadExperienceManager *)((char *)this + 376));
  *((_QWORD *)this + 47) = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
  *((_BYTE *)this + 712) = 0;
  *((_DWORD *)this + 179) = 15;
  *((GUID *)this + 45) = GUID_NULL;
  *((_QWORD *)this + 92) = 0LL;
  *((_BYTE *)this + 744) = 0;
  *((_DWORD *)this + 187) = 17;
  *((GUID *)this + 47) = GUID_NULL;
  *((_QWORD *)this + 96) = 0LL;
  *((_DWORD *)this + 194) = 4;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_BYTE *)this + 824) = 0;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  winrt::impl::resume_apartment_context::resume_apartment_context((CVirtualTouchpadExperienceManager *)((char *)this + 872));
  return this;
}
