/*
 * XREFs of SshSessionManagerTracePostSleepNotification @ 0x140A694B4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage @ 0x1404F82F0 (Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x140766E18 (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A69660 (SshpSessionManagerSendControlEventSlimEtl.c)
 */

__int64 __fastcall SshSessionManagerTracePostSleepNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8,
        char a9)
{
  unsigned __int16 *v9; // r11
  unsigned __int16 *v10; // rbx
  __int64 v11; // r10
  int v13; // [rsp+20h] [rbp-C1h] BYREF
  int v14; // [rsp+24h] [rbp-BDh] BYREF
  __int64 v15; // [rsp+28h] [rbp-B9h] BYREF
  __int64 v16; // [rsp+30h] [rbp-B1h] BYREF
  _QWORD v17[15]; // [rsp+40h] [rbp-A1h] BYREF
  int v18; // [rsp+B8h] [rbp-29h]
  int v19; // [rsp+BCh] [rbp-25h]
  int *v20; // [rsp+C0h] [rbp-21h]
  __int64 v21; // [rsp+C8h] [rbp-19h]
  __int64 v22; // [rsp+D0h] [rbp-11h]
  int v23; // [rsp+D8h] [rbp-9h]
  int v24; // [rsp+DCh] [rbp-5h]
  char *v25; // [rsp+E0h] [rbp-1h]
  __int64 v26; // [rsp+E8h] [rbp+7h]
  int v27; // [rsp+130h] [rbp+4Fh] BYREF
  int v28; // [rsp+138h] [rbp+57h] BYREF

  v28 = a4;
  v27 = a3;
  v9 = a8;
  v10 = a7;
  v11 = a2;
  v15 = 0LL;
  v16 = 0LL;
  v13 = *a8 >> 1;
  v14 = *a7 >> 1;
  if ( a1 )
    SshpSessionManagerInterruptTimeToSystemTime();
  if ( v11 )
    SshpSessionManagerInterruptTimeToSystemTime();
  v17[1] = 8LL;
  v17[0] = &v15;
  v17[2] = &v16;
  v17[4] = &v27;
  v17[6] = &v28;
  v17[8] = &a5;
  v17[10] = &a6;
  v17[12] = &v13;
  v17[14] = *((_QWORD *)v9 + 1);
  v17[3] = 8LL;
  v18 = 2 * v13;
  v20 = &v14;
  v22 = *((_QWORD *)v10 + 1);
  v17[5] = 4LL;
  v23 = 2 * v14;
  v25 = &a9;
  v17[7] = 4LL;
  v17[9] = 4LL;
  v17[11] = 4LL;
  v17[13] = 4LL;
  v19 = 0;
  v21 = 4LL;
  v24 = 0;
  v26 = 4LL;
  Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage();
  return SshpSessionManagerSendControlEventSlimEtl(SLEEPSTUDY_EVT_POST_SLEEP_NOTIFICATION_CONTROL_EVENT, 11LL, v17);
}
