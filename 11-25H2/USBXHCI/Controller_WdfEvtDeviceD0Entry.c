/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1400382B0
 * Callers:
 *     <none>
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     Register_ControllerStop @ 0x14000C7B8 (Register_ControllerStop.c)
 *     Register_BiosHandoff @ 0x14000C998 (Register_BiosHandoff.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Command_D0Entry @ 0x14000D5A0 (Command_D0Entry.c)
 *     DeviceSlot_D0Entry @ 0x14000D5FC (DeviceSlot_D0Entry.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1400242D4 (DeviceSlot_D0EntryCleanupState.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x140024378 (DeviceSlot_DisableAllDeviceSlots.c)
 *     RootHub_D0Entry @ 0x140028064 (RootHub_D0Entry.c)
 *     Register_ControllerReset @ 0x14002D87C (Register_ControllerReset.c)
 *     Register_SetClearSSICPortUnused @ 0x14002DC58 (Register_SetClearSSICPortUnused.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x14002DD00 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14002F0FC (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     Register_D0Entry @ 0x14002FB34 (Register_D0Entry.c)
 *     Interrupter_D0Entry @ 0x140032140 (Interrupter_D0Entry.c)
 *     Controller_D0EntryRestoreState @ 0x140037BF8 (Controller_D0EntryRestoreState.c)
 *     Controller_SetControllerGone @ 0x14003C470 (Controller_SetControllerGone.c)
 *     Controller_InUseByDebugger @ 0x14003CC8C (Controller_InUseByDebugger.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x140040790 (Controller_GetPreProcessedSystemPowerAction.c)
 *     Controller_LogDiagnosticsOnD0Entry @ 0x140041608 (Controller_LogDiagnosticsOnD0Entry.c)
 *     Controller_ReportFatalErrorEx @ 0x140042368 (Controller_ReportFatalErrorEx.c)
 *     Etw_ReportFatalError @ 0x14004FBE8 (Etw_ReportFatalError.c)
 *     SleepstudyHelper_ComponentActive @ 0x140059414 (SleepstudyHelper_ComponentActive.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x140076A08 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x140081AFC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x140082BD8 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  int PreProcessedSystemPowerAction; // ebx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  bool v10; // al
  _QWORD *v11; // rcx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // r9d
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r13d
  bool v19; // zf
  __int64 v20; // rbx
  char v21; // r8
  __int64 v22; // r8
  int v23; // eax
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+28h] [rbp-70h]
  __int64 v32; // [rsp+30h] [rbp-68h]
  char v33; // [rsp+40h] [rbp-58h]
  char v34; // [rsp+41h] [rbp-57h]
  int v36; // [rsp+48h] [rbp-50h]
  int v37; // [rsp+4Ch] [rbp-4Ch]
  __int64 v38; // [rsp+50h] [rbp-48h] BYREF
  int v39; // [rsp+58h] [rbp-40h]

  v33 = 0;
  v4 = 0;
  v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          a1,
          off_14006B240);
  v5 = *(_QWORD *)(v38 + 8);
  if ( *(_BYTE *)(v5 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      2223);
  Controller_LogDiagnosticsOnD0Entry(a1, a2);
  v34 = 0;
  v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3104))(WdfDriverGlobals, a1);
  PreProcessedSystemPowerAction = Controller_GetPreProcessedSystemPowerAction(v5);
  v36 = PreProcessedSystemPowerAction;
  if ( (unsigned int)XilRegister_ReadUlong(*(_QWORD *)(v5 + 88), *(unsigned int **)(*(_QWORD *)(v5 + 88) + 24LL)) == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), v7, 4, 65, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    v34 = 1;
    v8 = -1073741823;
    goto LABEL_78;
  }
  if ( *(_DWORD *)(v5 + 864) && *(_QWORD *)(v5 + 1256) )
    SleepstudyHelper_ComponentActive();
  if ( PreProcessedSystemPowerAction != 2 )
    goto LABEL_27;
  v9 = *(_QWORD *)(v5 + 824);
  v10 = v9 && *(_DWORD *)(v9 + 584) == 4;
  v11 = *(_QWORD **)(v5 + 88);
  if ( v10 )
  {
    v12 = Register_ControllerStop((__int64)v11);
    if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 72),
        v13,
        4,
        66,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
        v12);
    }
    goto LABEL_20;
  }
  v14 = Register_BiosHandoff(v11);
  v8 = v14;
  if ( v14 >= 0 )
  {
LABEL_20:
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v5 + 136), a2);
    v14 = Register_ControllerReset(*(_QWORD *)(v5 + 88), 0);
    v8 = v14;
    if ( v14 < 0 )
    {
      v4 = 11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 68;
LABEL_77:
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          v7,
          4,
          v15,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          v14);
        goto LABEL_78;
      }
      goto LABEL_78;
    }
    v33 = 1;
