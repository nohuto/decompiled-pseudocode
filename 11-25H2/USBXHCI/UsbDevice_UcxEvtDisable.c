/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x14002F190
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x140008750 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x140008E18 (RootHub_ReleaseReadModifyWriteLock.c)
 *     UsbDevice_SetDeviceDisabled @ 0x14000E7F4 (UsbDevice_SetDeviceDisabled.c)
 *     Endpoint_Disable @ 0x14000FDC4 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x14002CC1C (WPP_RECORDER_SF_dq.c)
 *     RootHub_DisableLPMForSlot @ 0x140049CD4 (RootHub_DisableLPMForSlot.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDisable(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int8 *v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // r14
  __int64 v12; // rbx
  unsigned int v14; // edi
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // [rsp+28h] [rbp-70h]
  _OWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h]

  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v20[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v3 = -1;
  }
  else
  {
    v3 = 40;
  }
  LOWORD(v20[0]) = v3;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v20);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*((_QWORD *)&v20[0] + 1) + 16LL),
                   off_14006B128);
  v6 = (__int64)v4;
  v7 = v4[1];
  v8 = *(_QWORD *)(v7 + 144);
  v9 = (unsigned __int8 *)v4 + 135;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v7 + 72),
      4u,
      0xCu,
      0x43u,
      (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
      *v9,
      *v4);
  if ( !*(_BYTE *)(v6 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = *v9;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
        4u,
        0xCu,
        0x44u,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        v19,
        *(_QWORD *)v6);
    }
    LOBYTE(v5) = 1;
    Endpoint_Disable(*(_QWORD *)(v6 + 176), v5);
    v11 = (__int64 *)(v6 + 184);
    v12 = 30LL;
    do
    {
      if ( *v11 )
      {
        LOBYTE(v10) = 1;
        Endpoint_Disable(*v11, v10);
        *v11 = 0LL;
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  if ( *(_BYTE *)(v6 + 568) )
    RootHub_DisableLPMForSlot(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 152LL), *(unsigned int *)(v6 + 44), *v9);
  if ( *(_BYTE *)(v6 + 569) )
  {
    v14 = *(_DWORD *)(v6 + 44) - 1;
    v15 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 152LL);
    v16 = *(_QWORD *)(v15 + 48) + 120LL * v14;
    RootHub_AcquireReadModifyWriteLock(v15, v14);
    --*(_DWORD *)(v16 + 48);
    RootHub_ReleaseReadModifyWriteLock(v15, v14);
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v6 + 8)) )
  {
    UsbDevice_SetDeviceDisabled(v6, v17);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             0LL);
  }
  *(_QWORD *)(v6 + 424) = a2;
  *(_BYTE *)(v6 + 432) = 1;
  memset((void *)(v6 + 456), 0, 0x60uLL);
  *(_QWORD *)(v6 + 528) = 0LL;
  *(_DWORD *)(v6 + 536) = 0;
  *(_DWORD *)(v6 + 540) = 0;
  *(_QWORD *)(v6 + 544) = 0LL;
  *(_QWORD *)(v6 + 496) = UsbDevice_DisableCompletionReturnSuccess;
  v18 = *(_DWORD *)(v6 + 492) & 0xFFFF2BFF;
  *(_QWORD *)(v6 + 504) = v6;
  *(_DWORD *)(v6 + 492) = v18 | 0x2800;
  *(_BYTE *)(v6 + 495) = *(_BYTE *)(v6 + 135);
  return Command_SendCommand(v8, v6 + 456);
}
