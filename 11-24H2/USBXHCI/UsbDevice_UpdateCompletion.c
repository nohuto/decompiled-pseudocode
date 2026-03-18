/*
 * XREFs of UsbDevice_UpdateCompletion @ 0x14003BB80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x14000212C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqD @ 0x1400329C0 (WPP_RECORDER_SF_dqD.c)
 *     UsbDevice_UpdateUsbDevice @ 0x14003BDAC (UsbDevice_UpdateUsbDevice.c)
 *     UsbDevice_QueueTunnelStateDSM @ 0x14004DB7C (UsbDevice_QueueTunnelStateDSM.c)
 *     WPP_RECORDER_SF_dqDL @ 0x14004E314 (WPP_RECORDER_SF_dqDL.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_UpdateCompletion(__int64 a1, int a2)
{
  __int64 v2; // rbx
  char v5; // si
  __int64 v6; // r15
  __int16 v7; // ax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // r8
  __int64 v13; // [rsp+20h] [rbp-78h]
  _OWORD v14[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+70h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 48);
  v5 = 1;
  v6 = *(_QWORD *)(v2 + 432);
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v14[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v7 = -1;
  }
  else
  {
    v7 = 40;
  }
  LOWORD(v14[0]) = v7;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    v6,
    v14);
  v10 = *((_QWORD *)&v14[0] + 1);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        4u,
        0xCu,
        0x22u,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(unsigned __int8 *)(v2 + 143),
        *(_QWORD *)v2);
LABEL_24:
    v12 = 3221225473LL;
LABEL_25:
    *(_QWORD *)(v2 + 432) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v6,
             v12);
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqDL(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v8, v9);
    if ( *(_BYTE *)(a1 + 60) == 29 )
      *(_DWORD *)(v10 + 56) |= 1u;
    goto LABEL_24;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqD(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), v8, 0x23u, v13);
  if ( (*(_DWORD *)(v10 + 24) & 0x80u) != 0
    && (*(_QWORD *)(*(_QWORD *)(v2 + 8) + 744LL) & 0x10000000LL) != 0
    && (result = UsbDevice_QueueTunnelStateDSM(v2, v10), (_BYTE)result) )
  {
    v5 = 0;
  }
  else
  {
    result = UsbDevice_UpdateUsbDevice(v2, v10);
  }
  v12 = 0LL;
  if ( v5 )
    goto LABEL_25;
  return result;
}
