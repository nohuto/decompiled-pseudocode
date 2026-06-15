/*
 * XREFs of ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC
 * Callers:
 *     ?TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180015B80 (-TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180016730 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18001C240 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x18001C6D8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001CE00 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18001D268 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18001DB1C (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 *     ?GetMute@BluetoothMute@BluetoothControls@@UEAAJPEAH@Z @ 0x18006FBD0 (-GetMute@BluetoothMute@BluetoothControls@@UEAAJPEAH@Z.c)
 *     ?GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x180072170 (-GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800739B8 (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180077748 (-GetTargetedControl@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@.c)
 *     ?GetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x18007E000 (-GetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082958 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x180086C48 (-GetWorkItem@CWorkFifo@@AEAA-AV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ.c)
 *     ?RecurringWaitCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800B4F70 (-RecurringWaitCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180118560 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1801192E0 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180119ACC (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 *     ?TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18011A950 (-TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Atomic_storage<bool,1>::load(__int64 a1)
{
  return *(_BYTE *)a1;
}
