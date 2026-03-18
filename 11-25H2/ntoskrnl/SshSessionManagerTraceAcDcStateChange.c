/*
 * XREFs of SshSessionManagerTraceAcDcStateChange @ 0x140AC47AC
 * Callers:
 *     PopDiagTraceAcDcStateChange @ 0x140AC199C (PopDiagTraceAcDcStateChange.c)
 * Callees:
 *     Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline @ 0x1405CF8A4 (Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A6DF80 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceAcDcStateChange(int a1, int a2, int a3, char a4)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v5; // rcx
  int *v7; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+28h] [rbp-48h]
  int v9; // [rsp+2Ch] [rbp-44h]
  int *v10; // [rsp+30h] [rbp-40h]
  int v11; // [rsp+38h] [rbp-38h]
  int v12; // [rsp+3Ch] [rbp-34h]
  int *v13; // [rsp+40h] [rbp-30h]
  int v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+4Ch] [rbp-24h]
  char *v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+5Ch] [rbp-14h]
  int v19; // [rsp+80h] [rbp+10h] BYREF
  int v20; // [rsp+88h] [rbp+18h] BYREF
  int v21; // [rsp+90h] [rbp+20h] BYREF
  char v22; // [rsp+98h] [rbp+28h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v9 = 0;
  v12 = 0;
  v15 = 0;
  v18 = 0;
  v7 = &v19;
  v10 = &v20;
  v13 = &v21;
  v16 = &v22;
  v8 = 4;
  v11 = 4;
  v14 = 4;
  v17 = 1;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline();
  v5 = SLEEPSTUDY_EVT_ACDC_STATE_CHANGE_CONTROL_EVENT_V1;
  if ( !IsEnabledDeviceUsageNoInline )
    v5 = SLEEPSTUDY_EVT_ACDC_STATE_CHANGE_CONTROL_EVENT;
  return SshpSessionManagerSendControlEvent((__int64)v5, 4u, (__int64)&v7);
}
