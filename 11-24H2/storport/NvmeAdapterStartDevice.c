/*
 * XREFs of NvmeAdapterStartDevice @ 0x1400D812C
 * Callers:
 *     NvmeAdapterStartDeviceIrp @ 0x1400D868C (NvmeAdapterStartDeviceIrp.c)
 *     NvmePnpAsyncStartCompleteWorker @ 0x1400DCCB0 (NvmePnpAsyncStartCompleteWorker.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     PortMiniportRegistryInitialize @ 0x14005592C (PortMiniportRegistryInitialize.c)
 *     RaGetBusData @ 0x14006901C (RaGetBusData.c)
 *     RaidQueryPciMsixTableConfigurationInterface @ 0x14008DD04 (RaidQueryPciMsixTableConfigurationInterface.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400CD5A8 (NvmeAdapterCompleteInitialization.c)
 *     NvmeAdapterConfigureResources @ 0x1400CD914 (NvmeAdapterConfigureResources.c)
 *     NvmeAdapterGetSystemPowerHint @ 0x1400D36F0 (NvmeAdapterGetSystemPowerHint.c)
 *     NvmeAdapterGetSystemPowerResumeLatency @ 0x1400D3720 (NvmeAdapterGetSystemPowerResumeLatency.c)
 *     NvmeAdapterInitializeFabricProperties @ 0x1400D3774 (NvmeAdapterInitializeFabricProperties.c)
 *     NvmeAdapterInitializeWmi @ 0x1400D3850 (NvmeAdapterInitializeWmi.c)
 *     NvmeAdapterRegisterDeviceInterface @ 0x1400D6438 (NvmeAdapterRegisterDeviceInterface.c)
 *     NvmeAdapterRestart @ 0x1400D6CDC (NvmeAdapterRestart.c)
 *     NvmeAdapterStartMiniport @ 0x1400D8B80 (NvmeAdapterStartMiniport.c)
 *     NvmeAdapterUnlock @ 0x1400DAC44 (NvmeAdapterUnlock.c)
 *     NvmeAdapterRegisterNonPoFxMiniportInterface @ 0x140131154 (NvmeAdapterRegisterNonPoFxMiniportInterface.c)
 *     NvmeControllerSystemPowerHint @ 0x140132A30 (NvmeControllerSystemPowerHint.c)
 *     RaInitializeConfiguration @ 0x1401BD05C (RaInitializeConfiguration.c)
 */

