/*
 * XREFs of Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x140037D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLLL @ 0x140008454 (WPP_RECORDER_SF_qLLL.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x14002227C (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14002DD48 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14002E44C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x14002F4DC (ControllerPreInterruptsDisableAcpiCallout.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x1400400E0 (Controller_GetPreProcessedSystemPowerAction.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  int PreProcessedSystemPowerAction; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int16 v17; // [rsp+30h] [rbp-38h]
  int v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+40h] [rbp-28h]

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3104))(WdfDriverGlobals, a1);
  PreProcessedSystemPowerAction = Controller_GetPreProcessedSystemPowerAction(v4);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    v17 = *(unsigned __int8 *)(v4 + 868);
    v15 = v5;
    v13 = a2;
    McTemplateK0pqqh_EtwWriteTransfer(
      *(unsigned __int8 *)(v4 + 868),
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      v13,
      v15,
      v17);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = v5;
    v18 = PreProcessedSystemPowerAction;
    LODWORD(v16) = a2;
    WPP_RECORDER_SF_qLLL(
      *(_QWORD *)(v4 + 72),
      v6,
      4u,
      0x55u,
      (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      a1,
      v16,
      v18,
      v19);
  }
  ControllerPreInterruptsDisableAcpiCallout(a1);
  Interrupter_D0ExitPreInterruptsDisabled(*(_QWORD *)(v4 + 128));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v16) = 0;
    LODWORD(v14) = v5;
    LODWORD(v12) = a2;
    McTemplateK0pqqq_EtwWriteTransfer(
      v9,
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_COMPLETE,
      v10,
      *(_QWORD *)(v4 + 8),
      v12,
      v14,
      v16);
  }
  return 0LL;
}
