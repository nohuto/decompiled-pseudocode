/*
 * XREFs of SshSessionManagerTracePreSleepNotification @ 0x140AC9248
 * Callers:
 *     PopDiagTracePreSleepNotification @ 0x140AC4D5C (PopDiagTracePreSleepNotification.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerTracePreSleepNotificationV1 @ 0x1407675F0 (SshpSessionManagerTracePreSleepNotificationV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTracePreSleepNotification(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        char a8,
        char a9)
{
  __int64 v9; // rbx
  int v11; // ecx
  int v12; // edx
  const wchar_t *v13; // r8
  __int64 v14; // rax
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+70h] [rbp-90h] BYREF
  int v20; // [rsp+74h] [rbp-8Ch] BYREF
  int v21; // [rsp+78h] [rbp-88h] BYREF
  int v22; // [rsp+7Ch] [rbp-84h] BYREF
  _QWORD v23[21]; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+128h] [rbp+28h]
  int v25; // [rsp+12Ch] [rbp+2Ch]
  char *v26; // [rsp+130h] [rbp+30h]
  __int64 v27; // [rsp+138h] [rbp+38h]

  v9 = a7;
  v15 = a1;
  v16 = a2;
  v17 = a3;
  v18 = a4;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
    return SshpSessionManagerTracePreSleepNotificationV1(v15, v16, v17, v18, a5, a6, v9, a8, a9);
  v23[1] = 4LL;
  v23[0] = &v15;
  v23[2] = &v16;
  v23[4] = &v17;
  v23[6] = &v18;
  v23[8] = &a5;
  v23[10] = &a6;
  v23[3] = 4LL;
  v23[5] = 4LL;
  v23[7] = 4LL;
  v23[9] = 4LL;
  v23[11] = 1LL;
  if ( v9 )
  {
    v19 = *(_DWORD *)(v9 + 8);
    if ( v19 )
    {
      v11 = *(_DWORD *)(v9 + 28);
      v12 = *(_DWORD *)(v9 + 24);
    }
    else
    {
      v11 = -1;
      v12 = -1;
    }
    v13 = (const wchar_t *)(v9 + *(_QWORD *)(v9 + 16));
  }
  else
  {
    v11 = -1;
    v13 = &cchOriginalDestLength;
    v19 = -1;
    v12 = -1;
  }
  v20 = v12;
  v23[12] = &v19;
  v23[14] = &v20;
  v23[16] = &v21;
  v14 = -1LL;
  v21 = v11;
  v23[13] = 4LL;
  v23[15] = 4LL;
  v23[17] = 4LL;
  do
    ++v14;
  while ( v13[v14] );
  v22 = v14;
  v23[18] = &v22;
  v24 = 2 * v14;
  v23[20] = v13;
  v26 = &a8;
  v23[19] = 4LL;
  v25 = 0;
  v27 = 1LL;
  return SshpSessionManagerSendControlEvent(
           (__int64)SLEEPSTUDY_EVT_PRE_SLEEP_NOTIFICATION_CONTROL_EVENT_V4,
           0xCu,
           (__int64)v23);
}
