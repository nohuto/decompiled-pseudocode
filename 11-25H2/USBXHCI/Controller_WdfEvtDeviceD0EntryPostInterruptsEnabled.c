/*
 * XREFs of Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140038940
 * Callers:
 *     <none>
 * Callees:
 *     Etw_ControllerRundown @ 0x1400027B4 (Etw_ControllerRundown.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008F4C (RootHub_DetectAndAcknowledgePortResume.c)
 *     Controller_Start @ 0x14000B894 (Controller_Start.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x14000D698 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLLL @ 0x140014BE4 (WPP_RECORDER_SF_qLLL.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14002E7E8 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14002F0FC (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x140032A9C (Command_D0EntryPostInterruptsEnabled.c)
 *     Wmi_CreateControllerCapabilities @ 0x140033EC4 (Wmi_CreateControllerCapabilities.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x140040790 (Controller_GetPreProcessedSystemPowerAction.c)
 *     Etw_ReportFatalError @ 0x14004FBE8 (Etw_ReportFatalError.c)
 *     SleepstudyHelper_ComponentInactive @ 0x14005949C (SleepstudyHelper_ComponentInactive.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // r14d
  __int64 v6; // rdx
  int PreProcessedSystemPowerAction; // ebp
  __int64 v8; // r8
  int v9; // eax
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edi
  int v14; // r9d
  __int64 v15; // rbp
  unsigned int i; // edi
  __int64 v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int16 v23; // [rsp+30h] [rbp-48h]
  int v24; // [rsp+38h] [rbp-40h]
  int v25; // [rsp+40h] [rbp-38h]

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3104))(WdfDriverGlobals, a1);
  PreProcessedSystemPowerAction = Controller_GetPreProcessedSystemPowerAction(v4);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    v23 = *(unsigned __int8 *)(v4 + 868);
    v21 = v5;
    v19 = a2;
    McTemplateK0pqqh_EtwWriteTransfer(
      *(unsigned __int8 *)(v4 + 868),
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_START,
      v8,
      *(_QWORD *)(v4 + 8),
      v19,
      v21,
      v23);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = v5;
    v24 = PreProcessedSystemPowerAction;
    LODWORD(v22) = a2;
    WPP_RECORDER_SF_qLLL(
      *(_QWORD *)(v4 + 72),
      v6,
      4u,
      0x4Du,
      (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
      a1,
      v22,
      v24,
      v25);
  }
  if ( *(_DWORD *)(v4 + 864) && *(_QWORD *)(v4 + 1256) )
    SleepstudyHelper_ComponentInactive();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v22) = a2;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(v4 + 72),
      4u,
      4u,
      0x7Du,
      (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
      v4,
      v22);
  }
  v9 = Controller_Start(v4);
  v13 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v14 = 78;
    goto LABEL_13;
  }
  v15 = *(_QWORD *)(v4 + 152);
  for ( i = 1; i <= *(_DWORD *)(v15 + 16); ++i )
    RootHub_DetectAndAcknowledgePortResume((_QWORD *)v15, i, 1);
  v9 = Command_D0EntryPostInterruptsEnabled(*(_QWORD *)(v4 + 144), a2);
  v13 = v9;
  if ( v9 >= 0 )
  {
    if ( (*(_BYTE *)(v4 + 736) & 0x10) != 0 )
    {
      v13 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), v10, 4, 81, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
      }
    }
    else
    {
      Wmi_CreateControllerCapabilities(*(__int64 **)(v4 + 160));
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = 80;
LABEL_13:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), v10, 4, v14, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v9);
  }
LABEL_23:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v22) = v13;
    LODWORD(v20) = v5;
    LODWORD(v18) = a2;
    McTemplateK0pqqq_EtwWriteTransfer(
      v11,
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_COMPLETE,
      v12,
      *(_QWORD *)(v4 + 8),
      v18,
      v20,
      v22);
  }
  if ( v13 < 0 )
    Etw_ReportFatalError(v11, v4, 0, 4145, v13, 0LL);
  Etw_ControllerRundown(0LL, v4);
  return (unsigned int)v13;
}
