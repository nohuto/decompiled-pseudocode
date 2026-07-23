/*
 * XREFs of PopBootBatteryStatusWorker @ 0x140A69400
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage @ 0x1404F82F0 (Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A69660 (SshpSessionManagerSendControlEventSlimEtl.c)
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

  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0BE90);
  v4 = xmmword_140F0BEA0;
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0BE90);
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
