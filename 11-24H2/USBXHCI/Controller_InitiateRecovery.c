/*
 * XREFs of Controller_InitiateRecovery @ 0x14004032C
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1400426F0 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x140018FE0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     Register_ControllerStop @ 0x14001A214 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     CommonBuffer_FlushWorkItems @ 0x140030B48 (CommonBuffer_FlushWorkItems.c)
 *     Command_FailAllCommands @ 0x14003D22C (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x14003FE84 (Controller_DisableController.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 *     UsbDevice_ControllerGone @ 0x14004D710 (UsbDevice_ControllerGone.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Controller_InitiateRecovery(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // r15
  int v6; // eax
  int v7; // edx
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // r14
  unsigned int i; // esi
  __int64 v12; // rdx
  _OWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF

  memset(v13, 0, sizeof(v13));
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1[9], a2, 4, 247, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  }
  if ( (a3 & 2) != 0 && *((_DWORD *)a1 + 202) > 0xAu )
  {
    a3 |= 4u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        a1[9],
        1u,
        4u,
        0xF8u,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        *((_DWORD *)a1 + 202),
        10);
  }
  while ( a3 )
  {
    if ( (a3 & 0x18) != 0 )
    {
      v8 = *(_DWORD *)(v4 + 84);
      if ( (v8 & 2) == 0 )
      {
        Command_FailAllCommands(a1[18]);
        KeFlushQueuedDpcs();
        v9 = (_QWORD *)a1[15];
        if ( v9 )
          CommonBuffer_FlushWorkItems(v9);
        v10 = a1[17];
        for ( i = 1; i <= *(_DWORD *)(v10 + 96); ++i )
        {
          if ( *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(v10) + 8LL * i) )
            UsbDevice_ControllerGone();
        }
        KeFlushQueuedDpcs();
        ((void (__fastcall *)(__int64, _QWORD))qword_14006BD80)(UcxDriverGlobals, a1[1]);
        if ( (a3 & 8) != 0 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 696))(
            WdfDriverGlobals,
            *a1,
            2LL);
        v8 = *(_DWORD *)(v4 + 84) | 2;
        *(_DWORD *)(v4 + 84) = v8;
      }
      if ( (v8 & 4) == 0 && (a3 & 0x10) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_(a1[9], a2, 4, 249, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
        }
        memset(v13, 0, sizeof(v13));
        if ( WdfClientVersionHigherThanFramework )
        {
          if ( (unsigned int)WdfStructureCount <= 0x14 )
            LODWORD(v13[0]) = -1;
          else
            LODWORD(v13[0]) = *(_DWORD *)(WdfStructures + 160);
        }
        else
        {
          LODWORD(v13[0]) = 32;
        }
        v12 = *a1;
        *(__m128i *)((char *)v13 + 4) = _mm_load_si128((const __m128i *)&_xmm);
        HIDWORD(v13[1]) = 2;
        *(_QWORD *)((char *)&v13[1] + 4) = 0x200000001LL;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 232))(
          WdfDriverGlobals,
          v12,
          v13);
        *(_DWORD *)(v4 + 84) |= 4u;
      }
      a3 &= 0xFFFFFFE0;
    }
    else if ( (a3 & 4) != 0 )
    {
      v6 = Register_ControllerStop(a1[11]);
      if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(a1[9], v7, 4, 250, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v6);
      }
      Controller_DisableController((__int64)a1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 696))(
        WdfDriverGlobals,
        *a1,
        2LL);
      a3 &= 0xFFFFFFF8;
    }
    else if ( (a3 & 1) != 0 )
    {
      Controller_InternalReset(a1);
      a3 &= ~1u;
    }
    else if ( (a3 & 2) != 0 )
    {
      ((void (__fastcall *)(__int64, _QWORD))qword_14006BD70)(UcxDriverGlobals, a1[1]);
      a3 &= ~2u;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 696))(
        WdfDriverGlobals,
        *a1,
        2LL);
      a3 &= ~0x20u;
    }
    else
    {
      if ( (a3 & 0x40) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_d(a1[9], a2, 4, 251, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, a3);
        }
        return;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 696))(
        WdfDriverGlobals,
        *a1,
        1LL);
      a3 &= ~0x40u;
    }
  }
}
