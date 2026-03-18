/*
 * XREFs of SshSessionManagerTraceSystemStop @ 0x1407577A8
 * Callers:
 *     PopDiagTraceGracefulShutdown @ 0x140B4FAD4 (PopDiagTraceGracefulShutdown.c)
 * Callees:
 *     Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline @ 0x1405CF8A4 (Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A6DF80 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceSystemStop(int a1, int a2, char a3)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v4; // rcx
  int *v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+28h] [rbp-38h]
  int v8; // [rsp+2Ch] [rbp-34h]
  int *v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+38h] [rbp-28h]
  int v11; // [rsp+3Ch] [rbp-24h]
  char *v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+4Ch] [rbp-14h]
  int v15; // [rsp+70h] [rbp+10h] BYREF
  int v16; // [rsp+78h] [rbp+18h] BYREF
  char v17; // [rsp+80h] [rbp+20h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v8 = 0;
  v11 = 0;
  v14 = 0;
  v6 = &v15;
  v9 = &v16;
  v12 = &v17;
  v7 = 4;
  v10 = 4;
  v13 = 1;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline();
  v4 = SLEEPSTUDY_EVT_SYSTEM_STOPPED_CONTROL_EVENT_V2;
  if ( !IsEnabledDeviceUsageNoInline )
    v4 = SLEEPSTUDY_EVT_SYSTEM_STOPPED_CONTROL_EVENT;
  return SshpSessionManagerSendControlEvent(v4, 3LL, &v6);
}
