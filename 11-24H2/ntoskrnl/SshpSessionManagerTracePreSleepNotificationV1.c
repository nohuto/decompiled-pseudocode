/*
 * XREFs of SshpSessionManagerTracePreSleepNotificationV1 @ 0x1407675F0
 * Callers:
 *     SshSessionManagerTracePreSleepNotification @ 0x140AC9248 (SshSessionManagerTracePreSleepNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshpSessionManagerTracePreSleepNotificationV1(
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
  int v9; // ecx
  int v10; // r8d
  const wchar_t *v11; // r9
  __int64 v12; // rax
  int v14; // [rsp+28h] [rbp-E0h] BYREF
  int v15; // [rsp+2Ch] [rbp-DCh] BYREF
  int v16; // [rsp+30h] [rbp-D8h] BYREF
  int v17; // [rsp+34h] [rbp-D4h] BYREF
  _QWORD v18[21]; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+E0h] [rbp-28h]
  int v20; // [rsp+E4h] [rbp-24h]
  char *v21; // [rsp+E8h] [rbp-20h]
  __int64 v22; // [rsp+F0h] [rbp-18h]
  char *v23; // [rsp+F8h] [rbp-10h]
  __int64 v24; // [rsp+100h] [rbp-8h]
  int v25; // [rsp+128h] [rbp+20h] BYREF
  int v26; // [rsp+130h] [rbp+28h] BYREF
  int v27; // [rsp+138h] [rbp+30h] BYREF
  int v28; // [rsp+140h] [rbp+38h] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v25 = a1;
  v18[0] = &v25;
  v18[1] = 4LL;
  v18[2] = &v26;
  v18[4] = &v27;
  v18[6] = &v28;
  v18[8] = &a5;
  v18[10] = &a6;
  v18[3] = 4LL;
  v18[5] = 4LL;
  v18[7] = 4LL;
  v18[9] = 4LL;
  v18[11] = 1LL;
  if ( a7 )
  {
    v14 = *(_DWORD *)(a7 + 8);
    if ( v14 )
    {
      v9 = *(_DWORD *)(a7 + 28);
      v10 = *(_DWORD *)(a7 + 24);
    }
    else
    {
      v9 = -1;
      v10 = -1;
    }
    v11 = (const wchar_t *)(a7 + *(_QWORD *)(a7 + 16));
  }
  else
  {
    v9 = -1;
    v11 = &cchOriginalDestLength;
    v14 = -1;
    v10 = -1;
  }
  v15 = v10;
  v18[12] = &v14;
  v18[14] = &v15;
  v18[16] = &v16;
  v12 = -1LL;
  v16 = v9;
  v18[13] = 4LL;
  v18[15] = 4LL;
  v18[17] = 4LL;
  do
    ++v12;
  while ( v11[v12] );
  v17 = v12;
  v18[18] = &v17;
  v19 = 2 * v12;
  v18[19] = 4LL;
  v21 = &a8;
  v18[20] = v11;
  v23 = &a9;
  v20 = 0;
  v22 = 1LL;
  v24 = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_PRE_SLEEP_NOTIFICATION_CONTROL_EVENT, 13LL, v18);
}
