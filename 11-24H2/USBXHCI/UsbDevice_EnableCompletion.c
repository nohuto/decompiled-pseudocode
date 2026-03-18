/*
 * XREFs of UsbDevice_EnableCompletion @ 0x14002FC80
 * Callers:
 *     <none>
 * Callees:
 *     XilDeviceSlot_SetDeviceContext @ 0x140001348 (XilDeviceSlot_SetDeviceContext.c)
 *     WPP_RECORDER_SF_dq @ 0x14000212C (WPP_RECORDER_SF_dq.c)
 *     Endpoint_Disable @ 0x140002DBC (Endpoint_Disable.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 *     Endpoint_SetLogIdentifier @ 0x140031FAC (Endpoint_SetLogIdentifier.c)
 *     UsbDevice_SetAddress @ 0x14003AEC4 (UsbDevice_SetAddress.c)
 *     Controller_ReportFatalErrorEx @ 0x140041EC0 (Controller_ReportFatalErrorEx.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall UsbDevice_EnableCompletion(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v3; // rbx
  __int64 *v6; // r10
  __int64 v7; // r15
  __int64 v8; // rdi
  char v9; // si
  __int64 v10; // rdi
  char v11; // al
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rbp
  unsigned int v18; // eax
  __int16 v19; // ax
  __int64 v20; // rdx
  __int64 v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+30h] [rbp-78h]
  _OWORD v23[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v24; // [rsp+60h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(__int64 **)(v3 + 8);
  v7 = v6[11];
  v8 = v6[17];
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(v6[9], a2, 12, 15, (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids, *(_QWORD *)v3);
    }
    v9 = 1;
    LODWORD(v10) = *(_BYTE *)(v3 + 440) == 0 ? 0xC0000001 : 0;
    goto LABEL_35;
  }
  v11 = *(_BYTE *)(a1 + 60);
  if ( v11 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_d(v6[9], a2, 12, 19, (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids, v11);
    }
    if ( *(_BYTE *)(a1 + 60) != 9 )
      goto LABEL_31;
    memset(v23, 0, sizeof(v23));
    v24 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount > 0x33 )
      {
        LOWORD(v23[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_30:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _OWORD *))(WdfFunctions_01033 + 2128))(
          WdfDriverGlobals,
          *(_QWORD *)(v3 + 432),
          v23);
        *(_DWORD *)(*((_QWORD *)&v23[0] + 1) + 32LL) |= 2u;
LABEL_31:
        if ( *(_BYTE *)(v3 + 440) )
        {
          Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4118, 0, 0LL, 0LL, 0LL);
          v9 = 0;
        }
        else
        {
          v9 = 1;
        }
        LODWORD(v10) = -1073741823;
LABEL_35:
        LOBYTE(a2) = 1;
        result = Endpoint_Disable(*(_QWORD *)(v3 + 184), a2);
        if ( v9 )
        {
          v20 = *(_QWORD *)(v3 + 432);
          *(_QWORD *)(v3 + 432) = 0LL;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
                   WdfDriverGlobals,
                   v20,
                   (unsigned int)v10);
        }
        return result;
      }
      v19 = -1;
    }
    else
    {
      v19 = 40;
    }
    LOWORD(v23[0]) = v19;
    goto LABEL_30;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      v6[9],
      4u,
      0xCu,
      0x10u,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(unsigned __int8 *)(a1 + 61),
      *(_QWORD *)v3);
  *(_BYTE *)(v3 + 142) = 1;
  *(_BYTE *)(v3 + 143) = *(_BYTE *)(a1 + 61);
  Endpoint_SetLogIdentifier(*(_QWORD *)(v3 + 184));
  v12 = XilDeviceSlot_SetDeviceContext(v8, v3, *(unsigned __int8 *)(v3 + 143));
  v10 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = v12;
      LODWORD(v21) = *(unsigned __int8 *)(v3 + 143);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xCu,
        0x11u,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v21,
        v22);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)v3,
      0,
      0x20000LL,
      "Enable Slot command returned a SlotId value that is already in use",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalErrorEx(*(_QWORD *)(v3 + 8), 2, 4116, 0, v10, 0LL, 0LL, 0LL);
    v9 = 1;
    goto LABEL_35;
  }
  v13 = *(_QWORD *)(v7 + 48);
  if ( v13 )
    v14 = v13 + 4LL * *(unsigned __int8 *)(v3 + 143);
  else
    v14 = 0LL;
  *(_QWORD *)(v3 + 168) = v14;
  LOBYTE(v14) = 1;
  result = UsbDevice_SetAddress(v3, v14);
  v16 = (int)result;
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = result;
      LODWORD(v21) = *(unsigned __int8 *)(v3 + 143);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2u,
        0xCu,
        0x12u,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v21,
        v22);
    }
    v17 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 144LL);
    memset((void *)(v3 + 464), 0, 0x60uLL);
    if ( *(_BYTE *)(v3 + 440) )
    {
      return Controller_ReportFatalErrorEx(*(_QWORD *)(v3 + 8), 2, 4117, 0, v16, 0LL, 0LL, 0LL);
    }
    else
    {
      *(_QWORD *)(v3 + 512) = v3;
      *(_QWORD *)(v3 + 504) = UsbDevice_DisableCompletionReturnFailure;
      v18 = *(_DWORD *)(v3 + 500) & 0xFFFF2BFF;
      *(_QWORD *)(v3 + 536) = 0LL;
      *(_QWORD *)(v3 + 544) = 0LL;
      *(_DWORD *)(v3 + 500) = v18 | 0x2800;
      *(_BYTE *)(v3 + 503) = *(_BYTE *)(v3 + 143);
      *(_QWORD *)(v3 + 552) = 0LL;
      return Command_SendCommand(v17, v3 + 464);
    }
  }
  return result;
}
