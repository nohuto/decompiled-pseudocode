/*
 * XREFs of EtwTraceProcess @ 0x140920FCC
 * Callers:
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspExitProcess @ 0x14091EFA0 (PspExitProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14045E010 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpLogProcessPerfCtrs @ 0x14079A9D8 (EtwpLogProcessPerfCtrs.c)
 *     EtwpEnumerateAddressSpace @ 0x1408C04E0 (EtwpEnumerateAddressSpace.c)
 *     EtwpInitStateChangeInfo @ 0x1409202A8 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140920364 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteAppStateChange @ 0x1409209CC (EtwpWriteAppStateChange.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140920AE0 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteProcessEvent @ 0x1409211D4 (EtwpWriteProcessEvent.c)
 *     EtwpWriteProcessStarted @ 0x1409221D8 (EtwpWriteProcessStarted.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(struct _KPROCESS *a1, __int16 a2)
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
      EtwpEnumerateAddressSpace(a1, 0LL, PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v6);
    }
    if ( (PerfGlobalGroupMask[0] & 8) != 0 )
      EtwpLogProcessPerfCtrs((__int64)a1);
  }
  EtwpWriteProcessEvent((int)a1, (__int64)P, (__int64)&v8);
  v4 = v8;
  if ( a2 == 769 )
  {
    if ( !dword_140E09010
      || (qword_140E09020 & 0x600000000003LL) == 0
      || (v5 = 1, (qword_140E09028 & 0x600000000003LL) != qword_140E09028) )
    {
      v5 = 0;
    }
    if ( v5 )
    {
      memset_0(v10, 0, 0x62uLL);
      EtwpWriteProcessStarted((_DWORD)a1, (unsigned int)&v7, (unsigned int)v11, (unsigned int)P, (__int64)v4);
      EtwpInitStateChangeInfo((__int64)a1, (__int64)v10);
      *(_WORD *)v10 = 0;
      EtwpWriteAppStateChange((__int64)v10);
      if ( !EtwpAppStateChangeSummaryShouldLogCommandLine((__int64)a1) )
        LOWORD(P[0]) = 0;
      EtwpWriteAppStateChangeSummary((__int64)a1, v10, 0LL, (__int64)v11, &v7, (unsigned __int16 *)P);
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
