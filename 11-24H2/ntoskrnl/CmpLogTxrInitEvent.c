/*
 * XREFs of CmpLogTxrInitEvent @ 0x140AAD264
 * Callers:
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CmpLogTxrInitEvent(__int64 a1, __int64 a2, int a3)
{
  const wchar_t *v3; // r8
  NTSTATUS result; // eax
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rcx
  __int16 v8; // [rsp+30h] [rbp-39h] BYREF
  NTSTATUS v9; // [rsp+34h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  const wchar_t *v11; // [rsp+60h] [rbp-9h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  int *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  NTSTATUS *v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+E0h] [rbp+77h] BYREF

  v22 = a3;
  v3 = L"\\SystemRoot\\System32\\Config\\SYSTEM";
  result = *(_DWORD *)(a2 + 4160);
  v9 = result;
  LOWORD(v5) = 68;
  if ( EtwKernelProvRegHandle )
  {
    if ( qword_140E09AE0 != a2 )
    {
      v3 = *(const wchar_t **)(a2 + 1848);
      v5 = *(_DWORD *)(a2 + 1840);
    }
    v11 = v3;
    v8 = (unsigned __int16)v5 >> 1;
    UserData.Ptr = (ULONGLONG)&v8;
    v6 = (unsigned __int16)v5;
    v7 = *(_QWORD *)(a2 + 64);
    v12 = v6;
    v13 = 0;
    *(_QWORD *)&UserData.Size = 2LL;
    v15 = 16LL;
    v14 = v7 + 148;
    v16 = v7 + 112;
    v17 = 16LL;
    v18 = &v22;
    v20 = &v9;
    v19 = 4LL;
    v21 = 4LL;
    return EtwWrite(EtwKernelProvRegHandle, &REG_EVENT_TXR_INIT, 0LL, 6u, &UserData);
  }
  return result;
}
