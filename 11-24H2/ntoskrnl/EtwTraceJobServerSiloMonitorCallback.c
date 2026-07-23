/*
 * XREFs of EtwTraceJobServerSiloMonitorCallback @ 0x14064C040
 * Callers:
 *     PspInvokeCreateCallback @ 0x140779744 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x1407797A8 (PspInvokeTerminateCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpCopyJobIdSafe @ 0x140A60158 (EtwpCopyJobIdSafe.c)
 *     EtwpCopyJobGuidSafe @ 0x140A65A8C (EtwpCopyJobGuidSafe.c)
 */

BOOLEAN __fastcall EtwTraceJobServerSiloMonitorCallback(int a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  __int64 *v7; // rbx
  BOOLEAN result; // al
  unsigned int v9; // edx
  ULONGLONG v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rax
  REGHANDLE v14; // rcx
  int v15; // [rsp+48h] [rbp-39h] BYREF
  __int128 v16; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  int *v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+3h]
  int *v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  int v24; // [rsp+100h] [rbp+7Fh] BYREF

  v24 = a4;
  v15 = 0;
  v16 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v7 = ServerSiloCreateCallbackStop;
    }
    else if ( a1 == 2 )
    {
      v7 = ServerSiloTerminateCallbackStart;
    }
    else
    {
      v7 = (__int64 *)&ServerSiloTerminateCallbackStop;
    }
  }
  else
  {
    v7 = ServerSiloCreateCallbackStart;
  }
  result = EtwEventEnabled(EtwpPsProvRegHandle, (PCEVENT_DESCRIPTOR)v7);
  if ( result )
  {
    EtwpCopyJobGuidSafe(&v16, a2);
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v16;
    UserData.Size = 16;
    EtwpCopyJobIdSafe(&v15);
    v20 = 0;
    v18 = &v15;
    v19 = 4;
    v9 = 2;
    if ( a1 == 1 )
    {
      v23 = 0;
      v21 = &v24;
      v9 = 3;
      v22 = 4;
    }
    v10 = *((_QWORD *)a3 + 1);
    v11 = v9;
    v12 = v9 + 1;
    v11 *= 2LL;
    *(&UserData.Reserved + 2 * v11) = 0;
    *(&UserData.Ptr + v11) = v10;
    *(&UserData.Size + 2 * v11) = *a3;
    v13 = 2LL * v12;
    *(&UserData.Reserved + 2 * v13) = 0;
    *(&UserData.Ptr + v13) = (ULONGLONG)&EtwpNull;
    v14 = EtwpPsProvRegHandle;
    *(&UserData.Size + 2 * v13) = 2;
    return EtwWriteEx(v14, (PCEVENT_DESCRIPTOR)v7, 0LL, 0, 0LL, 0LL, v12 + 1, &UserData);
  }
  return result;
}
