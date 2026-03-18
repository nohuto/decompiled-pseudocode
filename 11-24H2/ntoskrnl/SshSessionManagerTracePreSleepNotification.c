/*
 * XREFs of SshSessionManagerTracePreSleepNotification @ 0x140ACB60C
 * Callers:
 *     PopDiagTracePreSleepNotification @ 0x140AC7308 (PopDiagTracePreSleepNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A70190 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTracePreSleepNotification(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        char a8)
{
  int v8; // ecx
  int v9; // r8d
  const wchar_t *v10; // r9
  __int64 v11; // rax
  int v13; // [rsp+28h] [rbp-A9h] BYREF
  int v14; // [rsp+2Ch] [rbp-A5h] BYREF
  int v15; // [rsp+30h] [rbp-A1h] BYREF
  int v16; // [rsp+34h] [rbp-9Dh] BYREF
  _QWORD v17[21]; // [rsp+38h] [rbp-99h] BYREF
  int v18; // [rsp+E0h] [rbp+Fh]
  int v19; // [rsp+E4h] [rbp+13h]
  char *v20; // [rsp+E8h] [rbp+17h]
  __int64 v21; // [rsp+F0h] [rbp+1Fh]
  int v22; // [rsp+118h] [rbp+47h] BYREF
  int v23; // [rsp+120h] [rbp+4Fh] BYREF
  int v24; // [rsp+128h] [rbp+57h] BYREF
  int v25; // [rsp+130h] [rbp+5Fh] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  v22 = a1;
  v17[0] = &v22;
  v17[1] = 4LL;
  v17[2] = &v23;
  v17[4] = &v24;
  v17[6] = &v25;
  v17[8] = &a5;
  v17[10] = &a6;
  v17[3] = 4LL;
  v17[5] = 4LL;
  v17[7] = 4LL;
  v17[9] = 4LL;
  v17[11] = 1LL;
  if ( a7 )
  {
    v13 = *(_DWORD *)(a7 + 8);
    if ( v13 )
    {
      v8 = *(_DWORD *)(a7 + 28);
      v9 = *(_DWORD *)(a7 + 24);
    }
    else
    {
      v8 = -1;
      v9 = -1;
    }
    v10 = (const wchar_t *)(a7 + *(_QWORD *)(a7 + 16));
  }
  else
  {
    v8 = -1;
    v10 = &cchOriginalDestLength;
    v13 = -1;
    v9 = -1;
  }
  v14 = v9;
  v17[12] = &v13;
  v17[14] = &v14;
  v17[16] = &v15;
  v11 = -1LL;
  v15 = v8;
  v17[13] = 4LL;
  v17[15] = 4LL;
  v17[17] = 4LL;
  do
    ++v11;
  while ( v10[v11] );
  v16 = v11;
  v17[18] = &v16;
  v18 = 2 * v11;
  v17[19] = 4LL;
  v20 = &a8;
  v17[20] = v10;
  v19 = 0;
  v21 = 1LL;
  return SshpSessionManagerSendControlEvent(
           (__int64)SLEEPSTUDY_EVT_PRE_SLEEP_NOTIFICATION_CONTROL_EVENT,
           0xCu,
           (__int64)v17);
}
