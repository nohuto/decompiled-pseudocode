/*
 * XREFs of ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18006FB98
 * Callers:
 *     ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x180055D70 (-GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z.c)
 *     ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x18005A430 (-GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z.c)
 *     ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x18006F9A0 (-NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ.c)
 *     ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18006FA30 (-InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18007A9EC (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18007C2C0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180081E00 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x1800FAA70 (-ProviderFinalRelease@CMeterHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x1800FAAB0 (-ProviderFinalRelease@CMeterSoftware@@UEAAXXZ.c)
 *     ?NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ @ 0x1800FE100 (-NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x1800FE340 (-ProviderFinalRelease@CMuteHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x1800FE3D0 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800FE570 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x18010CFE0 (-NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x18010D070 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x18010D180 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z @ 0x18010DC40 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1801116CC (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x180113A70 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall ATL::CComPtrBase<IPart>::Release(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
