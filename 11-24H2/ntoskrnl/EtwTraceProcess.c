/*
 * XREFs of EtwTraceProcess @ 0x1408F11B4
 * Callers:
 *     PspExitProcess @ 0x1408F2E70 (PspExitProcess.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpLogProcessPerfCtrs @ 0x1407A9EE8 (EtwpLogProcessPerfCtrs.c)
 *     EtwpInitStateChangeInfo @ 0x1408F0924 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1408F09E0 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x1408F13BC (EtwpWriteProcessEvent.c)
 *     EtwpWriteAppStateChange @ 0x1408F1C20 (EtwpWriteAppStateChange.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1408F24A8 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpEnumerateAddressSpace @ 0x140951B80 (EtwpEnumerateAddressSpace.c)
 *     EtwpWriteProcessStarted @ 0x140A2FF1C (EtwpWriteProcessStarted.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    if ( !dword_140E09160
      || (qword_140E09170 & 0x600000000003LL) == 0
      || (v5 = 1, (qword_140E09178 & 0x600000000003LL) != qword_140E09178) )
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
