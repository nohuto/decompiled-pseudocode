/*
 * XREFs of RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0
 * Callers:
 *     RaAdapterStartPowerIo @ 0x1400104F4 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1400525C0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorUnitExecuteNvmeSrb @ 0x140053630 (StorUnitExecuteNvmeSrb.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x14006A0A0 (RaidAdapterProgramCryptoKeyRoutine.c)
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
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x140012F48 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterRaiseIrqlAndExecuteXrb(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  KIRQL v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // edi
  bool v9; // di
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64, _QWORD, __int64); // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // edi
  int v18; // r14d
  int v19; // edi
  unsigned int v20; // ebp
  int v21; // ecx
  bool v22; // r14
  __int64 *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, bool, _QWORD *, int); // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, int); // rax
  __int64 *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  void (__fastcall *v33)(__int64, _QWORD, __int64); // rax
  int v34; // [rsp+38h] [rbp-50h]

  v5 = KfRaiseIrql(2u);
  if ( !*(_BYTE *)(a1 + 4370) )
  {
LABEL_13:
    v15 = RaidAdapterPostScatterGatherExecute(a1, a2);
    goto LABEL_14;
  }
  v6 = a2[21];
  v7 = *(unsigned __int8 *)(v6 + 2);
  if ( (_BYTE)v7 == 40 )
    v8 = *(_DWORD *)(v6 + 24);
  else
    v8 = *(_DWORD *)(v6 + 12);
  if ( (*(_BYTE *)(a1 + 4371) & 4) != 0 )
  {
    v9 = (v8 & 0x40) != 0;
    if ( a2[13] )
    {
      v10 = (__int64 *)(a1 + 880);
      if ( a1 != -880 )
      {
        v11 = *v10;
        if ( *v10 )
        {
          v12 = *(_QWORD *)(v11 + 8);
          if ( v12 )
          {
            if ( *(int *)(a1 + 908) >= 3 && (v13 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v12 + 240)) != 0LL )
            {
              LOBYTE(v4) = v9;
              v13(v11, a2[13], v4);
            }
            else
            {
              LOBYTE(v4) = 1;
              LOBYTE(v12) = v9;
              KeFlushIoBuffers(a2[13], v12, v4);
            }
          }
        }
      }
    }
    v14 = a2[17];
    if ( v14 )
    {
      v30 = (__int64 *)(a1 + 880);
      if ( a1 != -880 )
      {
        v31 = *v30;
        if ( *v30 )
        {
          v32 = *(_QWORD *)(v31 + 8);
          if ( v32 )
          {
            if ( *(int *)(a1 + 908) >= 3 && (v33 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v32 + 240)) != 0LL )
            {
              LOBYTE(v4) = v9;
              v33(v31, a2[17], v4);
            }
            else
            {
              LOBYTE(v4) = 1;
              LOBYTE(v32) = v9;
              KeFlushIoBuffers(v14, v32, v4);
            }
          }
        }
      }
    }
    goto LABEL_13;
  }
  if ( a2[17] )
  {
    v15 = RaidAdapterScatterGatherExecuteBidirectionalRequest(a1, a2);
    goto LABEL_14;
  }
  if ( (v8 & 0xC0) == 0 )
    goto LABEL_13;
  if ( (_BYTE)v7 == 40 )
  {
    v18 = *(_DWORD *)(v6 + 24);
    v20 = *(_DWORD *)(v6 + 60);
    v19 = *(_DWORD *)(v6 + 20);
  }
  else
  {
    v18 = *(_DWORD *)(v6 + 12);
    v19 = *(unsigned __int8 *)(v6 + 2);
    v20 = *(_DWORD *)(v6 + 16);
  }
  v21 = v18 & 0x40;
  v22 = (v18 & 0x80) != 0;
  if ( (*(_DWORD *)(a1 + 604) & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    LOBYTE(v4) = 1;
    LOBYTE(v7) = v21 != 0;
    KeFlushIoBuffers(a2[13], v7, v4);
  }
  if ( v19 == 23 && *(_DWORD *)(a2[13] + 40LL) > v20 )
    v20 = *(_DWORD *)(a2[13] + 40LL);
  v23 = (__int64 *)(a1 + 880);
  if ( a1 == -880 )
    goto LABEL_35;
  v24 = *v23;
  if ( !*v23 )
    goto LABEL_35;
  v25 = *(_QWORD *)(v24 + 8);
  if ( !v25 )
    goto LABEL_35;
  v26 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, bool, _QWORD *, int))(v25 + 112);
  if ( !v26 )
    goto LABEL_35;
  v16 = v26(v24, *(_QWORD *)(a1 + 8), a2[13], a2[23], v20, RaidpAdapterContinueScatterGather, a2, v22, a2 + 29, 424);
  if ( v16 != -1073741789 )
    goto LABEL_15;
  v27 = *v23;
  if ( !*v23
    || (v28 = *(_QWORD *)(v27 + 8)) == 0
    || (v29 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, int))(v28 + 88)) == 0LL )
  {
LABEL_35:
    v16 = -1073741811;
    goto LABEL_15;
  }
  LOBYTE(v34) = v22;
  v15 = v29(v27, *(_QWORD *)(a1 + 8), a2[13], a2[23], v20, RaidpAdapterContinueScatterGather, a2, v34);
LABEL_14:
  v16 = v15;
LABEL_15:
  KeLowerIrql(v5);
  return v16;
}
