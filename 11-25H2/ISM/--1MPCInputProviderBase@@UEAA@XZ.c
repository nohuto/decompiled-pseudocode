/*
 * XREFs of ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800C6D30
 * Callers:
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x1800C1710 (--1MPCHandProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800C1A60 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft.c)
 *     ??_EMPCInputProviderBase@@UEAAPEAXI@Z @ 0x1800C1AF0 (--_EMPCInputProviderBase@@UEAAPEAXI@Z.c)
 *     ??_GMPCVoiceProcessor@@UEAAPEAXI@Z @ 0x180192A60 (--_GMPCVoiceProcessor@@UEAAPEAXI@Z.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801B307C (--1MPCSixDofProcessor@@UEAA@XZ.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801B6F3C (--1MPCGamepadProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801B7160 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProvider.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAA@XZ @ 0x1801B9D08 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorFo.c)
 *     ??1MPCMouseProcessor@@UEAA@XZ @ 0x1801B9D84 (--1MPCMouseProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801B9E80 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorF.c)
 *     ??_GMPCClickerProcessor@@UEAAPEAXI@Z @ 0x1801BCFA0 (--_GMPCClickerProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x180085C5C (-MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 */

void __fastcall MPCInputProviderBase::~MPCInputProviderBase(MPCInputProviderBase *this)
{
  ISMTracing *v2; // rcx

  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputProviderBase_Destroy_(v2, *((const struct DeviceInfo **)this + 6));
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 455);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 454);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 453);
  std::deque<RayStabilizationResult>::~deque<RayStabilizationResult>((char **)this + 59);
}
