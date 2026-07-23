/*
 * XREFs of EtwpPsProvTracePriority @ 0x140330FD0
 * Callers:
 *     EtwTracePriority @ 0x140330F04 (EtwTracePriority.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpPsProvTracePriority(__int64 a1, int a2, int a3, int a4)
{
  int v4; // edx
  __int64 *v5; // rdx
  NTSTATUS result; // eax
  int v7; // edx
  int v8; // edx
  int v9; // [rsp+40h] [rbp-9h] BYREF
  int v10; // [rsp+44h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  int *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  int *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  int *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+C0h] [rbp+77h] BYREF
  int v19; // [rsp+C8h] [rbp+7Fh] BYREF

  v19 = a4;
  v18 = a3;
  v4 = a2 - 1328;
  if ( !v4 )
  {
    v5 = (__int64 *)&ThreadCpuPriorityChange;
LABEL_3:
    v9 = *(_DWORD *)(a1 + 1288);
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v9;
    v10 = *(_DWORD *)(a1 + 1296);
    v12 = &v10;
    v14 = &v18;
    v16 = &v19;
    v13 = 4LL;
    v15 = 1LL;
    v17 = 1LL;
    return EtwWriteEx(EtwpPsProvRegHandle, (PCEVENT_DESCRIPTOR)v5, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    v5 = ThreadCpuBasePriorityChange;
    goto LABEL_3;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v5 = ThreadPagePriorityChange;
    goto LABEL_3;
  }
  if ( v8 == 1 )
  {
    v5 = ThreadIoPriorityChange;
    goto LABEL_3;
  }
  return result;
}
