/*
 * XREFs of EtwTraceProcess @ 0x14094CC44
 * Callers:
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspExitProcess @ 0x1409387A0 (PspExitProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14045D2F0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpLogProcessPerfCtrs @ 0x1407A9DA8 (EtwpLogProcessPerfCtrs.c)
 *     EtwpInitStateChangeInfo @ 0x14094C3B4 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14094C470 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x14094CE4C (EtwpWriteProcessEvent.c)
 *     EtwpWriteAppStateChange @ 0x14094D6B0 (EtwpWriteAppStateChange.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14094DF38 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteProcessStarted @ 0x14094E248 (EtwpWriteProcessStarted.c)
 *     EtwpEnumerateAddressSpace @ 0x1409690F0 (EtwpEnumerateAddressSpace.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(PRKPROCESS PROCESS, __int16 a2)
{
  PVOID v4; // rbx
  char v5; // al
  BOOLEAN v6; // bl
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v8; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v10[112]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[672]; // [rsp+C0h] [rbp-40h] BYREF

  v8 = 0LL;
  memset_0(v11, 0, sizeof(v11));
  v7 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask[0] & 0xC004) != 0 )
    {
      v6 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(PROCESS);
      IoSetThreadHardErrorMode(v6);
    }
    if ( (PerfGlobalGroupMask[0] & 8) != 0 )
      EtwpLogProcessPerfCtrs((__int64)PROCESS);
  }
  EtwpWriteProcessEvent((int)PROCESS, (__int64)P, (__int64)&v8);
  v4 = v8;
  if ( a2 == 769 )
  {
    if ( !dword_140E090F0
      || (qword_140E09100 & 0x600000000003LL) == 0
      || (v5 = 1, (qword_140E09108 & 0x600000000003LL) != qword_140E09108) )
    {
      v5 = 0;
    }
    if ( v5 )
    {
      memset_0(v10, 0, 0x62uLL);
      EtwpWriteProcessStarted((_DWORD)PROCESS, (unsigned int)&v7, (unsigned int)v11, (unsigned int)P, (__int64)v4);
      EtwpInitStateChangeInfo((__int64)PROCESS, (__int64)v10);
      *(_WORD *)v10 = 0;
      EtwpWriteAppStateChange(v10);
      if ( !(unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(PROCESS) )
        LOWORD(P[0]) = 0;
      EtwpWriteAppStateChangeSummary((__int64)PROCESS, v10, 0LL, (__int64)v11, &v7, (unsigned __int16 *)P);
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
