/*
 * XREFs of EtwpTraceSavePersistedLoggerStop @ 0x1407B0990
 * Callers:
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwpTraceSavePersistedLoggerStop(unsigned __int16 *a1, int a2, int a3, int a4, char a5, int a6)
{
  const EVENT_DESCRIPTOR *v7; // rbx
  BOOLEAN result; // al
  ULONGLONG v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-49h] BYREF
  int *v11; // [rsp+48h] [rbp-39h]
  int v12; // [rsp+50h] [rbp-31h]
  int v13; // [rsp+54h] [rbp-2Dh]
  int *v14; // [rsp+58h] [rbp-29h]
  int v15; // [rsp+60h] [rbp-21h]
  int v16; // [rsp+64h] [rbp-1Dh]
  int *v17; // [rsp+68h] [rbp-19h]
  int v18; // [rsp+70h] [rbp-11h]
  int v19; // [rsp+74h] [rbp-Dh]
  int *v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+84h] [rbp+3h]
  int *v23; // [rsp+88h] [rbp+7h]
  int v24; // [rsp+90h] [rbp+Fh]
  int v25; // [rsp+94h] [rbp+13h]
  char *v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh]
  int v28; // [rsp+A4h] [rbp+23h]
  int v29; // [rsp+E0h] [rbp+5Fh] BYREF
  int v30; // [rsp+E8h] [rbp+67h] BYREF
  int v31; // [rsp+F0h] [rbp+6Fh] BYREF

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v7 = (const EVENT_DESCRIPTOR *)ETW_EVENT_SAVE_PERSISTED_LOGGER_STOP;
  if ( a6 < 0 )
    v7 = &ETW_EVENT_SAVE_PERSISTED_LOGGER_ERROR;
  result = EtwEventEnabled(EtwpEventTracingProvRegHandle, v7);
  if ( result )
  {
    v9 = *((_QWORD *)a1 + 1);
    UserData.Reserved = 0;
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    UserData.Ptr = v9;
    UserData.Size = *a1;
    v11 = &EtwpNull;
    v14 = &v29;
    v17 = &v30;
    v20 = &v31;
    v23 = &a6;
    v26 = &a5;
    v15 = 4;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    v27 = 4;
    v12 = 2;
    return EtwWrite(EtwpEventTracingProvRegHandle, v7, 0LL, 7u, &UserData);
  }
  return result;
}
