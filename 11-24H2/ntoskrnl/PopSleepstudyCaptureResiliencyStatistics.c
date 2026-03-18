/*
 * XREFs of PopSleepstudyCaptureResiliencyStatistics @ 0x140ABD324
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopDiagTraceCsResiliencyExit @ 0x14032D25C (PopDiagTraceCsResiliencyExit.c)
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopDiagTraceCsResiliencyEnter @ 0x1404EBA2C (PopDiagTraceCsResiliencyEnter.c)
 *     PopCalculateTotalHwDripsResidency @ 0x1404F87BC (PopCalculateTotalHwDripsResidency.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopDiagTraceCsResiliencyStats @ 0x140AB7B74 (PopDiagTraceCsResiliencyStats.c)
 */

void __fastcall PopSleepstudyCaptureResiliencyStatistics(_QWORD *a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // r14
  _QWORD v15[3]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v16[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v17; // [rsp+5Ch] [rbp-ACh]
  __int64 v18; // [rsp+80h] [rbp-88h]
  int v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+98h] [rbp-70h]
  int v22[60]; // [rsp+A8h] [rbp-60h] BYREF

  v22[1] = 0;
  v17 = 0;
  memset_0(v16, 0, 0x44uLL);
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0B050);
  *(_OWORD *)&v15[1] = xmmword_140F0B0C8;
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0B050);
  if ( a4 )
  {
    PopDiagTraceCsResiliencyEnter(a2, a3, (__int128 *)&v15[1]);
  }
  else
  {
    v8 = (a1[13] - a1[2]) / 0xAuLL;
    v9 = PopCalculateTotalHwDripsResidency(a1[9], a1[11], v8);
    v13 = 0LL;
    if ( v9 != -1 )
      v13 = v9;
    qword_140E27C98 += v13;
    v14 = a1[12] - a1[10];
    qword_140E27CA0 += v14;
    if ( qword_140E67558 )
      guard_dispatch_icall_no_overrides(v16, v10, v11, v12);
    qword_140E27D38 = v18;
    dword_140E27D40 = v19;
    qword_140E27D28 = v20;
    dword_140E27D30 = v21;
    memset_0(v22, 0, sizeof(v22));
    PopDiagTraceCsResiliencyExit((__int64)v22, a2, a3, (__int64)&v15[1], v8, v13, v14, (__int64)v16);
    PopDiagTraceCsResiliencyStats(v22);
  }
}
