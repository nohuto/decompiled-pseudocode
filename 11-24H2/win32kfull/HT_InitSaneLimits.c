/*
 * XREFs of HT_InitSaneLimits @ 0x140203B88
 * Callers:
 *     EnableHalftone @ 0x140203A70 (EnableHalftone.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HT_InitSaneLimits(int a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  NTSTATUS result; // eax
  int v5; // [rsp+30h] [rbp-79h] BYREF
  NTSTATUS v6; // [rsp+34h] [rbp-75h] BYREF
  int v7; // [rsp+38h] [rbp-71h] BYREF
  int v8; // [rsp+3Ch] [rbp-6Dh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-69h] BYREF
  __int64 v10; // [rsp+78h] [rbp-31h]
  int v11; // [rsp+80h] [rbp-29h]
  const wchar_t *v12; // [rsp+88h] [rbp-21h]
  NTSTATUS *v13; // [rsp+90h] [rbp-19h]
  int v14; // [rsp+98h] [rbp-11h]
  int *v15; // [rsp+A0h] [rbp-9h]
  int v16; // [rsp+A8h] [rbp-1h]
  __int64 v17; // [rsp+B0h] [rbp+7h]
  int v18; // [rsp+B8h] [rbp+Fh]
  __int64 v19; // [rsp+C0h] [rbp+17h]
  __int128 v20; // [rsp+C8h] [rbp+1Fh]
  __int128 v21; // [rsp+D8h] [rbp+2Fh]

  v2 = 0;
  v8 = 20000000;
  v7 = 0;
  v5 = 0;
  v6 = 0;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 112);
  QueryTable.Name = L"DisableSaneLimits";
  QueryTable.EntryContext = &v5;
  QueryTable.DefaultData = &v7;
  v12 = L"HTSurfaceSizeLimit";
  v13 = &v6;
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultLength = 4;
  v11 = 288;
  v14 = 67108868;
  v16 = 4;
  v15 = &v8;
  QueryTable.QueryRoutine = 0LL;
  v10 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  result = RtlQueryRegistryValues(3u, L"GRE_Initialize", &QueryTable, 0LL, 0LL);
  if ( !result )
  {
    LOBYTE(v2) = v5 == 0;
    *(_DWORD *)(v3 + 72) = v2;
    result = v6;
    *(_DWORD *)(v3 + 76) = v6;
  }
  return result;
}
