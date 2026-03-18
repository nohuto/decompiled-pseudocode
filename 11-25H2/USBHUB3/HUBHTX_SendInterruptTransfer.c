/*
 * XREFs of HUBHTX_SendInterruptTransfer @ 0x140005C54
 * Callers:
 *     HUBHSM_SendingInterruptTransfer @ 0x140009F00 (HUBHSM_SendingInterruptTransfer.c)
 *     HUBHSM_SendingInterruptTransferAfterResettingPipe @ 0x140009F40 (HUBHSM_SendingInterruptTransferAfterResettingPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

__int64 __fastcall HUBHTX_SendInterruptTransfer(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // edi
  __int64 v4; // rax
  unsigned __int16 v5; // ax
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // r14d
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // [rsp+28h] [rbp-41h]
  int v12; // [rsp+28h] [rbp-41h]
  __int64 v13; // [rsp+30h] [rbp-39h] BYREF
  int v14; // [rsp+38h] [rbp-31h]
  __int64 v15; // [rsp+3Ch] [rbp-2Dh]
  int v16; // [rsp+44h] [rbp-25h]
  _QWORD v17[9]; // [rsp+48h] [rbp-21h] BYREF

  v1 = *(_QWORD *)(a1 + 976);
  v15 = 0LL;
  v16 = 0;
  v13 = 24LL;
  v14 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v1,
         &v13);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006C1E8);
    v12 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
      v12);
  }
  memset((void *)(a1 + 986), 0, 0x7EuLL);
  *(_QWORD *)(a1 + 992) = *(_QWORD *)(a1 + 248);
  *(_DWORD *)(a1 + 984) = 589952;
  *(_DWORD *)(a1 + 1016) = 2;
  if ( *(_BYTE *)(a1 + 2280) )
    *(_DWORD *)(a1 + 1016) = 18;
  *(_QWORD *)(a1 + 1024) = *(_QWORD *)(a1 + 1128);
  if ( *(_BYTE *)(a1 + 240) )
    v5 = *(_WORD *)(a1 + 88);
  else
    v5 = *(_WORD *)(a1 + 1136);
  *(_DWORD *)(a1 + 1020) = v5;
  *(_QWORD *)(a1 + 1032) = 0LL;
  *(_QWORD *)(a1 + 1008) = *(_QWORD *)(a1 + 1112);
  if ( *(_BYTE *)(a1 + 1120) )
  {
    *(_DWORD *)(a1 + 1000) |= 0x80000000;
    *(_BYTE *)(a1 + 1120) = 0;
  }
  memset(v17, 0, sizeof(v17));
  LOBYTE(v17[0]) = 15;
  LODWORD(v17[3]) = 2228227;
  v17[1] = a1 + 984;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v1,
    v17);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v1,
    HUBHTX_SendInterruptTransferComplete,
    a1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v1,
             v6,
             0LL);
  if ( !(_BYTE)result )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v1);
    v15 = 0LL;
    v16 = 0;
    v13 = 24LL;
    v14 = 0;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
               WdfDriverGlobals,
               v1,
               &v13);
    v9 = result;
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_14006C1E8);
      LODWORD(v11) = v9;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(v10 + 64),
                 2u,
                 2u,
                 0x3Bu,
                 (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
                 v11);
    }
    if ( v8 < 0 )
      return HUBSM_AddEvent(a1 + 1272, 2030LL);
  }
  return result;
}
