/*
 * XREFs of Command_WdfEvtWatchdogTimerFunction @ 0x14003D690
 * Callers:
 *     <none>
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     Command_StartCommandWatchdogTimer @ 0x14000ACE4 (Command_StartCommandWatchdogTimer.c)
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     Command_InternalSendCommand @ 0x14000C004 (Command_InternalSendCommand.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_qd @ 0x140019E0C (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     XilRegister_WriteUlong64 @ 0x14001AC40 (XilRegister_WriteUlong64.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     XilCommand_WriteDoorbell @ 0x14002C2D0 (XilCommand_WriteDoorbell.c)
 *     Command_ProcessCrbCompletion @ 0x14002EC48 (Command_ProcessCrbCompletion.c)
 *     Controller_SetControllerGone @ 0x14003C400 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_qL @ 0x14003E044 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLd @ 0x14003E170 (WPP_RECORDER_SF_qLd.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x14003E5BC (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x14003EB14 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x14003ED48 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilRegister_ReadUlong64 @ 0x1400494D4 (XilRegister_ReadUlong64.c)
 *     Etw_CommandCompleteError @ 0x14004E65C (Etw_CommandCompleteError.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall Command_WdfEvtWatchdogTimerFunction(__int64 a1)
{
  char v1; // bl
  char v2; // si
  __int64 (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64); // rax
  char v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  char IsControllerAccessible; // r12
  unsigned __int8 v8; // r13
  __int64 v9; // rbx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 Ulong64; // rax
  __int64 **v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rdx
  __int64 v19; // rdx
  char v20; // si
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rdx
  __int128 *v26; // rdx
  int v27; // r9d
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _OWORD ***v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 **v36; // rcx
  __int64 *v37; // rax
  __int64 *v38; // rdx
  __int64 *v39; // rdx
  __int64 *result; // rax
  int v41; // edx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 *v44; // rcx
  int v45; // [rsp+20h] [rbp-50h]
  __int64 v46; // [rsp+28h] [rbp-48h]
  __int64 v47; // [rsp+30h] [rbp-40h]
  __int64 v48; // [rsp+38h] [rbp-38h]
  char v49[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v50; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v51; // [rsp+50h] [rbp-20h]
  __int128 v52; // [rsp+58h] [rbp-18h] BYREF
  char v53; // [rsp+C8h] [rbp+58h] BYREF

  v1 = 0;
  v2 = 0;
  v52 = 0LL;
  v53 = 0;
  v3 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2568);
  v4 = 0;
  v49[0] = 0;
  v5 = v3(WdfDriverGlobals, a1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v5,
         off_14006B038);
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 1001LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      1057);
  if ( !KeGetCurrentIrql() )
    Command_StartCommandWatchdogTimer(v6);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v6 + 8));
  v8 = 0;
  v51 = &v50;
  v50 = (__int64)&v50;
  DynamicLock_Acquire(*(_QWORD *)(v6 + 112));
  if ( !IsControllerAccessible )
    goto LABEL_20;
  if ( *(_DWORD *)(v6 + 36) != 1 )
  {
    v20 = 0;
    goto LABEL_97;
  }
  v9 = *(_QWORD *)(v6 + 80);
  if ( v9 == v6 + 80 )
    goto LABEL_95;
  if ( *(_BYTE *)(v6 + 136) )
  {
    XilCommand_SendQueryIsRingRunningRequest(v6 + 136, v49, &v53);
    v4 = v53;
    v2 = v49[0];
  }
  else
  {
    Ulong64 = XilRegister_ReadUlong64(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 168) + 8LL) + 88LL),
                *(_QWORD *)(v6 + 176));
    if ( Ulong64 == -1 )
    {
      v4 = 1;
    }
    else if ( (Ulong64 & 8) != 0 )
    {
      v2 = 1;
    }
  }
  if ( *(int *)(v9 + 56) > 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v46) = HIDWORD(v9);
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
      4u,
      7u,
      0x1Du,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
  }
  if ( v4 )
  {
    IsControllerAccessible = 0;
    v1 = 1;
LABEL_20:
    if ( *(_BYTE *)(v6 + 128) )
    {
      v14 = (__int64 **)(v6 + 80);
      while ( 1 )
      {
        v15 = *v14;
        if ( *v14 == (__int64 *)v14 )
          break;
        if ( (__int64 **)v15[1] != v14 )
          goto LABEL_106;
        v16 = (__int64 *)*v15;
        if ( *(__int64 **)(*v15 + 8) != v15 )
          goto LABEL_106;
        *v14 = v16;
        v16[1] = (__int64)v14;
        v17 = v51;
        if ( (__int64 *)*v51 != &v50 )
          goto LABEL_106;
        v15[1] = (__int64)v51;
        *v15 = (__int64)&v50;
        *v17 = (__int64)v15;
        v51 = v15;
      }
      v36 = (__int64 **)(v6 + 96);
      while ( 1 )
      {
        v37 = *v36;
        if ( *v36 == (__int64 *)v36 )
          break;
        if ( (__int64 **)v37[1] != v36 )
          goto LABEL_106;
        v38 = (__int64 *)*v37;
        if ( *(__int64 **)(*v37 + 8) != v37 )
          goto LABEL_106;
        *v36 = v38;
        v38[1] = (__int64)v36;
        v39 = v51;
        if ( (__int64 *)*v51 != &v50 )
          goto LABEL_106;
        v37[1] = (__int64)v51;
        *v37 = (__int64)&v50;
        *v39 = (__int64)v37;
        v51 = v37;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v6 + 24),
      0LL);
    v20 = 0;
    goto LABEL_97;
  }
  if ( !*(_BYTE *)(v6 + 121) )
  {
    v33 = *(_DWORD *)(v9 + 56) - 1;
    *(_DWORD *)(v9 + 56) = v33;
    if ( v33 == 5 || !v33 )
    {
      if ( v2 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v33,
            7,
            39,
            (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(v6 + 24),
          0LL);
        *(_DWORD *)(v6 + 36) = 2;
        v20 = 1;
        if ( (*(_BYTE *)(v9 + 62) & 1) != 0 )
        {
          v8 = 1;
LABEL_85:
          v1 = 0;
          goto LABEL_97;
        }
LABEL_96:
        v1 = 0;
        goto LABEL_97;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLd(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          v33,
          v11,
          v12,
          v45,
          v9,
          (unsigned __int16)*(_DWORD *)(v9 + 36) >> 10,
          v33);
      if ( (unsigned __int8)HIBYTE(*(_WORD *)(v9 + 36)) >> 2 != 11 || (*(_DWORD *)(v9 + 36) & 0x200) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v48) = (unsigned __int8)HIBYTE(*(_WORD *)(v9 + 36)) >> 2;
          LODWORD(v47) = (*(_DWORD *)(v9 + 36) >> 9) & 1;
          LODWORD(v46) = 5;
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            2u,
            7u,
            0x26u,
            (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
            v46,
            v47,
            v48);
        }
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(v6 + 8),
          0,
          0,
          0x4000LL,
          "A command timed out, aborting command next",
          (__int128 *)(v9 + 24),
          0LL);
      }
      *(_BYTE *)(v6 + 121) = 1;
      *(_DWORD *)(v6 + 124) = 5;
      if ( *(_BYTE *)(v6 + 136) )
      {
        XilCommand_SendAbortRingCommandRequest(v6 + 136);
      }
      else
      {
        v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 168) + 8LL) + 88LL);
        v35 = XilRegister_ReadUlong64(v34, *(_QWORD *)(v6 + 176));
        XilRegister_WriteUlong64(v34, *(_DWORD **)(v6 + 176), v35 | 4);
      }
    }
LABEL_95:
    v20 = 0;
    goto LABEL_96;
  }
  if ( (*(_DWORD *)(v6 + 124))-- != 1 )
    goto LABEL_95;
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
        v10,
        7,
        30,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v6 + 8),
      0,
      0,
      4096LL,
      "Command abort timed out, command ring still running, resetting the controller",
      (__int128 *)(*(_QWORD *)(v6 + 72) + 16LL * *(unsigned int *)(v6 + 44)),
      0LL);
    v19 = *(_QWORD *)(v6 + 24);
    *(_BYTE *)(v6 + 121) = 0;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2560))(
      WdfDriverGlobals,
      v19,
      0LL);
    *(_DWORD *)(v6 + 36) = 2;
    v20 = 1;
    v8 = *(_BYTE *)(v9 + 62) & 1;
    goto LABEL_85;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
      v10,
      7,
      31,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
  }
  v20 = 0;
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD *)(v6 + 8),
    0,
    0,
    0x2000LL,
    "Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
    (__int128 *)(*(_QWORD *)(v6 + 72) + 16LL * *(unsigned int *)(v6 + 44)),
    0LL);
  *(_BYTE *)(v6 + 121) = 0;
  v24 = *(_DWORD *)(v9 + 56);
  switch ( v24 )
  {
    case 0:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          v21,
          7,
          34,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          0);
      }
      v28 = *(_QWORD *)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || (v29 = *(_QWORD **)(v9 + 8), *v29 != v9) )
LABEL_106:
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      v30 = (unsigned int)++*(_DWORD *)(v6 + 44);
      if ( (_DWORD)v30 == *(_DWORD *)(v6 + 48) )
      {
        *(_DWORD *)(v6 + 44) = 0;
        v30 = 0LL;
      }
      XilCommand_AdvanceCommandRingControlDequeuePointer(v6, v30);
      goto LABEL_40;
    case 5:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v27 = 33;
      LOBYTE(v21) = 2;
      goto LABEL_48;
    case 10:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_49:
        v9 = 0LL;
        goto LABEL_40;
      }
      v27 = 32;
      LOBYTE(v21) = 4;
LABEL_48:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
        v21,
        7,
        v27,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        v24);
      goto LABEL_49;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
      v21,
      7,
      35,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
      v24);
  }
LABEL_40:
  if ( *(_QWORD *)(v6 + 80) != v6 + 80 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 16), v21, 7, 36, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
    }
    XilCommand_WriteDoorbell(v6);
  }
  v25 = *(_QWORD *)(v6 + 96);
  if ( v25 != v6 + 96 )
  {
    v52 = *(_OWORD *)(v6 + 96);
    *(_QWORD *)(v25 + 8) = &v52;
    **((_QWORD **)&v52 + 1) = &v52;
    *(_QWORD *)(v6 + 104) = v6 + 96;
    *(_QWORD *)(v6 + 96) = v6 + 96;
    goto LABEL_60;
  }
  v26 = &v52;
  *((_QWORD *)&v52 + 1) = &v52;
  *(_QWORD *)&v52 = &v52;
  while ( v26 != &v52 )
  {
    if ( *((__int128 **)v26 + 1) != &v52 )
      goto LABEL_106;
    v31 = *(_OWORD ****)v26;
    if ( *(__int128 **)(*(_QWORD *)v26 + 8LL) != v26 )
      goto LABEL_106;
    *(_QWORD *)&v52 = *(_QWORD *)v26;
    v31[1] = (_OWORD **)&v52;
    Command_InternalSendCommand(v6, (__int64)v26, v22, v23);
LABEL_60:
    v26 = (__int128 *)v52;
  }
  if ( v9 )
  {
    DynamicLock_Release(*(_QWORD *)(v6 + 112));
    *(_BYTE *)(v9 + 60) = 25;
    Etw_CommandCompleteError(v32, v6, v9, 2LL);
    Command_ProcessCrbCompletion(v9);
    DynamicLock_Acquire(*(_QWORD *)(v6 + 112));
  }
  v1 = 0;
LABEL_97:
  result = (__int64 *)DynamicLock_Release(*(_QWORD *)(v6 + 112));
  if ( !IsControllerAccessible )
  {
    if ( v1 == 1 )
      Controller_SetControllerGone(*(_QWORD *)(v6 + 8), 1);
    while ( 1 )
    {
      v42 = v50;
      result = &v50;
      if ( (__int64 *)v50 == &v50 )
        break;
      if ( *(__int64 **)(v50 + 8) != &v50 )
        goto LABEL_106;
      v43 = *(_QWORD *)v50;
      if ( *(_QWORD *)(*(_QWORD *)v50 + 8LL) != v50 )
        goto LABEL_106;
      v44 = &v50;
      v50 = *(_QWORD *)v50;
      *(_QWORD *)(v43 + 8) = &v50;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v41) = 4;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          v41,
          7,
          40,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          v42,
          (unsigned __int8)HIBYTE(*(_WORD *)(v42 + 36)) >> 2);
      }
      Etw_CommandCompleteError(v44, v6, v42, 3LL);
      Command_ProcessCrbCompletion(v42);
    }
  }
  if ( v20 == 1 )
    return (__int64 *)Controller_ReportFatalError(*(_QWORD *)(v6 + 8), (v8 ^ 1u) + 1, 4105, 0, 0LL, 0LL, 0LL);
  return result;
}
