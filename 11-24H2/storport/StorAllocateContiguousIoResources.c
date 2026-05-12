/*
 * XREFs of StorAllocateContiguousIoResources @ 0x14001EE28
 * Callers:
 *     RaidUnitSubmitResetRequest @ 0x140005A88 (RaidUnitSubmitResetRequest.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitAllocateResources @ 0x1400264C0 (RaidUnitAllocateResources.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1400525C0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaInitializePower @ 0x14005352C (RaInitializePower.c)
 *     StorUnitExecuteNvmeSrb @ 0x140053630 (StorUnitExecuteNvmeSrb.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortGetUncachedExtension @ 0x140073D40 (StorPortGetUncachedExtension.c)
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x14008F3D4 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B63D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B8EB4 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401BA844 (RaidAdapterFreeMiniportDumpInfo.c)
 * Callees:
 *     IsDmarEnabled @ 0x140011E00 (IsDmarEnabled.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorAllocateContiguousIoResources(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 ContiguousNodeMemory; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v12[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3[539];
  v12[0] = 0LL;
  v6 = a3[110];
  v7 = a3[538];
  v14 = v3;
  v13 = a3[540];
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() && a3[703] )
    a1 += 24;
  if ( IsDmarEnabled((__int64)a3) )
    ContiguousNodeMemory = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)(v6 + 8) + 272LL))(
                             v6,
                             &v14,
                             &v13,
                             a1,
                             0,
                             0LL,
                             0x80000000,
                             v12);
  else
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(a1, v14, v13, v7, 4, 0x80000000);
  v9 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
  {
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_QWORD *)(v9 + 840) = 0LL;
      if ( a3[702] )
      {
        *(_QWORD *)(v9 + 840) = v9 + 856;
        *(_OWORD *)(v9 + 856) = 0LL;
        *(_QWORD *)(v9 + 872) = 0LL;
      }
    }
    else if ( a3[703] )
    {
      v10 = v9 + a1 - 24LL;
      *(_QWORD *)(v9 + 840) = v10;
      *(_OWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
    }
    else
    {
      *(_QWORD *)(v9 + 840) = 0LL;
    }
    *(_QWORD *)(v9 + 24) = v12[0];
    *(_DWORD *)(v9 + 16) = a1;
  }
  return v9;
}
