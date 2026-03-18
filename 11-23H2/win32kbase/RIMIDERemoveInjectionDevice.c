/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C0178FA8
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C0149F40 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C0173B64 (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMVirtDeviceNotifyAsyncWorkItem @ 0x1C01A28A4 (RIMVirtDeviceNotifyAsyncWorkItem.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDFF0 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F1D7C (-RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMFreeSpecificDev @ 0x1C00C8F08 (RIMFreeSpecificDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C0170F30 (RIMFreeDev.c)
 *     rimEndAllActiveContactsWorker @ 0x1C018E454 (rimEndAllActiveContactsWorker.c)
 */

void __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // edx
  _UNKNOWN **v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 256) & 0x2000) == 0 || (*(_DWORD *)(a1 + 272) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1600);
  v3 = *(_QWORD *)(a1 + 408);
  RIMLockExclusive(v3 + 760);
  if ( (*(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xC8) & 0x80u) != 0
    && !*(_BYTE *)(v3 + 80)
    && !*(_BYTE *)(v3 + 81) )
  {
    rimEndAllActiveContactsWorker((struct RawInputManagerObject *)v3);
  }
  v6 = &WPP_RECORDER_INITIALIZED;
  if ( (*(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB8) & 0x20) == 0
    && *(_BYTE *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x30) != 3 )
  {
    v7 = *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xBC);
    if ( (v7 & 8) != 0 || *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xC0) || (v7 & 0x10) != 0 )
    {
      v4 = (a1 + 72) & -(__int64)(a1 != 0);
      *(_DWORD *)(v4 + 200) |= 1u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v5) = 0;
      }
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          (_DWORD)v6,
          (_DWORD)gRimLog,
          4,
          1,
          54,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
          a1 != 0 ? a1 + 72 : 0);
      }
      v2 = 0;
    }
  }
  *(_QWORD *)(v3 + 768) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 760, 0LL);
  KeLeaveCriticalRegion();
  if ( v2 )
  {
    if ( (*(_QWORD *)(v3 + 832) || *(_DWORD *)(v3 + 1056)) && *(_QWORD *)(v3 + 32) != PsGetCurrentProcess(v9, v8, v10)
      || *(_BYTE *)(v3 + 82) )
    {
      *(_DWORD *)(a1 + 256) |= 0x100000u;
      v15 = SGDGetUserSessionState(v9, v8, v10, v11);
      RIMLockExclusive(v15 + 240);
      *(_DWORD *)(a1 + 272) |= 4u;
      v20 = SGDGetUserSessionState(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 248) = 0LL;
      ExReleasePushLockExclusiveEx(v20 + 240, 0LL);
      KeLeaveCriticalRegion();
      *(_DWORD *)(a1 + 256) |= 0x800000u;
      ZwSetEvent(*(HANDLE *)(v3 + 344), 0LL);
    }
    else
    {
      rimDoRimDevChange(v3, (a1 + 72) & -(__int64)(a1 != 0), 3u);
      if ( *(_BYTE *)(v3 + 81) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v12) = 0;
        }
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v13,
            (_DWORD)gRimLog,
            3,
            1,
            55,
            (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
        RIMFreeSpecificDev(v3, (a1 + 72) & -(__int64)(a1 != 0), v13, v14);
      }
      else if ( !*(_BYTE *)(v3 + 82) )
      {
        RIMFreeDev(v3, (a1 + 72) & -(__int64)(a1 != 0));
      }
    }
  }
}
