/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSessionEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B2370
 * Callers:
 *     ??1?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ @ 0x18010F494 (--1-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCMonitorNotification@CMonitor@@V12@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVCMonitorNotification@CMonitor@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@$$QEAPEAV4@@Z @ 0x180114548 (--$MakeAndInitialize@VCMonitorNotification@CMonitor@@V12@W4__MIDL___MIDL_itf_mmdeviceapi_0000_00.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x1801146F4 (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18004FFD0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSessionEvents>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 80LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
