/*
 * XREFs of ??1Win32kInterop@@UEAA@XZ @ 0x1800EF8A0
 * Callers:
 *     ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x1800EFC8C (--_EWin32kInterop@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1TargetingInfo@Win32kInterop@@QEAA@XZ @ 0x1800337AC (--1TargetingInfo@Win32kInterop@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18008FF40 (--1-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@U-.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009D680 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@QEAA@XZ @ 0x1800AC5F0 (--1-$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800E1B8C (--1-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo.c)
 *     ??1?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800EF5D8 (--1-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_t.c)
 *     ??1?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1800EF654 (--1-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V-$_Uha.c)
 *     ??1?$_Hash@V?$_Umap_traits@KV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800EF6A8 (--1-$_Hash@V-$_Umap_traits@KV-$unordered_map@KUTargetingInfo@Win32kInterop@@U-$hash@K@std@@U-$eq.c)
 *     ??1CursorNotificationProcessor@@QEAA@XZ @ 0x1800F37A4 (--1CursorNotificationProcessor@@QEAA@XZ.c)
 */

void __fastcall Win32kInterop::~Win32kInterop(Win32kInterop *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx

  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 2296,
    a2);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 2152,
    v3);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 2008,
    v4);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 1864,
    v5);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 1720,
    v6);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 1576,
    v7);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 1432,
    v8);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 1288,
    v9);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 1144,
    v10);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 1000,
    v11);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 856,
    v12);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 712,
    v13);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 568,
    v14);
  `eh vector destructor iterator'(
    (char *)this + 504,
    8LL,
    8LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 62);
  CursorNotificationProcessor::~CursorNotificationProcessor((Win32kInterop *)((char *)this + 440));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 54);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 53);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 52);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>((__int64)this + 352);
  std::_Hash<std::_Umap_traits<unsigned long,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>,0>>((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 35);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::~_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>((__int64)this + 216);
  Win32kInterop::TargetingInfo::~TargetingInfo((Win32kInterop *)((char *)this + 200));
  std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>((__int64)this + 128);
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
