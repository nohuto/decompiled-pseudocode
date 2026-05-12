/*
 * XREFs of RaidAllocateSrb @ 0x14000EB90
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x140018EB0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueReportLuns @ 0x14001AF90 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaUnitAtaPassThroughIoctl @ 0x14004D8C4 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1400525C0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalAllocateIfRecvCommand @ 0x140084DA4 (TcglibEalAllocateIfRecvCommand.c)
 *     TcglibEalAllocateIfSendCommand @ 0x1400850B0 (TcglibEalAllocateIfSendCommand.c)
 *     StorGetNVMePollingInformation @ 0x14008F3D4 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1400987C8 (RaUnitSmartDataIoctl.c)
 *     RaidUnitAbortSrb @ 0x14009DC10 (RaidUnitAbortSrb.c)
 *     RaidUnitLogSenseCommandSrb @ 0x14009F72C (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitResetTarget @ 0x14009FE7C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1400A01E8 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A05BC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     NvmePnPPassToMiniPort @ 0x1400DC2FC (NvmePnPPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B63D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B8EB4 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401BA844 (RaidAdapterFreeMiniportDumpInfo.c)
 * Callees:
 *     RaidLogAllocationFailure @ 0x14008D748 (RaidLogAllocationFailure.c)
 */

__int64 __fastcall RaidAllocateSrb(__int64 a1, unsigned int a2, char a3, char a4)
{
  __int64 Pool2; // r14
  bool v8; // zf
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rax
  int v12; // r8d

  Pool2 = 0LL;
  if ( a3 != 1 )
  {
    Pool2 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
    if ( Pool2 || !a1 )
      return Pool2;
    v12 = 88;
    goto LABEL_34;
  }
  if ( a2 > 0x17 )
  {
    if ( a2 == 32 )
      goto LABEL_12;
    if ( a2 != 37 )
    {
      if ( a2 != 38 && a2 != 39 && a2 != 42 )
      {
        v8 = a2 == 43;
        goto LABEL_11;
      }
      goto LABEL_12;
    }
    goto LABEL_16;
  }
  if ( a2 == 23 )
  {
LABEL_16:
    v9 = 168;
    goto LABEL_17;
  }
  if ( a2 )
  {
    if ( a2 == 2 || a2 == 9 )
      goto LABEL_12;
    if ( a2 != 10 )
    {
      if ( a2 != 16 )
      {
        v8 = a2 == 19;
LABEL_11:
        if ( !v8 )
          return Pool2;
      }
LABEL_12:
      v9 = 144;
      v10 = 0;
      goto LABEL_13;
    }
    v9 = 256;
LABEL_17:
    v10 = 1;
LABEL_13:
    v11 = ExAllocatePool2(64LL, v9, 1918067026LL);
    Pool2 = v11;
    if ( v11 )
    {
      *(_BYTE *)(v11 + 2) = 40;
      *(_WORD *)v11 = 8;
      *(_DWORD *)(v11 + 8) = 1397899864;
      *(_DWORD *)(v11 + 12) = 1;
      *(_DWORD *)(v11 + 16) = v9;
      *(_DWORD *)(v11 + 20) = a2;
      *(_WORD *)(v11 + 36) = 2;
      *(_DWORD *)(v11 + 52) = 128;
      *(_DWORD *)(v11 + 56) = v10;
      *(_WORD *)(v11 + 128) = 1;
      *(_DWORD *)(v11 + 132) = 4;
      if ( v10 )
        *(_DWORD *)(v11 + 120) = 144;
      return Pool2;
    }
    if ( a1 )
    {
      v12 = v9;
LABEL_34:
      RaidLogAllocationFailure(a1, 64, v12, 1918067026, 0x80000000);
    }
    return Pool2;
  }
  if ( (a4 & 1) != 0 )
  {
    v9 = 184;
    goto LABEL_17;
  }
  return 0LL;
}