__int64 __fastcall NvmeAdapterStartDevice(__int64 Context, __int64 a2)
{
  __int32 v3; // eax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  int started; // edi
  __int64 v9; // rsi
  __int64 Pool; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int SystemPowerResumeLatency; // eax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF
  int SystemPowerHint; // [rsp+48h] [rbp-8h]
  int v25; // [rsp+4Ch] [rbp-4h]
  int Data; // [rsp+90h] [rbp+40h] BYREF
  ULONG RequiredSize; // [rsp+A0h] [rbp+50h] BYREF
  ULONG Type; // [rsp+A8h] [rbp+58h] BYREF

  Data = 0;
  RequiredSize = 0;
  Type = 0;
  v3 = _InterlockedExchange((volatile __int32 *)(Context + 84), 1);
  if ( v3 != 2 )
  {
    if ( v3 != 8 )
      return 0LL;
    *(_QWORD *)(Context + 144) |= 0x200uLL;
  }
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v5 + 16);
  started = RaInitializeConfiguration(
              (int)Context + 176,
              *(_QWORD *)(Context + 400),
              *(_DWORD *)(Context + 568),
              *(_DWORD *)(Context + 572),
              BYTE1(*(_QWORD *)(Context + 144)) & 1,
              (*(_QWORD *)(Context + 144) & 0x200LL) != 0);
  if ( started >= 0 )
  {
    v9 = *(_QWORD *)(Context + 400);
    if ( !v9 )
    {
      *(_DWORD *)(Context + 1012) = 3;
      started = -1073741810;
      goto LABEL_50;
    }
    started = NvmeAdapterConfigureResources(Context, v6, v7);
    if ( started < 0 )
    {
      *(_DWORD *)(Context + 1012) = 4;
      goto LABEL_50;
    }
    if ( *(_DWORD *)(Context + 184) == 5 )
    {
      if ( !*(_QWORD *)(Context + 576) )
      {
        Pool = RaidAllocatePool(64LL, 168LL, 1447977298LL, *(_QWORD *)(Context + 8));
        *(_QWORD *)(Context + 576) = Pool;
        if ( !Pool )
        {
          started = -1073741801;
          goto LABEL_50;
        }
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(Context + 32),
             &DEVPKEY_Device_Address,
             0,
             0,
             4u,
             &Data,
             &RequiredSize,
             &Type) >= 0 )
      {
        **(_WORD **)(Context + 576) = HIWORD(Data);
        *(_WORD *)(*(_QWORD *)(Context + 576) + 2LL) = Data;
      }
      RequiredSize = RaGetBusData(*(_QWORD *)(Context + 584) + 16LL, 4LL, *(_QWORD *)(Context + 576) + 8LL, v11, 64);
      RaidQueryPciMsixTableConfigurationInterface(Context);
    }
    if ( (*(_BYTE *)(Context + 144) & 1) != 0 && !*(_QWORD *)(Context + 592) )
    {
      started = NvmeAdapterInitializeFabricProperties((__int64 *)Context);
      if ( started < 0 )
      {
        *(_DWORD *)(Context + 1012) = 5;
        goto LABEL_50;
      }
    }
    *(_DWORD *)(Context + 904) = 64;
    PortMiniportRegistryInitialize(Context + 904);
    started = NvmeAdapterStartMiniport(Context, v9);
    if ( started >= 0 )
    {
      if ( (*(_DWORD *)(Context + 144) & 0x200LL) == 0 )
      {
        started = NvmeAdapterCompleteInitialization(Context);
        if ( started < 0 )
          goto LABEL_50;
        NvmeAdapterRegisterDeviceInterface(Context);
        NvmeAdapterInitializeWmi(Context);
        if ( **(_BYTE **)(Context + 160) != 1 && (*(_DWORD *)(Context + 144) & 0x1000LL) != 0 )
          NvmeAdapterRegisterNonPoFxMiniportInterface(Context);
      }
      if ( IsSystemAoAC && _bittest((const signed __int32 *)(*(_QWORD *)(Context + 400) + 184LL), 0x1Eu) )
      {
        if ( PoRegisterPowerSettingCallback(
               *(PDEVICE_OBJECT *)(Context + 8),
               &GUID_LOW_POWER_EPOCH,
               NvmePowerSettingCallback,
               (PVOID)Context,
               (PVOID *)(*(_QWORD *)(Context + 160) + 280LL)) >= 0 )
        {
          LOBYTE(v12) = 1;
          v13 = PoRegisterCoalescingCallback(
                  NvmeAdapterCoalescingCallback,
                  v12,
                  *(_QWORD *)(Context + 160) + 288LL,
                  Context);
          v14 = *(_QWORD *)(Context + 160);
          if ( v13 < 0 )
          {
            PoUnregisterPowerSettingCallback(*(PVOID *)(v14 + 280));
            *(_QWORD *)(*(_QWORD *)(Context + 160) + 280LL) = 0LL;
          }
          else
          {
            *(_DWORD *)(v14 + 176) &= ~0x2000u;
            v15 = *(_QWORD *)(Context + 160);
            v23[0] = 1;
            v23[1] = 16;
            *(_DWORD *)(v15 + 176) &= ~0x4000u;
            SystemPowerHint = NvmeAdapterGetSystemPowerHint(Context);
            SystemPowerResumeLatency = NvmeAdapterGetSystemPowerResumeLatency(SystemPowerHint);
            v17 = *(_QWORD *)(Context + 1136);
            v25 = SystemPowerResumeLatency;
            NvmeControllerSystemPowerHint(v17, v23);
          }
        }
        v18 = PoRegisterPowerSettingCallback(
                *(PDEVICE_OBJECT *)(Context + 8),
                &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                NvmePowerSettingCallback,
                (PVOID)Context,
                (PVOID *)(*(_QWORD *)(Context + 160) + 296LL));
        v19 = *(_QWORD *)(Context + 160);
        if ( v18 < 0 )
          *(_QWORD *)(v19 + 296) = 0LL;
        else
          *(_DWORD *)(v19 + 176) &= ~0x8000u;
        started = 0;
      }
      if ( _bittest((const signed __int32 *)(*(_QWORD *)(Context + 400) + 184LL), 0x1Eu) )
      {
        PoRegisterPowerSettingCallback(
          *(PDEVICE_OBJECT *)(Context + 8),
          &GUID_DISK_MAX_POWER,
          NvmePowerSettingCallback,
          (PVOID)Context,
          (PVOID *)(*(_QWORD *)(Context + 160) + 304LL));
        if ( IoRegisterDeviceInterface(
               *(PDEVICE_OBJECT *)(Context + 32),
               &GUID_DEVINTERFACE_THERMAL_COOLING,
               0LL,
               (PUNICODE_STRING)(*(_QWORD *)(Context + 160) + 320LL)) >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(Context + 160) + 176LL) |= 0x10000u;
          IoSetDeviceInterfaceState((PUNICODE_STRING)(*(_QWORD *)(Context + 160) + 320LL), 1u);
        }
        started = 0;
      }
      if ( (*(_DWORD *)(Context + 144) & 0x200LL) != 0 )
      {
        NvmeAdapterUnlock(Context);
        NvmeAdapterRestart(Context);
      }
      if ( (*(_DWORD *)(Context + 376) & 2) != 0 )
      {
        v20 = *(_QWORD *)(Context + 1136);
        if ( FeatureFixTRIMAddSCSIPassthrough )
          **(_QWORD **)(*(_QWORD *)(v20 + 1288) + 40LL) = KeQueryUnbiasedInterruptTime();
        if ( !_InterlockedCompareExchange(
                (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v20 + 1288) + 40LL) + 192LL),
                1,
                0) )
          KeSetCoalescableTimer(
            (PKTIMER)(*(_QWORD *)(*(_QWORD *)(v20 + 1288) + 40LL) + 128LL),
            (LARGE_INTEGER)-50000000LL,
            0x7D0u,
            0x12Cu,
            (PKDPC)(*(_QWORD *)(*(_QWORD *)(v20 + 1288) + 40LL) + 64LL));
      }
    }
  }
  else
  {
    *(_DWORD *)(Context + 1012) = 2;
  }
LABEL_50:
  v21 = *(_QWORD *)(Context + 160);
  *(_QWORD *)(Context + 144) &= ~0x200uLL;
  if ( *(_BYTE *)v21 == 1 )
  {
    v22 = *(_QWORD *)(v21 + 8);
    if ( (*(_DWORD *)(v22 + 20) & 2) != 0 )
    {
      PoFxIdleComponent(*(_QWORD *)v22, 0LL, 0LL);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Context + 160) + 8LL) + 20LL) &= ~2u;
    }
  }
  if ( started < 0 )
    _InterlockedExchange((volatile __int32 *)(Context + 84), 2);
  return (unsigned int)started;
}
