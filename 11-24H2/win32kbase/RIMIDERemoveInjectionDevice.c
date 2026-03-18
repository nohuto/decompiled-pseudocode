/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x14005B144
 * Callers:
 *     ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x14005B480 (-RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     NtUserRemoveInjectionDevice @ 0x14019A120 (NtUserRemoveInjectionDevice.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1401D3584 (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMRemoveInjectionDevice @ 0x1401D87A0 (RIMRemoveInjectionDevice.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216F50 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     rimEndAllActiveContactsWorker @ 0x1400568CC (rimEndAllActiveContactsWorker.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 *     RIMFreeSpecificDev @ 0x1401D1E88 (RIMFreeSpecificDev.c)
 */

void __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // si
  bool v15; // r14
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-58h]

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 240) & 0x2000) == 0 || (*(_DWORD *)(a1 + 256) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1619LL);
  v3 = *(_QWORD *)(a1 + 392);
  RIMLockExclusive(v3 + 760);
  if ( (*(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB8) & 0x80u) != 0
    && !*(_BYTE *)(v3 + 80)
    && !*(_BYTE *)(v3 + 81) )
  {
    rimEndAllActiveContactsWorker(
      (struct RawInputManagerObject *)v3,
      *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x1C8),
      0LL);
  }
  if ( (*(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xA8) & 0x20) == 0
    && *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x30) != 3 )
  {
    v5 = *(_DWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xAC);
    if ( (v5 & 8) != 0 || *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0xB0) || (v5 & 0x10) != 0 )
    {
      v4 = (a1 + 72) & -(__int64)(a1 != 0);
      *(_DWORD *)(v4 + 184) |= 1u;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        LOBYTE(v2) = 0;
      }
      v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v8) = v6;
        LOBYTE(v9) = v2;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v9,
          v8,
          *(_QWORD *)(UserSessionState + 19392),
          4,
          1,
          55,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
          a1 != 0 ? a1 + 72 : 0);
      }
      v2 = 0;
    }
  }
  RIMUnlockExclusive(v3 + 760);
  if ( v2 )
  {
    if ( (*(_QWORD *)(v3 + 832) || *(_DWORD *)(v3 + 1056))
      && *(_QWORD *)(v3 + 32) != PsGetCurrentProcess(v11, v10, v12, v13, v22)
      || *(_BYTE *)(v3 + 82) )
    {
      *(_DWORD *)(a1 + 240) |= 0x100000u;
      v19 = W32GetUserSessionState(v11);
      RIMLockExclusive(v19 + 56);
      *(_DWORD *)(a1 + 256) |= 4u;
      v21 = W32GetUserSessionState(v20);
      RIMUnlockExclusive(v21 + 56);
      *(_DWORD *)(a1 + 240) |= 0x800000u;
      ZwSetEvent(*(HANDLE *)(v3 + 344), 0LL);
    }
    else
    {
      rimDoRimDevChange(v3, (a1 + 72) & -(__int64)(a1 != 0), 3LL);
      if ( *(_BYTE *)(v3 + 81) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v14 = 0;
        }
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(v16 + 19392),
            3,
            1,
            56,
            (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
        }
        RIMFreeSpecificDev((struct RawInputManagerObject *)v3);
      }
      else if ( !*(_BYTE *)(v3 + 82) )
      {
        RIMFreeDev((struct RawInputManagerObject *)v3, (struct RIMDEV *)((a1 + 72) & -(__int64)(a1 != 0)));
      }
    }
  }
}
