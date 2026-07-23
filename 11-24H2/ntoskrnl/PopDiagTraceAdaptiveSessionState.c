/*
 * XREFs of PopDiagTraceAdaptiveSessionState @ 0x1409A1B58
 * Callers:
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409A1AAC (PopAdaptiveGetSessionStateUnsafe.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceAdaptiveSessionState(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        unsigned __int8 a7,
        char a8,
        char a9,
        char a10)
{
  _UNKNOWN **v10; // rax
  int v13; // [rsp+38h] [rbp-99h] BYREF
  int v14; // [rsp+3Ch] [rbp-95h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-89h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-79h]
  int v17; // [rsp+60h] [rbp-71h]
  int v18; // [rsp+64h] [rbp-6Dh]
  __int64 *v19; // [rsp+68h] [rbp-69h]
  int v20; // [rsp+70h] [rbp-61h]
  int v21; // [rsp+74h] [rbp-5Dh]
  int *v22; // [rsp+78h] [rbp-59h]
  int v23; // [rsp+80h] [rbp-51h]
  int v24; // [rsp+84h] [rbp-4Dh]
  char *v25; // [rsp+88h] [rbp-49h]
  int v26; // [rsp+90h] [rbp-41h]
  int v27; // [rsp+94h] [rbp-3Dh]
  char *v28; // [rsp+98h] [rbp-39h]
  int v29; // [rsp+A0h] [rbp-31h]
  int v30; // [rsp+A4h] [rbp-2Dh]
  int *v31; // [rsp+A8h] [rbp-29h]
  int v32; // [rsp+B0h] [rbp-21h]
  int v33; // [rsp+B4h] [rbp-1Dh]
  char *v34; // [rsp+B8h] [rbp-19h]
  int v35; // [rsp+C0h] [rbp-11h]
  int v36; // [rsp+C4h] [rbp-Dh]
  char *v37; // [rsp+C8h] [rbp-9h]
  int v38; // [rsp+D0h] [rbp-1h]
  int v39; // [rsp+D4h] [rbp+3h]
  char *v40; // [rsp+D8h] [rbp+7h]
  int v41; // [rsp+E0h] [rbp+Fh]
  int v42; // [rsp+E4h] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+2Fh] BYREF
  int v44; // [rsp+108h] [rbp+37h] BYREF
  __int64 v45; // [rsp+110h] [rbp+3Fh] BYREF
  __int64 v46; // [rsp+118h] [rbp+47h] BYREF

  v10 = &retaddr;
  v46 = a3;
  v45 = a2;
  v44 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v10) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ADAPTIVE_SESSION_STATE);
    if ( (_BYTE)v10 )
    {
      UserData.Reserved = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v14 = a7;
      UserData.Ptr = (ULONGLONG)&v44;
      v16 = &v45;
      v19 = &v46;
      v22 = &v13;
      v25 = &a5;
      v28 = &a6;
      v31 = &v14;
      v34 = &a8;
      v37 = &a9;
      v40 = &a10;
      UserData.Size = 4;
      v17 = 8;
      v20 = 8;
      v23 = 4;
      v26 = 4;
      v29 = 4;
      v32 = 4;
      v35 = 4;
      v38 = 4;
      v41 = 4;
      v13 = a4;
      LOBYTE(v10) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ADAPTIVE_SESSION_STATE, 0LL, 0xAu, &UserData);
    }
  }
  return (char)v10;
}
