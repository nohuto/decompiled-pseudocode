/*
 * XREFs of PopDiagTraceSetThreadExecutionState @ 0x140AC4EB8
 * Callers:
 *     NtSetThreadExecutionState @ 0x140AC4920 (NtSetThreadExecutionState.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline @ 0x1405CA558 (Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSetThreadExecutionState(__int64 a1, int a2, int a3, int a4)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v7; // rbx
  unsigned __int16 *v8; // rcx
  int v9; // edx
  char *v10; // rbx
  int v11; // eax
  REGHANDLE v12; // rcx
  const EVENT_DESCRIPTOR *v13; // rdx
  char *v14; // rbx
  __int64 v15; // r9
  __int16 v17; // [rsp+38h] [rbp-49h] BYREF
  int v18; // [rsp+3Ch] [rbp-45h] BYREF
  int v19; // [rsp+40h] [rbp-41h] BYREF
  int v20; // [rsp+44h] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  __int16 *v22; // [rsp+58h] [rbp-29h]
  __int64 v23; // [rsp+60h] [rbp-21h]
  __int64 v24; // [rsp+68h] [rbp-19h] BYREF
  int v25; // [rsp+70h] [rbp-11h]
  int v26; // [rsp+74h] [rbp-Dh]
  char v27; // [rsp+78h] [rbp-9h] BYREF
  int v28; // [rsp+F0h] [rbp+6Fh] BYREF
  int v29; // [rsp+F8h] [rbp+77h] BYREF

  v29 = a3;
  v28 = a2;
  v18 = 0;
  IsEnabledDeviceUsageNoInline = Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( !PopDiagHandleRegistered )
      return IsEnabledDeviceUsageNoInline;
    LOBYTE(IsEnabledDeviceUsageNoInline) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STES);
    if ( !(_BYTE)IsEnabledDeviceUsageNoInline )
      return IsEnabledDeviceUsageNoInline;
    v18 = a4;
  }
  else
  {
    if ( !PopDiagHandleRegistered )
      return IsEnabledDeviceUsageNoInline;
    LOBYTE(IsEnabledDeviceUsageNoInline) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STES_V1);
    if ( !(_BYTE)IsEnabledDeviceUsageNoInline )
      return IsEnabledDeviceUsageNoInline;
  }
  v7 = &v24;
  v19 = *(_DWORD *)(a1 + 1288);
  v20 = *(_DWORD *)(a1 + 1296);
  v8 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 544) + 848LL);
  v17 = *v8 >> 1;
  UserData.Ptr = (ULONGLONG)&v28;
  v22 = &v17;
  *(_QWORD *)&UserData.Size = 4LL;
  v23 = 2LL;
  v9 = *v8;
  if ( (_WORD)v9 )
  {
    v7 = (__int64 *)&v27;
    v24 = *((_QWORD *)v8 + 1);
    v25 = v9;
    v26 = 0;
  }
  v7[1] = 4LL;
  *v7 = (__int64)&v19;
  v7[2] = (__int64)&v20;
  v7[3] = 4LL;
  v10 = (char *)(v7 + 4);
  v11 = Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline();
  v12 = PopDiagHandle;
  if ( v11 )
  {
    *((_QWORD *)v10 + 1) = 4LL;
    *(_QWORD *)v10 = &v29;
    v13 = &POP_ETW_EVENT_STES;
    v14 = v10 + 16;
    *((_QWORD *)v14 + 1) = 4LL;
    *(_QWORD *)v14 = &v18;
    v15 = (v14 - (char *)&UserData + 16) >> 4;
  }
  else
  {
    v13 = &POP_ETW_EVENT_STES_V1;
    LODWORD(v15) = (v10 - (char *)&UserData) >> 4;
  }
  LOBYTE(IsEnabledDeviceUsageNoInline) = EtwWrite(v12, v13, 0LL, v15, &UserData);
  return IsEnabledDeviceUsageNoInline;
}
