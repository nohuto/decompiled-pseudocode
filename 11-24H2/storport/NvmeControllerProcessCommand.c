/*
 * XREFs of NvmeControllerProcessCommand @ 0x140129520
 * Callers:
 *     NvmeControllerGetChangedNamespaceListLog @ 0x1400BEBD0 (NvmeControllerGetChangedNamespaceListLog.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerReConfigAsyncEvent @ 0x1400C9230 (NvmeControllerReConfigAsyncEvent.c)
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D0584 (NvmeAdapterFirmwareActivateIoctl.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D17BC (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D2588 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400D74F4 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     NvmeControllerGetTemperatureThresholdWorkerCompletion @ 0x1400DB1A0 (NvmeControllerGetTemperatureThresholdWorkerCompletion.c)
 *     NvmeGetStorageTemperaturePropertyComplete @ 0x1400DB9B0 (NvmeGetStorageTemperaturePropertyComplete.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400EA850 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerSendAsyncEventCommand @ 0x1400F4F3C (NvmeControllerSendAsyncEventCommand.c)
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x1400FB5C8 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x140100A80 (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceFlushWorker @ 0x140103300 (NvmeNamespaceFlushWorker.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x1401128C0 (NvmeNamespaceStorMQFirmwareGetInfoIoctl.c)
 *     NvmeContinueScatterGatherProcessCommand @ 0x140128BD0 (NvmeContinueScatterGatherProcessCommand.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14012AD40 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeQueryProtocolInfoFeatureData @ 0x14012B8A0 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012BDE4 (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x14012C13C (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x14012D404 (NvmeSetProtocolInfoFeatureData.c)
 *     NvmeAdapterGetTemperatureProperty @ 0x14019A77C (NvmeAdapterGetTemperatureProperty.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019CCFC (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401AA82C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AB7AC (NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl.c)
 * Callees:
 *     StorAttemptInsertDeviceQueue @ 0x140127370 (StorAttemptInsertDeviceQueue.c)
 *     StorPushRequestToDeviceQueue @ 0x1401277F0 (StorPushRequestToDeviceQueue.c)
 *     NvmeControllerProcessPendingCommand @ 0x1401297E0 (NvmeControllerProcessPendingCommand.c)
 *     NvmeControllerSendNonReadWriteCommand @ 0x140129D10 (NvmeControllerSendNonReadWriteCommand.c)
 */

__int64 __fastcall NvmeControllerProcessCommand(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 CurrentProcessorNumber; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // ebx
  int v14; // ebx
  signed __int32 v15[8]; // [rsp+0h] [rbp-38h] BYREF

  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 0xEu);
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 0xFu);
  *(_WORD *)(*(_QWORD *)a2 + 4264LL) = 0;
  if ( *(_BYTE *)(a1 + 1228) )
    return 3221225486LL;
  _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 0xFu);
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( (*(_QWORD *)(a1 + 968) & 1) == 0 )
    *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x800u;
  if ( (*(_QWORD *)(a1 + 968) & 0x2000000LL) != 0 || (*(_QWORD *)(a1 + 968) & 0x4000000LL) != 0 )
    *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x800u;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1288) + 4LL) )
    *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x800u;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x800) == 0 )
  {
    if ( (a2[12] & 4) != 0 )
    {
      v6 = *(_QWORD *)a2;
      a2[16] = CurrentProcessorNumber;
      _InterlockedIncrement16((volatile signed __int16 *)(v6 + 4264));
    }
    v7 = *(_QWORD *)(a1 + 128);
    v8 = *(_QWORD *)(v7 + 160);
    if ( *(_BYTE *)v8 == 1 )
    {
      if ( _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v8 + 16) + 8 * CurrentProcessorNumber)) == 1 )
      {
        if ( KeGetCurrentIrql() >= 2u || (v9 = *(_QWORD *)(v7 + 160), (*(_DWORD *)(v9 + 76) & 6) != 0) )
        {
          v11 = 2LL;
          v10 = *(_QWORD **)(*(_QWORD *)(v7 + 160) + 8LL);
        }
        else
        {
          v10 = *(_QWORD **)(v9 + 8);
          v11 = 1LL;
        }
        PoFxActivateComponent(*v10, 0LL, v11);
      }
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 160) + 8LL) + 64LL) != 1 )
      {
        if ( *(_QWORD *)a2 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
          if ( v12 )
            *(_BYTE *)(*(_QWORD *)(v12 + 184) + 3LL) |= 1u;
        }
        v13 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL);
        StorPushRequestToDeviceQueue(*(_QWORD *)(a1 + 1024), CurrentProcessorNumber, (signed __int64)a2);
        if ( (v13 & 1) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 960));
        _InterlockedOr(v15, 0);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL) + 64LL) == 1 )
        {
          NvmeControllerProcessPendingCommand(a1, CurrentProcessorNumber, 0, 0, 0);
          return 259LL;
        }
        return 259LL;
      }
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)a2 + 4184LL) )
  {
    v14 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 1;
    if ( StorAttemptInsertDeviceQueue(*(volatile signed __int32 **)(a1 + 1024), a2, 0, CurrentProcessorNumber, a1) )
    {
      if ( !(_BYTE)v14 )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 960));
      return 259LL;
    }
  }
  result = NvmeControllerSendNonReadWriteCommand(a1, (_DWORD)a2, CurrentProcessorNumber, 0, 0LL);
  if ( (_DWORD)result == -2147483631 )
    return 259LL;
  return result;
}
