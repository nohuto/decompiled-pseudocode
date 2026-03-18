/*
 * XREFs of HUBHTX_GetPortStatusForBootDevice @ 0x140004E88
 * Callers:
 *     HUBMISC_IsBootDeviceReady @ 0x14003098C (HUBMISC_IsBootDeviceReady.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x14002EDA8 (HUBMISC_ControlTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x1400341C8 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHTX_GetPortStatusForBootDevice(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rax
  char v8; // al
  int v9; // eax
  unsigned int v10; // ebx
  unsigned __int16 v11; // r9
  __int64 v13; // [rsp+28h] [rbp-70h]
  __int64 v14; // [rsp+50h] [rbp-48h] BYREF
  int v15; // [rsp+58h] [rbp-40h]
  __int64 v16; // [rsp+5Ch] [rbp-3Ch]
  int v17; // [rsp+64h] [rbp-34h]
  struct _KEVENT Event; // [rsp+68h] [rbp-30h] BYREF

  v14 = 24LL;
  *a2 = 0;
  v2 = (_QWORD *)(a1 + 2256);
  v16 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v5 = *(_QWORD *)(a1 + 2256);
  v17 = 0;
  v15 = 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v5,
         &v14);
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006C1E8);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v7 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v6);
  }
  v8 = *(_BYTE *)(a1 + 2408) & 0x1C;
  *(_BYTE *)(a1 + 2409) = 0;
  *(_WORD *)(a1 + 2410) = 0;
  *(_BYTE *)(a1 + 2408) = v8 | 0xA3;
  *(_WORD *)(a1 + 2412) = *(_WORD *)(*(_QWORD *)(a1 + 8) + 200LL);
  *(_WORD *)(a1 + 2414) = 4;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v9 = HUBMISC_ControlTransfer(
         *(_QWORD *)a1,
         *(_QWORD *)(*(_QWORD *)a1 + 248LL),
         (unsigned int)&Event,
         (_DWORD)v2,
         (__int64)HUBHTX_BootDevicePortStatusControlTransferComplete,
         (__int64)a2,
         4,
         0,
         1);
  v10 = v9;
  if ( v9 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    HUBMISC_WaitForSignal(&Event);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, *v2);
    v10 = v9;
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 116;
      goto LABEL_10;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 115;
LABEL_10:
    LODWORD(v13) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v11,
      (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
      v13);
  }
  return v10;
}
