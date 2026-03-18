/*
 * XREFs of Endpoint_WdfEvtPurgeComplete @ 0x14002D7A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x140001BE8 (WPP_RECORDER_SF_ddq.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_WdfEvtPurgeComplete(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 result; // rax
  unsigned __int16 v6; // r9
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a2,
         off_14006AFE8);
  v4 = v3;
  if ( !*(_BYTE *)(v3 + 37) || (result = *(_QWORD *)(v3 + 144)) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 37;
      goto LABEL_10;
    }
    return ((__int64 (__fastcall *)(__int64, __int64))qword_14006BDE0)(UcxDriverGlobals, a2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(result + 16), 0xFFFFFFFF) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 36;
LABEL_10:
      v8 = *(_DWORD *)(v4 + 152);
      v7 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 143LL);
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(v4 + 80),
        4u,
        0xDu,
        v6,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        v7,
        v8,
        a2);
      return ((__int64 (__fastcall *)(__int64, __int64))qword_14006BDE0)(UcxDriverGlobals, a2);
    }
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_14006BDE0)(UcxDriverGlobals, a2);
  }
  return result;
}
