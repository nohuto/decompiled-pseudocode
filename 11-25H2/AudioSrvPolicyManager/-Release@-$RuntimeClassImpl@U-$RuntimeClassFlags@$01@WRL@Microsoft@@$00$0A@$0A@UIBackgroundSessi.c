/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessionCallbacks@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180040FF0
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointVolumeStateManager@@UIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Z @ 0x18001A848 (--$MakeAndInitialize@VCEndpointVolumeStateManager@@UIEndpointVolumeStateManager@@AEAPEAUIVolumeP.c)
 *     ??$Make@VCBackgroundSessionCallbacks@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCBackgroundSessionCallbacks@@@12@XZ @ 0x18003F254 (--$Make@VCBackgroundSessionCallbacks@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCBackgroundSessi.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x1800407A4 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000EF00 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IBackgroundSessionCallbacks>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 48LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
