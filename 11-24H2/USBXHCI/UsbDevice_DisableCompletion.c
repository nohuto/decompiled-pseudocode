/*
 * XREFs of UsbDevice_DisableCompletion @ 0x140001D68
 * Callers:
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x140001D50 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_DisableCompletionReturnFailure @ 0x14004D880 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x14004DB60 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x14000159C (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x140002084 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1400020C0 (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     WPP_RECORDER_SF_dq @ 0x14000212C (WPP_RECORDER_SF_dq.c)
 *     UsbDevice_SetDeviceDisabled @ 0x140002568 (UsbDevice_SetDeviceDisabled.c)
 *     Endpoint_Disable @ 0x140002DBC (Endpoint_Disable.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dqL @ 0x140030BFC (WPP_RECORDER_SF_dqL.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall UsbDevice_DisableCompletion(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  char v6; // r15
  char v7; // cl
  __int64 v8; // r13
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 XilCoreDeviceSlotData; // rax
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rdx
  int v20; // edx
  int v21; // edx

  v3 = *(_QWORD *)(a1 + 48);
  v6 = 1;
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = *(unsigned __int8 *)(v3 + 143);
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v20,
        12,
        76,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(_BYTE *)(v3 + 143),
        *(_QWORD *)v3);
    }
    result = UsbDevice_SetDeviceDisabled(v3);
    goto LABEL_27;
  }
  v7 = *(_BYTE *)(a1 + 60);
  if ( v7 != 1 && v7 != 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v21, a3, 78);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)v3,
      0,
      0x100000,
      (__int64)"Disable Slot Command failed",
      a1 + 24,
      0LL);
    result = Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4120, 0, 0LL, 0LL, 0LL);
LABEL_27:
    v6 = 0;
    v14 = 3221225473LL;
    goto LABEL_19;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v18,
      12,
      77,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v3);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 136LL);
  if ( a3 != 2 )
  {
    LOBYTE(a2) = 1;
    Endpoint_Disable(*(_QWORD *)(v3 + 184), a2);
  }
  v9 = (_QWORD *)(v3 + 192);
  v10 = 30LL;
  do
  {
    if ( *v9 )
    {
      LOBYTE(a2) = 1;
      Endpoint_Disable(*v9, a2);
      *v9 = 0LL;
    }
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = *(unsigned __int8 *)(v3 + 143);
  if ( *(_BYTE *)(v8 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((__int64 *)(v8 + 16), v3);
    result = *(_QWORD *)(v8 + 88);
    if ( *(_BYTE *)(result + 80) )
      v17 = *(_QWORD *)(result + 24);
    else
      v17 = *(_QWORD *)(result + 72);
    *(_QWORD *)(v17 + 8 * v11) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v8 + 88));
    result = XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, v3, (unsigned int)v11);
  }
  *(_WORD *)(v3 + 142) = 0;
  v14 = 0LL;
  *(_QWORD *)(v3 + 168) = 0LL;
  if ( a3 == 2 )
  {
    memset((void *)(v3 + 464), 0, 0x60uLL);
    v15 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 504) = UsbDevice_EnableCompletion;
    v16 = *(_DWORD *)(v3 + 500) & 0xFFFF27FF;
    *(_QWORD *)(v3 + 512) = v3;
    *(_QWORD *)(v3 + 536) = 0LL;
    *(_DWORD *)(v3 + 500) = v16 | 0x2400;
    *(_QWORD *)(v3 + 544) = 0LL;
    *(_QWORD *)(v3 + 552) = 0LL;
    return Command_SendCommand(*(_QWORD *)(v15 + 144), v3 + 464);
  }
LABEL_19:
  if ( a3 == 1 )
    v14 = 3221225473LL;
  if ( v6 )
  {
    v19 = *(_QWORD *)(v3 + 432);
    *(_QWORD *)(v3 + 432) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v19,
             v14);
  }
  return result;
}
