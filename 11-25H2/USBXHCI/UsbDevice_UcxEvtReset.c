/*
 * XREFs of UsbDevice_UcxEvtReset @ 0x14002E880
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     Endpoint_Disable @ 0x14000FDC4 (Endpoint_Disable.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dq @ 0x14002CC1C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x140031A4C (WPP_RECORDER_SF_dqL.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1400375C4 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_UcxEvtReset(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // r14
  int v8; // edx
  unsigned __int16 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r8d
  unsigned int v14; // esi
  __int64 v15; // rcx
  int v16; // edx
  __int64 *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // r8
  unsigned int v22; // ecx
  char v23; // dl
  __int64 (__fastcall *v24)(__int64, int, __int128 *, int); // rax
  unsigned int v26; // [rsp+38h] [rbp-60h]
  unsigned int v27; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v28[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v29; // [rsp+68h] [rbp-30h]

  v27 = 0;
  v29 = 0LL;
  memset(v28, 0, sizeof(v28));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v28[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v3 = -1;
  }
  else
  {
    v3 = 40;
  }
  LOWORD(v28[0]) = v3;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v28);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v28[0] + 1) + 16LL),
         off_14006B128);
  v5 = v4;
  v6 = *(__int64 **)(v4 + 8);
  v7 = v6[18];
  if ( !*(_BYTE *)(v4 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(v4 + 135);
      v9 = 73;
      v10 = *(_QWORD *)v4;
LABEL_35:
      WPP_RECORDER_SF_dq(v6[9], 4u, 0xCu, v9, (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids, v8, v10, v26);
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
               WdfDriverGlobals,
               a2,
               0LL);
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  v11 = v6[17] + 16;
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 72) + 8LL);
  if ( *(_BYTE *)(v11 + 64) && (*(_BYTE *)(v5 + 656) && *(_DWORD *)(v12 + 1012) == 2 || *(_DWORD *)(v12 + 1012) == 1) )
  {
    XilDeviceSlot_SendQuerySlotContextInfoRequest(v11, v5, 0LL, &v27);
    v14 = v27;
  }
  else
  {
    v15 = v5 + 616;
    if ( !*(_BYTE *)(v5 + 657) )
      v15 = v5 + 608;
    v14 = *(_DWORD *)(XilCoreUsbDevice_GetDeviceContextBufferVA(v15) + 12) >> 27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(unsigned __int8 *)(v5 + 135);
    v26 = v14;
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL), v16, v13, 74);
  }
  if ( v14 < 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(v5 + 135);
      v9 = 75;
      v6 = *(__int64 **)(v5 + 8);
      v10 = *(_QWORD *)v5;
      goto LABEL_35;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v5 + 8)) )
  {
    v17 = (__int64 *)(v5 + 184);
    v18 = 30LL;
    do
    {
      if ( *v17 )
        Endpoint_Disable(*v17, 0LL);
      ++v17;
      --v18;
    }
    while ( v18 );
    *(_DWORD *)(v5 + 152) = 3;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  v19 = *(_QWORD *)(v5 + 8);
  v20 = *(_DWORD *)(v5 + 492);
  *(_QWORD *)(v5 + 424) = a2;
  *(_BYTE *)(v5 + 432) = 1;
  v21 = (*(_QWORD *)(v19 + 736) >> 15) & 1LL;
  if ( ((*(_QWORD *)(v19 + 736) >> 15) & 1) != 0 )
    v22 = v20 & 0xFFFF03FF | 0x2800;
  else
    v22 = v20 & 0xFFFF03FF | 0x4400;
  v23 = *(_BYTE *)(v5 + 135);
  v24 = (__int64 (__fastcall *)(__int64, int, __int128 *, int))UsbDevice_OnResetDisableCompletion;
  if ( !v21 )
    v24 = UsbDevice_DeviceResetCompletion;
  *(_QWORD *)(v5 + 496) = v24;
  *(_QWORD *)(v5 + 504) = v5;
  *(_DWORD *)(v5 + 492) = v22;
  *(_BYTE *)(v5 + 495) = v23;
  *(_QWORD *)(v5 + 528) = 0LL;
  *(_DWORD *)(v5 + 536) = 0;
  *(_DWORD *)(v5 + 540) = 0;
  *(_QWORD *)(v5 + 544) = 0LL;
  return Command_SendCommand(v7, v5 + 456);
}
