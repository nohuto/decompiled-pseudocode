/*
 * XREFs of Controller_WdfEvtDeviceD0Exit @ 0x1400379B0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Interrupter_D0ExitStopped @ 0x14001984C (Interrupter_D0ExitStopped.c)
 *     Controller_D0Exit @ 0x14001A12C (Controller_D0Exit.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     Register_ControllerReset @ 0x14001C654 (Register_ControllerReset.c)
 *     Register_SetClearSSICPortUnused @ 0x14001CA30 (Register_SetClearSSICPortUnused.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x14001CAD8 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14002E44C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x140030570 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     CommonBuffer_FlushWorkItems @ 0x140030B48 (CommonBuffer_FlushWorkItems.c)
 *     Controller_D0ExitSaveState @ 0x1400366C4 (Controller_D0ExitSaveState.c)
 *     RootHub_D0Exit @ 0x140038974 (RootHub_D0Exit.c)
 *     Controller_InUseByDebugger @ 0x14003CB78 (Controller_InUseByDebugger.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x1400400E0 (Controller_GetPreProcessedSystemPowerAction.c)
 *     Controller_LogDiagnosticsOnD0Exit @ 0x1400410B4 (Controller_LogDiagnosticsOnD0Exit.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x14004E9B8 (Etw_ReportControllerHealthWithPortInfo.c)
 *     Etw_ReportFatalError @ 0x14004F288 (Etw_ReportFatalError.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x140076920 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1400817D0 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Exit(__int64 a1, unsigned int a2)
{
  int v4; // ebp
  __int64 v5; // rdi
  int v6; // r15d
  unsigned int PreProcessedSystemPowerAction; // esi
  __int64 v8; // r8
  int v9; // ecx
  const signed __int64 *v10; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  int v16; // edx
  __int64 v17; // rbx
  int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // [rsp+20h] [rbp-38h]
  __int64 v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3104))(WdfDriverGlobals, a1);
  PreProcessedSystemPowerAction = Controller_GetPreProcessedSystemPowerAction(v5);
  Controller_LogDiagnosticsOnD0Exit(a1, a2);
  *(_DWORD *)(v5 + 792) = a2;
  if ( *(_QWORD *)(v5 + 824) && a2 == 6 )
  {
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v5 + 760),
      v8);
    v10 = (const signed __int64 *)(v5 + 736);
  }
  else
  {
    v11 = *(_QWORD **)(v5 + 120);
    if ( v11 )
      CommonBuffer_FlushWorkItems(v11);
    RootHub_D0Exit(*(_QWORD *)(v5 + 152), a2, PreProcessedSystemPowerAction);
    Controller_D0Exit((_QWORD *)v5, a2, v12);
    Interrupter_D0ExitStopped(*(_QWORD *)(v5 + 128), a2);
    v10 = (const signed __int64 *)(v5 + 736);
    if ( (*(_QWORD *)(v5 + 736) & 2) != 0
      || *(_BYTE *)(v5 + 796)
      || a2 == 5
      || (unsigned int)Controller_GetPreProcessedSystemPowerAction(v5) == 5
      || (*(_QWORD *)(v5 + 744) & 8) != 0 && (unsigned __int8)Controller_InUseByDebugger(v5) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), v13, 4, 89, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
    }
    else
    {
      v15 = Controller_D0ExitSaveState(v5, v13, v14);
      v4 = v15;
      if ( v15 < 0 )
      {
        *(_BYTE *)(v5 + 796) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v5 + 72),
            v16,
            4,
            90,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            v15);
        }
        Controller_HwVerifierBreakIfEnabled(v5, 0, 0, 0x400000LL, "Controller save state operation failed", 0LL, 0LL);
      }
      v17 = *(_QWORD *)(v5 + 88);
      Register_SetClearSSICPortUnused(v17, 1);
      Register_SaveRestoreCHTNonArchitecturalRegisters(v17, 1);
      Controller_ExecuteHSICDisconnectInU3Workaround(v5, 0LL);
      Controller_ExecuteDSMToSendPORTSCValues(v5);
      if ( (*(_QWORD *)(v5 + 744) & 1) != 0 )
        Controller_ExecuteKBLPowerTransitionWorkaround(v5, 0LL);
    }
  }
  if ( _bittest64(v10, 0x2Bu) )
  {
    if ( v6 == 5 )
    {
      v18 = Register_ControllerReset(*(_QWORD *)(v5 + 88), 1);
      v4 = v18;
      if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          v19,
          4,
          91,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v18);
      }
    }
  }
  if ( a2 == 5 && *(_BYTE *)(v5 + 872) )
  {
    Etw_ReportControllerHealthWithPortInfo(v5, 0LL, 0LL, 0LL);
    *(_BYTE *)(v5 + 872) = 0;
  }
  if ( v4 < 0 )
    Etw_ReportFatalError(v9, v5, 0, 4146, v4, 0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 768));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 1232));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 968));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 1112));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v25) = 0;
    LODWORD(v24) = v6;
    LODWORD(v23) = a2;
    McTemplateK0pqqq_EtwWriteTransfer(
      v20,
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_COMPLETE,
      v21,
      *(_QWORD *)(v5 + 8),
      v23,
      v24,
      v25);
  }
  return 0LL;
}
