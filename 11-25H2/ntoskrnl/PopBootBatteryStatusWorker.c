/*
 * XREFs of PopBootBatteryStatusWorker @ 0x140A6DD60
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage @ 0x1404F8560 (Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A6DFC0 (SshpSessionManagerSendControlEventSlimEtl.c)
 */

__int64 PopBootBatteryStatusWorker()
{
  __m128i v0; // xmm1
  int v2; // [rsp+20h] [rbp-60h] BYREF
  int v3; // [rsp+28h] [rbp-58h] BYREF
  __int128 v4; // [rsp+50h] [rbp-30h] BYREF
  int *v5; // [rsp+60h] [rbp-20h]
  int v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+6Ch] [rbp-14h]

  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0ACB0);
  v4 = xmmword_140F0ACC0;
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0ACB0);
  v0 = (__m128i)v4;
  v7 = 0;
  *(_QWORD *)&v4 = &v2;
  v3 = _mm_cvtsi128_si32(_mm_srli_si128(v0, 8));
  v2 = _mm_cvtsi128_si32(_mm_srli_si128(v0, 12));
  *((_QWORD *)&v4 + 1) = 4LL;
  v5 = &v3;
  v6 = 4;
  Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage();
  return SshpSessionManagerSendControlEventSlimEtl(SLEEPSTUDY_EVT_BOOT_BATTERY_STATUS_CONTROL_EVENT, 2LL, &v4);
}
