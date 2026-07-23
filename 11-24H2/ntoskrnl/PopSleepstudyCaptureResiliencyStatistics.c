/*
 * XREFs of PopSleepstudyCaptureResiliencyStatistics @ 0x140AB8394
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1402B5CBC (PopDiagTraceCsResiliencyExit.c)
 *     PopDiagTraceCsResiliencyEnter @ 0x1404E296C (PopDiagTraceCsResiliencyEnter.c)
 *     PopCalculateTotalHwDripsResidency @ 0x1404F609C (PopCalculateTotalHwDripsResidency.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopDiagTraceCsResiliencyStats @ 0x140AB1F28 (PopDiagTraceCsResiliencyStats.c)
 */

void __fastcall PopSleepstudyCaptureResiliencyStatistics(_QWORD *a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r14
  _QWORD v13[3]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v14[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v15; // [rsp+5Ch] [rbp-ACh]
  __int64 v16; // [rsp+80h] [rbp-88h]
  int v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  int v19; // [rsp+98h] [rbp-70h]
  int v20[60]; // [rsp+A8h] [rbp-60h] BYREF

  v20[1] = 0;
  v15 = 0;
  memset_0(v14, 0, 0x44uLL);
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0BE90);
  *(_OWORD *)&v13[1] = xmmword_140F0BF08;
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0BE90);
  if ( a4 )
  {
    PopDiagTraceCsResiliencyEnter(a2, a3, (__int128 *)&v13[1]);
  }
  else
  {
    v8 = (a1[13] - a1[2]) / 0xAuLL;
    v9 = PopCalculateTotalHwDripsResidency(a1[9], a1[11], v8);
    v11 = 0LL;
    if ( v9 != -1 )
      v11 = v9;
    qword_140E27DD8 += v11;
    v12 = a1[12] - a1[10];
    qword_140E27DE0 += v12;
    if ( qword_140E676C8 )
      guard_dispatch_icall_no_overrides(v14, v10);
    qword_140E27E78 = v16;
    dword_140E27E80 = v17;
    qword_140E27E68 = v18;
    dword_140E27E70 = v19;
    memset_0(v20, 0, sizeof(v20));
    PopDiagTraceCsResiliencyExit((__int64)v20, a2, a3, (__int64)&v13[1], v8, v11, v12, (__int64)v14);
    PopDiagTraceCsResiliencyStats(v20);
  }
}
