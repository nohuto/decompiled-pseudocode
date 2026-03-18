/*
 * XREFs of UsbDevice_UcxEvtDisable @ 0x14002E4E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x14000212C (WPP_RECORDER_SF_dq.c)
 *     UsbDevice_SetDeviceDisabled @ 0x140002568 (UsbDevice_SetDeviceDisabled.c)
 *     Endpoint_Disable @ 0x140002DBC (Endpoint_Disable.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000BED4 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000C924 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_DisableLPMForSlot @ 0x140049584 (RootHub_DisableLPMForSlot.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
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
  v9 = (unsigned __int8 *)v4 + 143;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v7 + 72),
      4u,
      0xCu,
      0x4Au,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *v9,
      *v4);
  if ( !*(_BYTE *)(v6 + 142) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = *v9;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
        4u,
        0xCu,
        0x4Bu,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v19,
        *(_QWORD *)v6);
    }
    LOBYTE(v5) = 1;
    Endpoint_Disable(*(_QWORD *)(v6 + 184), v5);
    v11 = (__int64 *)(v6 + 192);
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
  if ( *(_BYTE *)(v6 + 576) )
    RootHub_DisableLPMForSlot(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 152LL), *(unsigned int *)(v6 + 44), *v9);
  if ( *(_BYTE *)(v6 + 577) )
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
  *(_QWORD *)(v6 + 432) = a2;
  *(_BYTE *)(v6 + 440) = 1;
  memset((void *)(v6 + 464), 0, 0x60uLL);
  *(_QWORD *)(v6 + 536) = 0LL;
  *(_DWORD *)(v6 + 544) = 0;
  *(_DWORD *)(v6 + 548) = 0;
  *(_QWORD *)(v6 + 552) = 0LL;
  *(_QWORD *)(v6 + 504) = UsbDevice_DisableCompletionReturnSuccess;
  v18 = *(_DWORD *)(v6 + 500) & 0xFFFF2BFF;
  *(_QWORD *)(v6 + 512) = v6;
  *(_DWORD *)(v6 + 500) = v18 | 0x2800;
  *(_BYTE *)(v6 + 503) = *(_BYTE *)(v6 + 143);
  return Command_SendCommand(v8, v6 + 464);
}
