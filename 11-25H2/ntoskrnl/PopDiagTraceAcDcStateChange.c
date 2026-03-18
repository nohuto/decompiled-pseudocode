/*
 * XREFs of PopDiagTraceAcDcStateChange @ 0x140AC199C
 * Callers:
 *     PopUpdateAcDcState @ 0x1404ADDF4 (PopUpdateAcDcState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline @ 0x1405CF8A4 (Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SshSessionManagerTraceAcDcStateChangeV1 @ 0x140756AFC (SshSessionManagerTraceAcDcStateChangeV1.c)
 *     SshSessionManagerTraceAcDcStateChange @ 0x140AC47AC (SshSessionManagerTraceAcDcStateChange.c)
 */

__int64 __fastcall PopDiagTraceAcDcStateChange(int a1, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v5; // r9
  unsigned int v7; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-48h] BYREF
  BOOL v9; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  unsigned int *v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  unsigned int *v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]

  v8 = a2;
  v7 = a3;
  v9 = a1 == 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_CHANGE) )
  {
    UserData.Reserved = 0;
    v13 = 0;
    v16 = 0;
    UserData.Ptr = (ULONGLONG)&v9;
    UserData.Size = 4;
    v11 = &v8;
    v14 = &v7;
    v12 = 4;
    v15 = 4;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_CHANGE, 0LL, 3u, &UserData);
  }
  v3 = PopLidOpened != 0;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline();
  LOBYTE(v5) = v3;
  if ( IsEnabledDeviceUsageNoInline )
    return SshSessionManagerTraceAcDcStateChangeV1(v9, v8, v7, v3, PopConsoleExternalDisplayConnected != 0);
  else
    return SshSessionManagerTraceAcDcStateChange(v9, v8, v7, v5);
}
