/*
 * XREFs of Controller_InternalReset @ 0x1400406EC
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x14003C9E8 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x14004032C (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x140042BE0 (Controller_UcxEvtReset.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x140018FE0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     Register_ControllerStop @ 0x14001A214 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x14001A8FC (Interrupter_InterrupterRegisterIntialize.c)
 *     Controller_Start @ 0x14001B1F0 (Controller_Start.c)
 *     Interrupter_InterruptEnable @ 0x14001B7A8 (Interrupter_InterruptEnable.c)
 *     Register_ControllerReset @ 0x14001C654 (Register_ControllerReset.c)
 *     RootHub_D0Entry @ 0x140028D68 (RootHub_D0Entry.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002F834 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400303B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     CommonBuffer_FlushWorkItems @ 0x140030B48 (CommonBuffer_FlushWorkItems.c)
 *     Interrupter_Initialize @ 0x140032FA4 (Interrupter_Initialize.c)
 *     Command_ControllerResetPostReset @ 0x14003CFA4 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x14003D160 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x14003D22C (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x14003FE84 (Controller_DisableController.c)
 *     Controller_ReportFatalErrorEx @ 0x140041EC0 (Controller_ReportFatalErrorEx.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x140045C3C (DeviceSlot_ControllerResetPostReset.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x140048934 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

int __fastcall Controller_InternalReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r15
  unsigned int i; // esi
  __int64 v9; // rbx
  __int64 *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // edx
  int v14; // eax
  int v15; // edx
  _QWORD *v16; // rcx
  int v17; // edx
  __int64 v18; // rbx
  int v19; // edx
  unsigned int j; // esi
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edx
  __int64 v24; // rcx
  int result; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rsi
  int v29; // edx
  __int64 v30; // [rsp+20h] [rbp-48h]

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, *(_QWORD *)(a1 + 8));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 187, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 816)) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  _InterlockedAdd((volatile signed __int32 *)(a1 + 804), 1u);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1260), 0, 1)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1256), 0, 0) )
  {
    ++*(_DWORD *)(a1 + 876);
    ++*(_DWORD *)(a1 + 920);
    *(_BYTE *)(a1 + 872) = 1;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 808), 1u);
  }
  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 760),
    a3);
  v5 = *(_QWORD *)(a1 + 144);
  DynamicLock_Acquire(*(_QWORD *)(v5 + 112));
  v6 = *(_QWORD *)(v5 + 112);
  *(_DWORD *)(v5 + 36) = 3;
  *(_BYTE *)(v5 + 121) = 0;
  DynamicLock_Release(v6);
  v7 = *(_QWORD *)(a1 + 136);
  for ( i = 1; i <= *(_DWORD *)(v7 + 96); ++i )
  {
    v9 = *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(v7) + 8LL * i);
    if ( v9 )
    {
      v10 = (__int64 *)(v9 + 184);
      v11 = 31LL;
      do
      {
        if ( *v10 )
          ESM_AddEsmEvent(*v10);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
  }
  Interrupter_FlushPendingDpcOrWorkItemPreReset(*(_QWORD *)(a1 + 128));
  v12 = (int)Register_ControllerStop(*(_QWORD *)(a1 + 88));
  Interrupter_FlushPendingDpcOrWorkItemPreReset(*(_QWORD *)(a1 + 128));
  if ( (int)v12 >= 0 )
  {
    v14 = Register_ControllerReset(*(_QWORD *)(a1 + 88), 1);
    v4 = v14;
    if ( v14 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v15,
        4,
        189,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v14);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v13,
        4,
        188,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v12);
    }
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(*(_QWORD *)(a1 + 144));
  v16 = *(_QWORD **)(a1 + 120);
  if ( v16 )
    CommonBuffer_FlushWorkItems(v16);
  DeviceSlot_ControllerResetPostReset(*(_QWORD *)(a1 + 136));
  RootHub_D0Entry(*(_QWORD *)(a1 + 152));
  if ( (int)v12 >= 0 )
  {
    v18 = *(_QWORD *)(a1 + 128);
    if ( Controller_IsControllerAccessible(*(_QWORD *)(v18 + 8)) )
    {
      Interrupter_Initialize(v18);
      Interrupter_InterrupterRegisterIntialize(v18);
      for ( j = 0; j < *(_DWORD *)(v18 + 92); ++j )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8LL * j);
        if ( v21 )
        {
          *(_DWORD *)(v21 + 112) &= ~0x10u;
          if ( (*(_DWORD *)(v21 + 112) & 4) != 0 )
            Interrupter_InterruptEnable(v21);
        }
      }
    }
    if ( v4 >= 0 )
    {
      v22 = Controller_Start(a1);
      v12 = v22;
      if ( v22 >= 0 )
      {
        LODWORD(v12) = 0;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 72),
            v23,
            4,
            192,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            v22);
        }
        Controller_HwVerifierBreakIfEnabled(
          a1,
          0,
          0,
          32LL,
          "During controller reset recovery, controller start timed out",
          0LL,
          0LL);
        Controller_ReportFatalErrorEx(a1, 4, 4104, 0, v12, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v19,
          4,
          191,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v4);
      }
      Controller_HwVerifierBreakIfEnabled(
        a1,
        0,
        0,
        16LL,
        "During controller reset recovery, controller reset timed out",
        0LL,
        0LL);
      Controller_ReportFatalErrorEx(a1, 4, 4103, 0, v4, 0LL, 0LL, 0LL);
      LODWORD(v12) = v4;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v17,
        4,
        190,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v12);
    }
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0,
      0,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    Controller_ReportFatalErrorEx(a1, 4, 4107, 0, v12, 0LL, 0LL, 0LL);
  }
  v24 = *(_QWORD *)(a1 + 144);
  if ( (int)v12 < 0 )
  {
    Command_FailAllCommands(v24);
    v28 = (_QWORD *)(a1 + 8);
    result = ((__int64 (__fastcall *)(__int64, _QWORD))qword_14006BD80)(UcxDriverGlobals, *(_QWORD *)(a1 + 8));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = 2;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 72),
                 v29,
                 4,
                 194,
                 (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                 v12);
    }
  }
  else
  {
    result = Command_ControllerResetPostResetSuccess(v24);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_SF_(
                 *(_QWORD *)(a1 + 72),
                 4,
                 4,
                 193,
                 (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    v28 = (_QWORD *)(a1 + 8);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
  {
    LODWORD(v30) = v12;
    result = McTemplateK0pq_EtwWriteTransfer(v26, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE, v27, *v28, v30);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 816));
  return result;
}
