/*
 * XREFs of UcpFindOrCreateTelemetryRecord @ 0x1406959D0
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x14069573C (UcOnUnexpectedCodePath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     UcpCreateTelemetryRecord @ 0x14069593C (UcpCreateTelemetryRecord.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall UcpFindOrCreateTelemetryRecord(__int64 a1)
{
  __int64 v1; // r9
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 TelemetryRecord; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v1 = UcpTriggeredList;
  v3 = 0LL;
  while ( (__int64 *)v1 != &UcpTriggeredList )
  {
    if ( *(_QWORD *)(v1 - 32) == *(_QWORD *)a1
      && *(_DWORD *)(v1 + 24) == *(_DWORD *)(a1 + 8)
      && *(_DWORD *)(v1 + 28) == *(_DWORD *)(a1 + 12)
      && *(_DWORD *)(v1 + 32) == *(_DWORD *)(a1 + 16) )
    {
      v3 = v1 - 32;
      break;
    }
    v1 = *(_QWORD *)v1;
  }
  if ( v3 )
    return v3;
  if ( (unsigned int)UcpTriggeredNodeCount < 0x64 )
  {
    TelemetryRecord = UcpCreateTelemetryRecord((__int64 *)a1);
    v3 = TelemetryRecord;
    if ( TelemetryRecord )
    {
      v7 = UcpTriggeredList;
      v8 = (_QWORD *)(TelemetryRecord + 32);
      if ( *(__int64 **)(UcpTriggeredList + 8) != &UcpTriggeredList )
        __fastfail(3u);
      *v8 = UcpTriggeredList;
      v8[1] = &UcpTriggeredList;
      *(_QWORD *)(v7 + 8) = v8;
      UcpTriggeredList = (__int64)v8;
    }
    return v3;
  }
  if ( !UcpMaxTriggeredNodeExcceded && UcIsTraceLoggingInitialized == 1 )
  {
    if ( (unsigned int)dword_140E0A090 > 4 && tlgKeywordOn((__int64)&dword_140E0A090, 0x400000000000LL) )
    {
      v13 = 0;
      v11 = &v9;
      v9 = v4;
      v12 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E0A090,
        (unsigned __int8 *)&word_14005962E,
        0LL,
        0LL,
        3u,
        &v10);
    }
    UcpMaxTriggeredNodeExcceded = 1;
  }
  ++UcpTriggeredNodeCount;
  return 0LL;
}
