/*
 * XREFs of EtwWmitraceWorker @ 0x1407AC83C
 * Callers:
 *     ExpDebuggerWorker @ 0x140B79F70 (ExpDebuggerWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     RtlInitAnsiString @ 0x1404654C0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x1407ACB64 (EtwpPrepareWmitraceLoggerInfo.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpStartTrace @ 0x1408330A4 (EtwpStartTrace.c)
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 *     EtwpQueryTrace @ 0x1408347C0 (EtwpQueryTrace.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 *     PsGetSiloBySessionId @ 0x1409BA9A4 (PsGetSiloBySessionId.c)
 *     EtwEnableTrace @ 0x140A48790 (EtwEnableTrace.c)
 */

void EtwWmitraceWorker()
{
  __int64 v0; // rdi
  int SiloBySessionId; // ebx
  int Trace; // eax
  int v3; // ebx
  int v4; // eax
  int updated; // eax
  int v6; // eax
  int started; // eax
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v10[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v11; // [rsp+68h] [rbp-98h]
  int v12; // [rsp+90h] [rbp-70h]
  int v13; // [rsp+94h] [rbp-6Ch]
  int v14; // [rsp+98h] [rbp-68h]
  int v15; // [rsp+9Ch] [rbp-64h]
  int v16; // [rsp+A0h] [rbp-60h]
  int v17; // [rsp+A4h] [rbp-5Ch]
  UNICODE_STRING v18; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+F0h] [rbp-10h] BYREF

  memset_0(v10, 0, 0xB0uLL);
  v8 = 0LL;
  DestinationString = 0LL;
  if ( dword_140EFF024 )
  {
    SiloBySessionId = PsGetSiloBySessionId((unsigned int)dword_140EFF024, &v8);
    if ( SiloBySessionId < 0 || !v8 )
      goto LABEL_34;
    v0 = *(_QWORD *)(*(_QWORD *)(v8 + 1504) + 832LL);
  }
  else
  {
    v0 = EtwpHostSiloState;
  }
  switch ( EtwWmitraceWork )
  {
    case 1:
      EtwpPrepareWmitraceLoggerInfo(v10);
      RtlInitAnsiString(&DestinationString, qword_140EFF028);
      RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      v13 = dword_140EFF0F0;
      v14 = dword_140EFF0F4;
      v12 = dword_140EFF0F8;
      v16 = dword_140EFF0FC;
      v17 = dword_140EFF100;
      v15 = dword_140EFF0EC;
      if ( byte_140EFF069 )
      {
        RtlInitAnsiString(&DestinationString, &byte_140EFF069);
        RtlAnsiStringToUnicodeString(&v18, &DestinationString, 1u);
      }
      started = EtwpStartTrace(v0, v10);
      SiloBySessionId = started;
      if ( started >= 0 )
        EtwpWmitraceParams = v11;
      else
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
      RtlFreeAnsiString(&UnicodeString);
      if ( byte_140EFF069 )
        RtlFreeAnsiString(&v18);
      break;
    case 2:
      EtwpPrepareWmitraceLoggerInfo(v10);
      Trace = EtwpQueryTrace(v0, v10);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_24;
      v6 = EtwpStopTrace(v0, v10, 0LL);
      SiloBySessionId = v6;
      if ( v6 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v6);
      break;
    case 3:
      EtwpPrepareWmitraceLoggerInfo(v10);
      Trace = EtwpQueryTrace(v0, v10);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_24;
      v16 |= 0x80000u;
      updated = EtwpUpdateTrace(v0, v10);
      SiloBySessionId = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
      break;
    default:
      if ( EtwWmitraceWork != 4 && (unsigned int)(unsigned __int8)EtwWmitraceWork - 5 >= 2 )
      {
        SiloBySessionId = -1073741637;
        DbgPrintEx(0x17u, 3u, "Unknown command passed to EtwWmitraceWorker.\n");
        break;
      }
      EtwpPrepareWmitraceLoggerInfo(v10);
      Trace = EtwpQueryTrace(v0, v10);
      SiloBySessionId = Trace;
      if ( Trace >= 0 )
      {
        if ( EtwWmitraceWork == 4 )
        {
          v3 = 1;
        }
        else if ( EtwWmitraceWork == 5 )
        {
          v3 = 0;
        }
        else
        {
          v3 = 2;
        }
        v4 = EtwEnableTrace(
               (unsigned int)&unk_140EFF03C,
               0,
               EtwpWmitraceParams,
               v3,
               byte_140EFF04C,
               *(__int64 *)qword_140EFF028,
               qword_140EFF030,
               dword_140EFF038);
        SiloBySessionId = v4;
        if ( v4 < 0 )
          DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v4);
        break;
      }
LABEL_24:
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
      break;
  }
LABEL_34:
  dword_140EFF108 = SiloBySessionId;
  EtwWmitraceWork = 0;
}
