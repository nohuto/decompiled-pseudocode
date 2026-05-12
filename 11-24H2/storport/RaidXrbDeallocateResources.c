/*
 * XREFs of RaidXrbDeallocateResources @ 0x140011E50
 * Callers:
 *     RaAdapterStartPowerIo @ 0x1400104F4 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1400525C0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x14008F3D4 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1400BE310 (StorUnitExecuteNvmeSrbComplete.c)
 *     NvmePnPPassToMiniPort @ 0x1400DC2FC (NvmePnPPassToMiniPort.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400DC604 (NvmePnPPassToStorMQMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B63D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B8EB4 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401BA844 (RaidAdapterFreeMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidXrbDeallocateResources(__int64 a1, int a2)
{
  KIRQL v2; // si
  __int64 v5; // rcx
  struct _MDL *v6; // rcx
  __int64 v7; // rax
  int v8; // ebp
  bool v9; // bp
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  void (__fastcall *v13)(__int64, _QWORD, bool); // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  void (__fastcall *v18)(__int64, __int64, _QWORD); // rax
  struct _MDL *v19; // rcx

  if ( a1 )
  {
    v2 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      v7 = *(_QWORD *)(a1 + 168);
      if ( *(_BYTE *)(v7 + 2) == 40 )
        v8 = *(_DWORD *)(v7 + 24);
      else
        v8 = *(_DWORD *)(v7 + 12);
      v9 = (v8 & 0x40) == 0;
      if ( RaidVerifierEnabled )
      {
        v19 = *(struct _MDL **)(a1 + 120);
        if ( v19 )
        {
          MmProtectMdlSystemAddress(v19, 4u);
          MmUnlockPages(*(PMDL *)(a1 + 120));
          IoFreeMdl(*(PMDL *)(a1 + 120));
          *(_QWORD *)(a1 + 120) = 0LL;
        }
      }
      if ( !a2 )
        v2 = KfRaiseIrql(2u);
      v10 = (__int64 *)(*(_QWORD *)(a1 + 216) + 880LL);
      if ( *(_QWORD *)(a1 + 216) != -880LL )
      {
        v11 = *v10;
        if ( *v10 )
        {
          v12 = *(_QWORD *)(v11 + 8);
          if ( v12 )
          {
            v13 = *(void (__fastcall **)(__int64, _QWORD, bool))(v12 + 96);
            if ( v13 )
              v13(v11, *(_QWORD *)(a1 + 112), v9);
          }
        }
      }
      v14 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      if ( v14 )
      {
        v15 = (__int64 *)(*(_QWORD *)(a1 + 216) + 880LL);
        if ( *(_QWORD *)(a1 + 216) != -880LL )
        {
          v16 = *v15;
          if ( *v15 )
          {
            v17 = *(_QWORD *)(v16 + 8);
            if ( v17 )
            {
              v18 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v17 + 96);
              if ( v18 )
                v18(v16, v14, 0LL);
            }
          }
        }
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      if ( !a2 )
        KeLowerIrql(v2);
    }
    v5 = *(_QWORD *)(a1 + 104);
    if ( v5 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v5 + 10) & 2) != 0 )
        MmUnlockPages((PMDL)v5);
      IoFreeMdl(*(PMDL *)(a1 + 104));
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v6 = *(struct _MDL **)(a1 + 136);
    if ( v6 )
    {
      MmUnlockPages(v6);
      IoFreeMdl(*(PMDL *)(a1 + 136));
      *(_QWORD *)(a1 + 136) = 0LL;
    }
  }
}
