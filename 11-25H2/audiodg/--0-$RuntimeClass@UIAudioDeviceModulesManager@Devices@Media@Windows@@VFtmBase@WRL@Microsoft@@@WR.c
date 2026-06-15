/*
 * XREFs of ??0?$RuntimeClass@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x14001ADE4
 * Callers:
 *     ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x14001ABA4 (--0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14001A9E4 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>((__int64)(a1 + 1));
  a1[7] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
