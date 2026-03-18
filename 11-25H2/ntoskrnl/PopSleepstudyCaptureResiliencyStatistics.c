/*
 * XREFs of PopSleepstudyCaptureResiliencyStatistics @ 0x140AB922C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopDiagTraceCsResiliencyExit @ 0x140486CFC (PopDiagTraceCsResiliencyExit.c)
 *     PopDiagTraceCsResiliencyEnter @ 0x1404D4570 (PopDiagTraceCsResiliencyEnter.c)
 *     PopCalculateTotalHwDripsResidency @ 0x1404F6008 (PopCalculateTotalHwDripsResidency.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopDiagTraceCsResiliencyStats @ 0x140AB304C (PopDiagTraceCsResiliencyStats.c)
 */

void __fastcall PopSleepstudyCaptureResiliencyStatistics(_QWORD *a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  _QWORD v12[3]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v13[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v14; // [rsp+5Ch] [rbp-ACh]
  __int64 v15; // [rsp+80h] [rbp-88h]
  int v16; // [rsp+88h] [rbp-80h]
  __int64 v17; // [rsp+90h] [rbp-78h]
  int v18; // [rsp+98h] [rbp-70h]
  int v19[60]; // [rsp+A8h] [rbp-60h] BYREF

  v19[1] = 0;
  v14 = 0;
  memset_0(v13, 0, 0x44uLL);
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0ACB0);
  *(_OWORD *)&v12[1] = xmmword_140F0AD28;
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0ACB0);
  if ( a4 )
  {
    PopDiagTraceCsResiliencyEnter(a2, a3, (__int128 *)&v12[1]);
  }
  else
  {
    v8 = (a1[13] - a1[2]) / 0xAuLL;
    v9 = PopCalculateTotalHwDripsResidency(a1[9], a1[11], v8);
    v10 = 0LL;
    if ( v9 != -1 )
      v10 = v9;
    qword_140E27A58 += v10;
    v11 = a1[12] - a1[10];
    qword_140E27A60 += v11;
    if ( qword_140E67278 )
      guard_dispatch_icall_no_overrides(v13);
    qword_140E27AF8 = v15;
    dword_140E27B00 = v16;
    qword_140E27AE8 = v17;
    dword_140E27AF0 = v18;
    memset_0(v19, 0, sizeof(v19));
    PopDiagTraceCsResiliencyExit((__int64)v19, a2, a3, (__int64)&v12[1], v8, v10, v11, (__int64)v13);
    PopDiagTraceCsResiliencyStats(v19);
  }
}
