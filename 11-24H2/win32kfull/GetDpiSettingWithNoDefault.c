/*
 * XREFs of GetDpiSettingWithNoDefault @ 0x1402F2870
 * Callers:
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1402823E4 (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     GetDpiSetting @ 0x1402F2850 (GetDpiSetting.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GetDpiSettingWithNoDefault(int a1, unsigned int *a2)
{
  __int64 result; // rax
  __int16 v4; // bx
  unsigned __int16 v5; // di
  unsigned int v6; // [rsp+38h] [rbp-79h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+48h] [rbp-69h] BYREF
  __int64 v8; // [rsp+80h] [rbp-31h]
  int v9; // [rsp+88h] [rbp-29h]
  __int64 v10; // [rsp+90h] [rbp-21h]
  __int128 v11; // [rsp+98h] [rbp-19h]
  __int128 v12; // [rsp+A8h] [rbp-9h]
  ULONG RelativeTo[2]; // [rsp+B8h] [rbp+7h]
  PCWSTR Path; // [rsp+C0h] [rbp+Fh]
  int v15; // [rsp+C8h] [rbp+17h]
  const WCHAR *v16; // [rsp+D0h] [rbp+1Fh]
  int v17; // [rsp+D8h] [rbp+27h]
  const WCHAR *v18; // [rsp+E0h] [rbp+2Fh]

  QueryTable.Flags = 292;
  v6 = 0;
  QueryTable.Name = L"LogPixels";
  QueryTable.EntryContext = &v6;
  Path = L"Control Panel\\Desktop";
  v16 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  QueryTable.QueryRoutine = 0LL;
  result = (__int64)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontDPI";
  v18 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontDPI";
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  RelativeTo[0] = 5;
  v15 = 0;
  v17 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v5 = 1;
      v4 = 2;
      goto LABEL_7;
    }
    v4 = 3;
  }
  else
  {
    v4 = 1;
  }
  v5 = 0;
LABEL_7:
  while ( v4 )
  {
    if ( RtlQueryRegistryValues(RelativeTo[4 * v5], (&Path)[2 * v5], &QueryTable, 0LL, 0LL) >= 0 )
    {
      result = v6;
      *a2 = v6;
      return result;
    }
    ++v5;
    result = 0xFFFFLL;
    --v4;
  }
  return result;
}
