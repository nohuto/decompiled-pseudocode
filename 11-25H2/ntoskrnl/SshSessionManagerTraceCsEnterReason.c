/*
 * XREFs of SshSessionManagerTraceCsEnterReason @ 0x140AB9E2C
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140AB9C04 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline @ 0x1405CF8A4 (Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SshSessionManagerTraceCsEnterReasonV1 @ 0x140756D08 (SshSessionManagerTraceCsEnterReasonV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A6DF80 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceCsEnterReason(unsigned __int8 *a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v4; // rcx
  int v5; // [rsp+20h] [rbp-69h] BYREF
  int v6; // [rsp+24h] [rbp-65h] BYREF
  int v7; // [rsp+28h] [rbp-61h] BYREF
  int v8; // [rsp+2Ch] [rbp-5Dh] BYREF
  unsigned __int8 *v9; // [rsp+30h] [rbp-59h] BYREF
  int v10; // [rsp+38h] [rbp-51h]
  int v11; // [rsp+3Ch] [rbp-4Dh]
  unsigned __int8 *v12; // [rsp+40h] [rbp-49h]
  int v13; // [rsp+48h] [rbp-41h]
  int v14; // [rsp+4Ch] [rbp-3Dh]
  unsigned __int8 *v15; // [rsp+50h] [rbp-39h]
  int v16; // [rsp+58h] [rbp-31h]
  int v17; // [rsp+5Ch] [rbp-2Dh]
  unsigned __int8 *v18; // [rsp+60h] [rbp-29h]
  int v19; // [rsp+68h] [rbp-21h]
  int v20; // [rsp+6Ch] [rbp-1Dh]
  unsigned __int64 v21; // [rsp+70h] [rbp-19h]
  int v22; // [rsp+78h] [rbp-11h]
  int v23; // [rsp+7Ch] [rbp-Dh]
  unsigned __int8 *v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  int *v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+98h] [rbp+Fh]
  int v29; // [rsp+9Ch] [rbp+13h]
  int *v30; // [rsp+A0h] [rbp+17h]
  int v31; // [rsp+A8h] [rbp+1Fh]
  int v32; // [rsp+ACh] [rbp+23h]
  int *v33; // [rsp+B0h] [rbp+27h]
  int v34; // [rsp+B8h] [rbp+2Fh]
  int v35; // [rsp+BCh] [rbp+33h]
  int *v36; // [rsp+C0h] [rbp+37h]
  int v37; // [rsp+C8h] [rbp+3Fh]
  int v38; // [rsp+CCh] [rbp+43h]

  if ( (unsigned int)Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline() )
    return SshSessionManagerTraceCsEnterReasonV1(a1);
  v11 = 0;
  v14 = 0;
  v17 = 0;
  v20 = 0;
  v23 = 0;
  v26 = 0;
  v29 = 0;
  v32 = 0;
  v35 = 0;
  v38 = 0;
  v9 = a1 + 32;
  v12 = a1 + 40;
  v15 = a1 + 48;
  v18 = a1 + 8;
  v21 = 0xFFFFF780000002C4uLL;
  v24 = a1 + 57;
  v5 = a1[61];
  v27 = &v5;
  v6 = a1[62];
  v30 = &v6;
  v7 = a1[63];
  v33 = &v7;
  v8 = a1[64];
  v36 = &v8;
  v10 = 4;
  v13 = 4;
  v16 = 4;
  v19 = 8;
  v22 = 4;
  v25 = 1;
  v28 = 4;
  v31 = 4;
  v34 = 4;
  v37 = 4;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline();
  v4 = SLEEPSTUDY_EVT_CS_ENTER_REASON_CONTROL_EVENT_V2;
  if ( !IsEnabledDeviceUsageNoInline )
    v4 = SLEEPSTUDY_EVT_CS_ENTER_REASON_CONTROL_EVENT;
  return SshpSessionManagerSendControlEvent((__int64)v4, 0xAu, (__int64)&v9);
}
