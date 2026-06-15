/*
 * XREFs of ??0CBtLeAudioResourceManager@@QEAA@XZ @ 0x1800EC670
 * Callers:
 *     ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800EC0EC (--$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluet.c)
 * Callees:
 *     ??0CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800EC538 (--0CBtAudioResourceManagerBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
CBtLeAudioResourceManager *__fastcall CBtLeAudioResourceManager::CBtLeAudioResourceManager(
        CBtLeAudioResourceManager *this)
{
  CBtAudioResourceManagerBase::CBtAudioResourceManagerBase(this);
  *((_DWORD *)this + 127) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase,IEndpointCustomFormatHandler>::`vftable'{for `ISaDeviceResourceManager'};
  *((_QWORD *)this + 1) = &CBtLeAudioResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBtAudioResourceManager,ISessionInternalEvents,IEndpointCustomFormatHandler>'};
  *((_QWORD *)this + 2) = &CBtLeAudioResourceManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase,IEndpointCustomFormatHandler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>'};
  *((_QWORD *)this + 62) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase,IEndpointCustomFormatHandler>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CBtLeAudioResourceManager::`vftable'{for `ISaDeviceResourceManager'};
  *((_QWORD *)this + 1) = &CBtLeAudioResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBtAudioResourceManager,ISessionInternalEvents,IEndpointCustomFormatHandler>'};
  *((_QWORD *)this + 2) = &CBtLeAudioResourceManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 3) = &CBtLeAudioResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>'};
  *((_QWORD *)this + 62) = &CBtLeAudioResourceManager::`vftable';
  return this;
}
