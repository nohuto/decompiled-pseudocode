/*
 * XREFs of UcpFindOrCreateTelemetryRecord @ 0x180158E18
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x180158AB0 (UcOnUnexpectedCodePath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18010FC38 (_tlgKeywordOn.c)
 *     UcpCreateTelemetryRecord @ 0x180158D84 (UcpCreateTelemetryRecord.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

_QWORD *__fastcall UcpFindOrCreateTelemetryRecord(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *TelemetryRecord; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  _EVENT_DATA_DESCRIPTOR v12; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]

  v1 = UcpTriggeredList;
  v3 = 0LL;
  while ( (__int64 *)v1 != &UcpTriggeredList )
  {
    if ( *(_QWORD *)(v1 - 32) == *(_QWORD *)a1
      && *(_DWORD *)(v1 + 24) == *(_DWORD *)(a1 + 8)
      && *(_DWORD *)(v1 + 28) == *(_DWORD *)(a1 + 12)
      && *(_DWORD *)(v1 + 32) == *(_DWORD *)(a1 + 16) )
    {
      v3 = (_QWORD *)(v1 - 32);
      break;
    }
    v1 = *(_QWORD *)v1;
  }
  if ( v3 )
    return v3;
  LODWORD(v4) = UcpTriggeredNodeCount;
  if ( (unsigned int)UcpTriggeredNodeCount < 0x64 )
  {
    TelemetryRecord = UcpCreateTelemetryRecord((__int64 *)a1);
    v3 = TelemetryRecord;
    if ( TelemetryRecord )
    {
      v9 = UcpTriggeredList;
      v10 = TelemetryRecord + 4;
      if ( *(__int64 **)(UcpTriggeredList + 8) != &UcpTriggeredList )
        __fastfail(3u);
      *v10 = UcpTriggeredList;
      v10[1] = &UcpTriggeredList;
      *(_QWORD *)(v9 + 8) = v10;
      UcpTriggeredList = (__int64)v10;
    }
    return v3;
  }
  if ( !UcpMaxTriggeredNodeExcceded && UcIsTraceLoggingInitialized == 1 )
  {
    if ( (unsigned int)dword_1801CE6B8 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1801CE6B8, 0x400000000000LL) )
      {
        v15 = 0;
        v13 = &v11;
        v11 = v4;
        v14 = 8;
        tlgWriteTransfer_EtwEventWriteTransfer(v5, (unsigned __int8 *)dword_1801A44CA, v6, v4, 3u, &v12);
        LODWORD(v4) = UcpTriggeredNodeCount;
      }
    }
    UcpMaxTriggeredNodeExcceded = 1;
  }
  UcpTriggeredNodeCount = v4 + 1;
  return 0LL;
}
