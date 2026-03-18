/*
 * XREFs of SshSessionManagerTracePreSleepNotification @ 0x140AC4860
 * Callers:
 *     PopDiagTracePreSleepNotification @ 0x140AC1AA0 (PopDiagTracePreSleepNotification.c)
 * Callees:
 *     Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline @ 0x1405CF8A4 (Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A6DF80 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTracePreSleepNotification(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        __int64 a7)
{
  int v7; // ecx
  int v8; // r8d
  const wchar_t *v9; // r9
  __int64 v10; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v12; // rcx
  int v14; // [rsp+28h] [rbp-A1h] BYREF
  int v15; // [rsp+2Ch] [rbp-9Dh] BYREF
  int v16; // [rsp+30h] [rbp-99h] BYREF
  int v17; // [rsp+34h] [rbp-95h] BYREF
  _QWORD v18[21]; // [rsp+38h] [rbp-91h] BYREF
  int v19; // [rsp+E0h] [rbp+17h]
  int v20; // [rsp+E4h] [rbp+1Bh]
  int v21; // [rsp+118h] [rbp+4Fh] BYREF
  int v22; // [rsp+120h] [rbp+57h] BYREF
  int v23; // [rsp+128h] [rbp+5Fh] BYREF
  int v24; // [rsp+130h] [rbp+67h] BYREF

  v24 = a4;
  v23 = a3;
  v22 = a2;
  v21 = a1;
  v18[0] = &v21;
  v18[1] = 4LL;
  v18[2] = &v22;
  v18[4] = &v23;
  v18[6] = &v24;
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
      v7 = *(_DWORD *)(a7 + 28);
      v8 = *(_DWORD *)(a7 + 24);
    }
    else
    {
      v7 = -1;
      v8 = -1;
    }
    v9 = (const wchar_t *)(a7 + *(_QWORD *)(a7 + 16));
  }
  else
  {
    v7 = -1;
    v9 = &cchOriginalDestLength;
    v14 = -1;
    v8 = -1;
  }
  v15 = v8;
  v18[12] = &v14;
  v18[14] = &v15;
  v18[16] = &v16;
  v10 = -1LL;
  v16 = v7;
  v18[13] = 4LL;
  v18[15] = 4LL;
  v18[17] = 4LL;
  do
    ++v10;
  while ( v9[v10] );
  v17 = v10;
  v18[18] = &v17;
  v19 = 2 * v10;
  v18[19] = 4LL;
  v18[20] = v9;
  v20 = 0;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline();
  v12 = SLEEPSTUDY_EVT_PRE_SLEEP_NOTIFICATION_CONTROL_EVENT_V3;
  if ( !IsEnabledDeviceUsageNoInline )
    v12 = SLEEPSTUDY_EVT_PRE_SLEEP_NOTIFICATION_CONTROL_EVENT;
  return SshpSessionManagerSendControlEvent((__int64)v12, 0xBu, (__int64)v18);
}
