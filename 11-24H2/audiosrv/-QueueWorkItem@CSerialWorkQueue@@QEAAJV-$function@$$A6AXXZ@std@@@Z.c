/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18000DA40 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ??1CPowerReference@@QEAA@XZ @ 0x18000FD18 (--1CPowerReference@@QEAA@XZ.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180010DC4 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x180025FE0 (-OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z @ 0x180027E70 (-ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x180057F0C (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ @ 0x180065FD4 (-OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ.c)
 *     ?UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ @ 0x18006DFA0 (-UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180075D04 (-OnStreamStateChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180075D8C (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18007FCC0 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z @ 0x1800BE4C0 (-OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z.c)
 *     wistd::__function::__func__lambda_cc54e5dd528306179db4038c2fc6bf4d__void___cdecl(enum__PO_STANDBY_AUDIO_POLICY_const_&)_::operator() @ 0x1800CBC20 (wistd--__function--__func__lambda_cc54e5dd528306179db4038c2fc6bf4d__void___cdecl(enum__PO_STANDB.c)
 *     ?OnBidirectionalModeChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800D5A6C (-OnBidirectionalModeChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothCon.c)
 *     ?OnBidirectionalModeChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800D5B10 (-OnBidirectionalModeChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@Bluetoot.c)
 *     ?OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800DF380 (-OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z.c)
 *     ?OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800DF4A0 (-OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamSta.c)
 *     wistd::__function::__func__lambda_735ddb5d5b78506d8297ba52162f5331__void___cdecl(enum_Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState_const_&)_::operator() @ 0x1800E4F50 (wistd--__function--__func__lambda_735ddb5d5b78506d8297ba52162f5331__void___cdecl(enum_Microsoft-.c)
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800E6500 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800E6630 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1800F5688 (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x1800F7C04 (-OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800F7DB0 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x1800FBD50 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x1800FC164 (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 *     ?ScanForMulticastSessions@CMulticastSessionManager@@UEAAJXZ @ 0x180100B00 (-ScanForMulticastSessions@CMulticastSessionManager@@UEAAJXZ.c)
 *     ?ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ @ 0x180107240 (-ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ.c)
 *     ?OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18010AAEC (-OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnPoStandbyAudioRequestReceived@@YAJW4_PO_STANDBY_AUDIO_POLICY@@@Z @ 0x18010D3B0 (-OnPoStandbyAudioRequestReceived@@YAJW4_PO_STANDBY_AUDIO_POLICY@@@Z.c)
 * Callees:
 *     ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18002794C (--$_Construct_in_place@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV-$function@$$A6AXXZ@0@0@Z.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x180027958 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B3D80 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(__int64 a1, __int64 *a2)
{
  signed int v4; // esi
  PTP_POOL Threadpool; // rax
  signed int v6; // eax
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int v8; // eax
  _WorkTask *v9; // rax
  unsigned int v10; // edx
  _WorkTask *v11; // r14
  _WorkTask *v12; // rbx
  __int64 (__fastcall ***v13)(_QWORD, _BYTE *); // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rbp
  volatile signed __int32 *v17; // rsi
  __int64 v18; // rbp
  _BYTE *v19; // rdx
  struct _TP_WORK *ThreadpoolWork; // rbp
  __int64 *v21; // rcx
  __int64 v22; // rdx
  signed int LastError; // eax
  signed int v25; // eax
  _BYTE v26[56]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE *v27; // [rsp+58h] [rbp-40h]

  v4 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(a1 + 80) )
    goto LABEL_36;
  if ( *(_QWORD *)a1 )
  {
LABEL_13:
    v9 = (_WorkTask *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v9;
    if ( v9 )
    {
      *(_QWORD *)v9 = 0LL;
      *((_QWORD *)v9 + 1) = 0LL;
      *((_QWORD *)v9 + 2) = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = v11;
    if ( v11 )
    {
      v27 = 0LL;
      v13 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))a2[7];
      if ( v13 )
        v27 = (_BYTE *)(**v13)(v13, v26);
      *((_QWORD *)v11 + 2) = a1;
      ProcessHeap = GetProcessHeap();
      v15 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v16 = v15;
      if ( v15 )
      {
        *(_OWORD *)v15 = 0LL;
        v15[2] = 1;
        v15[3] = 1;
        *(_QWORD *)v15 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
        std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>(v15 + 4, v26);
      }
      else
      {
        v16 = 0LL;
      }
      *(_QWORD *)v11 = v16 + 4;
      v17 = (volatile signed __int32 *)*((_QWORD *)v11 + 1);
      *((_QWORD *)v11 + 1) = v16;
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
        v12 = v11;
      }
      v18 = *(_QWORD *)v11;
      v4 = -2147024882;
      if ( *(_QWORD *)v11 )
        v4 = 0;
      if ( v27 )
      {
        v19 = v26;
        LOBYTE(v19) = v27 != v26;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v27 + 32LL))(v27, v19);
      }
      if ( !v18 )
        goto LABEL_34;
      ThreadpoolWork = CreateThreadpoolWork(
                         (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                         v11,
                         (PTP_CALLBACK_ENVIRON)(a1 + 8));
      if ( ThreadpoolWork )
      {
        v4 = 0;
      }
      else
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        if ( v4 < 0 )
          goto LABEL_34;
      }
      v12 = 0LL;
      SubmitThreadpoolWork(ThreadpoolWork);
    }
    else
    {
      v4 = -2147024882;
    }
LABEL_34:
    if ( v12 )
      _WorkTask::`scalar deleting destructor'(v12, v10);
    goto LABEL_36;
  }
  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)a1 = Threadpool;
  if ( Threadpool )
    goto LABEL_11;
  v25 = GetLastError();
  v4 = v25;
  if ( v25 > 0 )
    v4 = (unsigned __int16)v25 | 0x80070000;
  if ( v4 >= 0 )
  {
LABEL_11:
    if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)a1, 1u) )
      goto LABEL_51;
    v6 = GetLastError();
    v4 = v6;
    if ( v6 > 0 )
      v4 = (unsigned __int16)v6 | 0x80070000;
    if ( v4 >= 0 )
    {
LABEL_51:
      ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
      *(_QWORD *)(a1 + 120) = ThreadpoolCleanupGroup;
      if ( ThreadpoolCleanupGroup )
        goto LABEL_12;
      v8 = GetLastError();
      v4 = v8;
      if ( v8 > 0 )
        v4 = (unsigned __int16)v8 | 0x80070000;
      if ( v4 >= 0 )
      {
LABEL_12:
        SetThreadpoolThreadMaximum(*(PTP_POOL *)a1, 1u);
        *(_QWORD *)(a1 + 16) = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 32) = 0LL;
        goto LABEL_13;
      }
    }
  }
LABEL_36:
  v21 = (__int64 *)a2[7];
  if ( v21 )
  {
    v22 = *v21;
    LOBYTE(v22) = v21 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v21 + 32))(v21, v22);
    a2[7] = 0LL;
  }
  return (unsigned int)v4;
}
