/*
 * XREFs of ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008444
 * Callers:
 *     ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x140008190 (-OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_i.c)
 *     ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140013774 (-QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICA.c)
 *     ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140016438 (-QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIF.c)
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400185CC (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 *     ?OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003EEFC (-OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 *     ?OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003F054 (-OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 *     ?OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z @ 0x14005D5E0 (-OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATI.c)
 *     ?OnSpatialStatusChanged@CAPOEnvironmentStateChangedNotificationsHandler@@UEAAJPEBUWNF_SPATIAL_STATUS_HEADER@@@Z @ 0x14005FBB0 (-OnSpatialStatusChanged@CAPOEnvironmentStateChangedNotificationsHandler@@UEAAJPEBUWNF_SPATIAL_ST.c)
 *     ?OnNotify@CMicBoostNotificationsHandler@@UEAAJKPEBU_GUID@@@Z @ 0x1400604D0 (-OnNotify@CMicBoostNotificationsHandler@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z @ 0x1400626E0 (-QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z.c)
 *     ?QueueInitialEnvironmentStatusNotification@@YAJPEBGPEAUIPropertyStore@@PEAVCAPOProcessingHostObject@@@Z @ 0x140062814 (-QueueInitialEnvironmentStatusNotification@@YAJPEBGPEAUIPropertyStore@@PEAVCAPOProcessingHostObj.c)
 *     ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140062ACC (-QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PE.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1400085B8 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CAPOProcessingHostObject::QueueNotification(struct _RTL_CRITICAL_SECTION *a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 (__fastcall ***SpinCount)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v6)(_QWORD, GUID *, __int64 *); // rax
  int v7; // esi
  CSerialWorkQueue *DebugInfo; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rdi
  int v13; // [rsp+20h] [rbp-60h]
  __int64 v14; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v15[8]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+C8h] [rbp+48h]

  v4 = a1 + 1;
  EnterCriticalSection(a1 + 1);
  v19 = v4;
  if ( a1[2].DebugInfo )
  {
    SpinCount = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1->SpinCount;
    v18 = 0LL;
    v6 = *SpinCount;
    v17 = 0LL;
    v7 = (*v6)(SpinCount, &GUID_00000038_0000_0000_c000_000000000046, &v17);
    if ( v7 >= 0 )
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v18);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x171,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        (const char *)(unsigned int)v7,
        v13);
    }
    else
    {
      DebugInfo = (CSerialWorkQueue *)a1[2].DebugInfo;
      v9 = a2[1];
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v10 = *a2;
      v11 = a2[1];
      v12 = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      v15[0] = off_14009C5C8;
      v15[1] = v10;
      v15[2] = v11;
      v14 = 0LL;
      v15[3] = v12;
      v15[7] = v15;
      CSerialWorkQueue::QueueWorkItem(DebugInfo);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
    }
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
