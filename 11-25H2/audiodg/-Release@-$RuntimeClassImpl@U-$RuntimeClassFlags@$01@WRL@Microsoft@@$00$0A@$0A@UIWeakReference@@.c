/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140035490
 * Callers:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x140019CF8 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x140019FF0 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1400353CC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesMana.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140035404 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Inte.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IVector@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140035438 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$IVector@UEventRegistr.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140035460 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@Details@.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingObject@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140044260 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingObject@.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14005F0F0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsProp.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140067370 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudio.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1400791C8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation@PEAVM.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 3);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 3, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
