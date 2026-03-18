/*
 * XREFs of Controller_InternalReset @ 0x140040D9C
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x14003CA68 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x1400409DC (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x140043090 (Controller_UcxEvtReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     Interrupter_InterruptEnable @ 0x14000B5D8 (Interrupter_InterruptEnable.c)
 *     Controller_Start @ 0x14000B894 (Controller_Start.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x14000BDD4 (Interrupter_InterrupterRegisterIntialize.c)
 *     Register_ControllerStop @ 0x14000C7B8 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1400243D0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     RootHub_D0Entry @ 0x140028064 (RootHub_D0Entry.c)
 *     Register_ControllerReset @ 0x14002D87C (Register_ControllerReset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14003081C (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140031204 (McTemplateK0p_EtwWriteTransfer.c)
 *     CommonBuffer_FlushWorkItems @ 0x140031998 (CommonBuffer_FlushWorkItems.c)
 *     Interrupter_Initialize @ 0x140034B34 (Interrupter_Initialize.c)
 *     Command_ControllerResetPostReset @ 0x14003D0B4 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x14003D270 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x14003D33C (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x140040534 (Controller_DisableController.c)
 *     Controller_ReportFatalErrorEx @ 0x140042368 (Controller_ReportFatalErrorEx.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x14004592C (DeviceSlot_ControllerResetPostReset.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x14004908C (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
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
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 190, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 816)) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  _InterlockedAdd((volatile signed __int32 *)(a1 + 804), 1u);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1268), 0, 1)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1264), 0, 0) )
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
      v10 = (__int64 *)(v9 + 176);
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
        192,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
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
        191,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
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
            195,
            (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
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
          194,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
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
        193,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
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
    result = ((__int64 (__fastcall *)(__int64, _QWORD))qword_14006BDA0)(UcxDriverGlobals, *(_QWORD *)(a1 + 8));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = 2;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 72),
                 v29,
                 4,
                 197,
                 (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
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
                 196,
                 (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
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
