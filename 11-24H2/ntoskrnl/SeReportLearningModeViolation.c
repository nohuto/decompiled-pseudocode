/*
 * XREFs of SeReportLearningModeViolation @ 0x1406060D0
 * Callers:
 *     PsConvertToGuiThread @ 0x140AC9700 (PsConvertToGuiThread.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall SeReportLearningModeViolation(__int64 a1, int a2, int a3, char a4)
{
  const CHAR *v4; // rdx
  __int64 v5; // rax
  ULONG v6; // eax
  char v7; // [rsp+40h] [rbp-39h] BYREF
  __int64 v8; // [rsp+48h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-9h]
  __int64 v12; // [rsp+78h] [rbp-1h]
  __int64 *v13; // [rsp+80h] [rbp+7h]
  __int64 v14; // [rsp+88h] [rbp+Fh]
  int *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  int *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  char *v19; // [rsp+B0h] [rbp+37h]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]
  int v21; // [rsp+E8h] [rbp+6Fh] BYREF
  int v22; // [rsp+F0h] [rbp+77h] BYREF

  v22 = a3;
  v21 = a2;
  if ( EtwKernelProvRegHandle )
  {
    v4 = (const CHAR *)(a1 + 824);
    if ( a1 == -824 )
    {
      v6 = 1;
      v4 = &File;
    }
    else
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v6 = v5 + 1;
    }
    UserData.Size = v6;
    v8 = *(_QWORD *)(a1 + 464);
    v11 = &v8;
    v9 = *(_QWORD *)(a1 + 1656);
    v13 = &v9;
    v15 = &v21;
    v17 = &v22;
    v19 = &v7;
    UserData.Ptr = (ULONGLONG)v4;
    v7 = a4;
    UserData.Reserved = 0;
    v12 = 8LL;
    v14 = 8LL;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 1LL;
    EtwWriteEx(EtwKernelProvRegHandle, &LearningModeViolationLog, 0LL, 0, 0LL, 0LL, 6u, &UserData);
  }
}
