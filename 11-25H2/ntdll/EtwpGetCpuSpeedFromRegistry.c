/*
 * XREFs of EtwpGetCpuSpeedFromRegistry @ 0x180083784
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeed @ 0x1800F9430 (EtwpGetCpuSpeed.c)
 * Callees:
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpGetCpuSpeedFromRegistry(_DWORD *a1)
{
  size_t v2; // rax
  __int64 result; // rax
  size_t v4; // rax
  int v5; // ebx
  int v6; // [rsp+38h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-21h] BYREF
  _WORD v8[2]; // [rsp+48h] [rbp-19h] BYREF
  int v9; // [rsp+4Ch] [rbp-15h]
  const wchar_t *v10; // [rsp+50h] [rbp-11h]
  _WORD v11[2]; // [rsp+58h] [rbp-9h] BYREF
  int v12; // [rsp+5Ch] [rbp-5h]
  const wchar_t *v13; // [rsp+60h] [rbp-1h]
  _DWORD v14[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v15; // [rsp+70h] [rbp+Fh]
  _WORD *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  __int128 v19; // [rsp+88h] [rbp+27h]
  __int128 v20; // [rsp+98h] [rbp+37h] BYREF

  v6 = 0;
  Handle = 0LL;
  v9 = 0;
  v18 = 0;
  v12 = 0;
  v14[1] = 0;
  v13 = L"\\Registry\\Machine\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0";
  v20 = 0LL;
  v2 = 2 * wcslen(L"\\Registry\\Machine\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0");
  v14[0] = 48;
  v17 = 64;
  if ( v2 >= 0xFFFE )
    LOWORD(v2) = -4;
  v15 = 0LL;
  v11[0] = v2;
  v11[1] = v2 + 2;
  v16 = v11;
  v19 = 0LL;
  result = NtOpenKey(&Handle, 131097LL, v14);
  if ( (int)result >= 0 )
  {
    v9 = 0;
    v10 = L"~MHz";
    v4 = 2 * wcslen(L"~MHz");
    if ( v4 >= 0xFFFE )
      LOWORD(v4) = -4;
    v8[0] = v4;
    v8[1] = v4 + 2;
    v5 = NtQueryValueKey(Handle, v8, 2LL, &v20, 16, &v6);
    if ( v5 >= 0 )
      *a1 = HIDWORD(v20);
    NtClose(Handle);
    return (unsigned int)v5;
  }
  return result;
}
