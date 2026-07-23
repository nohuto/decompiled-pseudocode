/*
 * XREFs of EtwpSendSessionNotification @ 0x1409D4E48
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x1409D3A4C (EtwpRealtimeCreateLogfile.c)
 *     EtwpStopLoggerInstance @ 0x1409D3C74 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1409D427C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpFlushBuffer @ 0x1409D4598 (EtwpFlushBuffer.c)
 *     EtwpCreateLogFile @ 0x1409D51BC (EtwpCreateLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, int a2, int a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  _DWORD v10[10]; // [rsp+20h] [rbp-88h] BYREF
  GUID v11; // [rsp+48h] [rbp-60h]
  __int128 v12; // [rsp+58h] [rbp-50h]
  int v13; // [rsp+68h] [rbp-40h]
  int v14; // [rsp+6Ch] [rbp-3Ch]
  __int64 v15; // [rsp+70h] [rbp-38h]

  v3 = *(_WORD *)a1;
  if ( !*(_WORD *)a1 )
    v3 = -1;
  memset_0(v10, 0, 0x60uLL);
  v7 = *(_QWORD *)(a1 + 1360);
  v11 = SessionNotificationGuid;
  v10[1] = 96;
  v8 = *(_OWORD *)(a1 + 276);
  v10[0] = 7;
  v15 = v3;
  v12 = v8;
  v13 = a2;
  v14 = a3;
  return EtwpNotifyGuid(v7, (__int64)v10, 0);
}
