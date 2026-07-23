/*
 * XREFs of PopDiagTraceHibernateRevoked @ 0x140754BC8
 * Callers:
 *     PopValidateWinresume @ 0x1407511C8 (PopValidateWinresume.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceHibernateRevoked(int a1, int a2, int a3)
{
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  int *v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  int *v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+80h] [rbp+10h] BYREF
  int v10; // [rsp+88h] [rbp+18h] BYREF
  int v11; // [rsp+90h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a2;
  v9 = a1;
  if ( PopDiagHandleRegistered )
  {
    UserData.Ptr = (ULONGLONG)&v9;
    *(_QWORD *)&UserData.Size = 4LL;
    v5 = &v10;
    v6 = 4LL;
    v7 = &v11;
    v8 = 4LL;
    return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_HIBERNATE_REVOKED, 0LL, 3u, &UserData);
  }
  return result;
}
