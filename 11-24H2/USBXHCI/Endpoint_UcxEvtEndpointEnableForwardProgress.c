/*
 * XREFs of Endpoint_UcxEvtEndpointEnableForwardProgress @ 0x140047CD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     TR_EnableForwardProgress_Internal @ 0x14004B0C8 (TR_EnableForwardProgress_Internal.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointEnableForwardProgress(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edi
  unsigned __int16 v6; // r9
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-10h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AFE8);
  v4 = v3;
  if ( *(_BYTE *)(v3 + 37) )
  {
    v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(*(_QWORD *)(v3 + 144) + 48LL), a2);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 62;
        v10 = v5;
        v9 = *(_DWORD *)(v4 + 152);
        v8 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 143LL);
LABEL_8:
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v4 + 80),
          3u,
          0xDu,
          v6,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          v8,
          v9,
          v10);
        return (unsigned int)v5;
      }
      return (unsigned int)v5;
    }
LABEL_9:
    *(_BYTE *)(v4 + 36) = 1;
    return (unsigned int)v5;
  }
  v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(v3 + 88), a2);
  if ( v5 >= 0 )
    goto LABEL_9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 63;
    v10 = v5;
    v9 = *(_DWORD *)(v4 + 152);
    v8 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 143LL);
    goto LABEL_8;
  }
  return (unsigned int)v5;
}
