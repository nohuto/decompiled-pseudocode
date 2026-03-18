/*
 * XREFs of UsbDevice_DeviceResetCompletion @ 0x140001110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x14000212C (WPP_RECORDER_SF_dq.c)
 *     Endpoint_Disable @ 0x140002DBC (Endpoint_Disable.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     UsbDevice_GetEndpointState @ 0x140008140 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_dLL @ 0x14004E224 (WPP_RECORDER_SF_dLL.c)
 *     WPP_RECORDER_SF_dqLL @ 0x14004E42C (WPP_RECORDER_SF_dqLL.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_DeviceResetCompletion(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  char v6; // r14
  int v8; // edx
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  _QWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  int v18; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 48);
  v6 = a2;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(v4 + 143);
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v8,
        12,
        83,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(_BYTE *)(v4 + 143),
        *(_QWORD *)v4);
    }
    v9 = (_QWORD *)(v4 + 192);
    v10 = 30LL;
    do
    {
      if ( *v9 )
        Endpoint_Disable(*v9, 0LL);
      ++v9;
      --v10;
    }
    while ( v10 );
LABEL_19:
    *(_DWORD *)(v4 + 160) = 3;
    v16 = *(_QWORD *)(v4 + 432);
    *(_QWORD *)(v4 + 432) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v16,
             0LL);
  }
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v11,
        12,
        84,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(_BYTE *)(a1 + 61),
        *(_QWORD *)v4);
    }
    if ( !(unsigned int)UsbDevice_GetEndpointState(v4, 1LL)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dLL(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        *(unsigned __int8 *)(a1 + 61),
        v12,
        v13,
        v18,
        *(_BYTE *)(a1 + 61),
        *(_BYTE *)(a1 + 60),
        v6);
    }
    v14 = (_QWORD *)(v4 + 192);
    v15 = 30LL;
    do
    {
      if ( *v14 )
        Endpoint_Disable(*v14, 0LL);
      ++v14;
      --v15;
    }
    while ( v15 );
    goto LABEL_19;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqLL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), a3, a4);
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD *)(v4 + 8),
    *(_QWORD *)v4,
    0,
    0x200000,
    (__int64)"Reset Device Command failed",
    a1 + 24,
    a3);
  return Controller_ReportFatalError(*(_QWORD *)(v4 + 8), 2, 4121, 0, 0LL, 0LL, 0LL);
}
