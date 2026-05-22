/*
 * XREFs of ??1ControllerProcessor@@MEAA@XZ @ 0x180177F84
 * Callers:
 *     ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x1801782B0 (--_GControllerProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180024020 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180039878 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     ??1?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18005BB50 (--1-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$hash.c)
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18006ED2C (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x18010EB58 (--1ManipulationInjector@@QEAA@XZ.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x1801471E0 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 *     ??1InjectionDevice@@QEAA@XZ @ 0x1801780D0 (--1InjectionDevice@@QEAA@XZ.c)
 */

void __fastcall ControllerProcessor::~ControllerProcessor(ControllerProcessor *this)
{
  struct ControllerNavigationManager *ControllerNavigationManager; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 9) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 10) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  if ( *((_DWORD *)this + 70) != 2 )
    ControllerProcessor::UpdateNavigationState((__int64)this, 2, 0LL, 0LL);
  ControllerProcessor::StopAutoRepeatTimer(this);
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v3 = **((_DWORD **)this + 5);
  std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
    (_QWORD *)ControllerNavigationManager + 8,
    (__int64)&v3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 973);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 972);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 971);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 970);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 969);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 962);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 961);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 939);
  InjectionDevice::~InjectionDevice((ControllerProcessor *)((char *)this + 5952));
  InjectionDevice::~InjectionDevice((ControllerProcessor *)((char *)this + 4392));
  InjectionDevice::~InjectionDevice((ControllerProcessor *)((char *)this + 2832));
  InjectionDevice::~InjectionDevice((ControllerProcessor *)((char *)this + 1272));
  ManipulationInjector::~ManipulationInjector((ControllerProcessor *)((char *)this + 448));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 36);
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::~_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>((__int64)this + 88);
  NonPointerProcessor::~NonPointerProcessor(this);
}
