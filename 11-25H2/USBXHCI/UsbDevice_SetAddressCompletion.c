/*
 * XREFs of UsbDevice_SetAddressCompletion @ 0x140030890
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     UsbDevice_SetDeviceDisabled @ 0x14000E7F4 (UsbDevice_SetDeviceDisabled.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dq @ 0x14002CC1C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x140034500 (WPP_RECORDER_SF_dqD.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1400375C4 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     WPP_RECORDER_SF_dqdL @ 0x14004EEA4 (WPP_RECORDER_SF_dqdL.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

char __fastcall UsbDevice_SetAddressCompletion(__int64 a1, __int64 a2, __int128 *a3, int a4)
{
  _QWORD *v4; // rdi
  __int64 v8; // r8
  __int16 v9; // ax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // eax
  int v21; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v22[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v23; // [rsp+78h] [rbp-30h]

  v4 = *(_QWORD **)(a1 + 48);
  v21 = 0;
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v4[1] + 72LL),
        4u,
        0xCu,
        0x16u,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        *((unsigned __int8 *)v4 + 135),
        *v4);
    if ( (*((_DWORD *)v4 + 123) & 0x200) != 0 )
      return UsbDevice_SetDeviceDisabled((__int64)v4, a2);
    v8 = *((_BYTE *)v4 + 432) == 0 ? 0xC0000001 : 0;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( (*((_DWORD *)v4 + 123) & 0x200) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dq(
          *(_QWORD *)(v4[1] + 72LL),
          4u,
          0xCu,
          0x18u,
          (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
          *(unsigned __int8 *)(a1 + 61),
          *v4);
      goto LABEL_27;
    }
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount > 0x33 )
      {
        LOWORD(v22[0]) = *(_WORD *)(WdfStructures + 408);
        goto LABEL_15;
      }
      v9 = -1;
    }
    else
    {
      v9 = 40;
    }
    LOWORD(v22[0]) = v9;
LABEL_15:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _OWORD *))(WdfFunctions_01033 + 2128))(
      WdfDriverGlobals,
      v4[53],
      v22);
    v10 = *((_QWORD *)&v22[0] + 1);
    v11 = *(_QWORD *)(v4[1] + 136LL);
    v12 = *(_QWORD *)(v11 + 88);
    v13 = v11 + 16;
    v14 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v13 + 64) && (*((_BYTE *)v4 + 656) && *(_DWORD *)(v14 + 1012) == 2 || *(_DWORD *)(v14 + 1012) == 1) )
    {
      XilDeviceSlot_SendQuerySlotContextInfoRequest(v13, v4, &v21, 0LL);
      v15 = v21;
    }
    else
    {
      v16 = (__int64)(v4 + 77);
      if ( !*((_BYTE *)v4 + 657) )
        v16 = (__int64)(v4 + 76);
      v15 = (unsigned __int8)*(_DWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v16) + 12);
    }
    *(_DWORD *)(v10 + 28) = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqD(*(_QWORD *)(v4[1] + 72LL), *(unsigned __int8 *)(a1 + 61), v15, 23);
LABEL_27:
    v8 = 0LL;
LABEL_32:
    v17 = v4[53];
    v4[53] = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v17,
             v8);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqdL(
      *(_QWORD *)(v4[1] + 72LL),
      *((unsigned __int8 *)v4 + 135),
      (*((_DWORD *)v4 + 123) >> 9) & 1,
      a4);
  if ( (*((_DWORD *)v4 + 123) & 0x200) == 0 )
  {
    v8 = 3221225473LL;
    goto LABEL_32;
  }
  v18 = v4[1];
  v19 = *(_QWORD *)(v18 + 144);
  if ( *((_BYTE *)v4 + 432) )
  {
    Controller_HwVerifierBreakIfEnabled(
      v18,
      *v4,
      0,
      0x40000LL,
      "Set Address Command with BSR=1 failed",
      (__int128 *)(a1 + 24),
      a3);
    return Controller_ReportFatalError(v4[1], 2, 4117, 0, 0LL, 0LL, 0LL);
  }
  else
  {
    memset(v4 + 57, 0, 0x60uLL);
    v4[63] = v4;
    v4[62] = UsbDevice_DisableCompletionReturnFailure;
    v20 = *((_DWORD *)v4 + 123) & 0xFFFF2BFF;
    v4[66] = 0LL;
    v4[67] = 0LL;
    *((_DWORD *)v4 + 123) = v20 | 0x2800;
    *((_BYTE *)v4 + 495) = *((_BYTE *)v4 + 135);
    v4[68] = 0LL;
    return Command_SendCommand(v19, (__int64)(v4 + 57));
  }
}