LABEL_27:
    if ( !*(_BYTE *)(v5 + 840) )
    {
      *(_DWORD *)(v5 + 844) = KeQueryTimeIncrement();
      v16 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v5 + 88) + 40LL) + 1) >> 3) & 0x7FF;
      v7 = _InterlockedExchange64(
             (volatile __int64 *)(v5 + 832),
             (v16 >> 11) | ((MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v5 + 844) / 10000LL - v16) << 21));
      *(_BYTE *)(v5 + 840) = 1;
    }
    LOBYTE(v7) = 1;
    Controller_ExecuteHSICDisconnectInU3Workaround(v5, v7);
    if ( (*(_QWORD *)(v5 + 744) & 1) != 0 )
    {
      LOBYTE(v17) = 1;
      Controller_ExecuteKBLPowerTransitionWorkaround(v5, v17);
    }
    v4 = 5;
    v18 = 1;
    v19 = 0;
    do
    {
      if ( v19
        || (*(_QWORD *)(v5 + 736) & 2) != 0
        || *(_BYTE *)(v5 + 796)
        || a2 == 5
        || (unsigned int)Controller_GetPreProcessedSystemPowerAction(v5) == 2
        || (*(_QWORD *)(v5 + 744) & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v5) )
      {
        v21 = 0;
      }
      else
      {
        v20 = *(_QWORD *)(v5 + 88);
        Register_SetClearSSICPortUnused(v20, 0);
        Register_SaveRestoreCHTNonArchitecturalRegisters(v20, 0);
        v21 = 1;
      }
      v14 = Interrupter_D0Entry(*(_QWORD *)(v5 + 128), a2, v21);
      v8 = v14;
      if ( v14 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_78;
        v15 = 69;
        goto LABEL_77;
      }
      v14 = DeviceSlot_D0Entry(*(_QWORD *)(v5 + 136), a2);
      v8 = v14;
      if ( v14 < 0 )
      {
        v4 = 6;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_78;
        v15 = 70;
        goto LABEL_77;
      }
      v14 = Command_D0Entry(*(_QWORD *)(v5 + 144), a2);
      v8 = v14;
      if ( v14 < 0 )
      {
        v4 = 7;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_78;
        v15 = 71;
        goto LABEL_77;
      }
      if ( v18 == 2 || a2 == 5 || v36 == 2 )
        break;
      if ( (*(_QWORD *)(v5 + 736) & 2) != 0
        || *(_BYTE *)(v5 + 796)
        || (unsigned int)Controller_GetPreProcessedSystemPowerAction(v5) == 2
        || (*(_QWORD *)(v5 + 744) & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v5) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), v7, 4, 73, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
        }
      }
      else
      {
        v23 = Controller_D0EntryRestoreState(v5, v7, v22);
        if ( v23 >= 0 )
          break;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v5 + 72),
            v24,
            4,
            72,
            (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
            v23);
        }
        Controller_HwVerifierBreakIfEnabled(v5, 0, 0, 0x400000LL, "Controller restore state operation failed", 0LL, 0LL);
      }
      DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v5 + 136), a2);
      v14 = Register_ControllerReset(*(_QWORD *)(v5 + 88), 0);
      v8 = v14;
      if ( v14 < 0 )
      {
        v4 = 11;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_78;
        v15 = 74;
        goto LABEL_77;
      }
      ++v18;
      v33 = 1;
      v19 = v18 == 2;
    }
    while ( v18 <= 2 );
    v14 = Register_D0Entry(*(_QWORD *)(v5 + 88));
    v8 = v14;
    if ( v14 >= 0 )
    {
      v14 = RootHub_D0Entry(*(_QWORD *)(v5 + 152));
      v8 = v14;
      if ( v14 >= 0 )
      {
        *(_DWORD *)(v5 + 792) = 1;
        if ( v33 == 1 )
        {
          v25 = *(_QWORD *)(v5 + 8);
          v39 = 0;
          v38 = 12LL;
          ((void (__fastcall *)(__int64, __int64, __int64 *))qword_14006BD98)(UcxDriverGlobals, v25, &v38);
        }
        Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v5);
        *(_DWORD *)(v5 + 820) = 7;
        goto LABEL_84;
      }
      v4 = 13;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_78;
      v15 = 76;
    }
    else
    {
      v4 = 1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_78;
      v15 = 75;
    }
    goto LABEL_77;
  }
  v4 = 10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = 67;
    goto LABEL_77;
  }
LABEL_78:
  DeviceSlot_DisableAllDeviceSlots(*(_QWORD *)(v5 + 136));
  if ( v34 )
  {
    if ( (*(_DWORD *)(v38 + 28) & 0x10) == 0 )
      Etw_ReportFatalError(v4, v5, 0, 4150, v4, v8);
    LOBYTE(v28) = 1;
  }
  else
  {
    Controller_ReportFatalErrorEx(v5, 0, 4124, v4, v8, 0LL, 0LL, 0LL);
    v28 = 0LL;
  }
  Controller_SetControllerGone(v5, v28);
LABEL_84:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v32) = v8;
    LODWORD(v31) = v37;
    LODWORD(v30) = a2;
    McTemplateK0pqqq_EtwWriteTransfer(
      v26,
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE,
      v27,
      *(_QWORD *)(v5 + 8),
      v30,
      v31,
      v32);
  }
  return (unsigned int)v8;
}
