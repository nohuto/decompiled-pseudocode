/*
 * XREFs of RtlOsDeploymentState @ 0x180148AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 RtlOsDeploymentState()
{
  unsigned int v0; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-88h] BYREF
  int v3; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v4[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v5; // [rsp+48h] [rbp-70h]
  __int128 v6; // [rsp+50h] [rbp-68h]
  __int128 v7; // [rsp+60h] [rbp-58h]
  UNICODE_STRING v8; // [rsp+70h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-38h] BYREF
  _BYTE v10[4]; // [rsp+90h] [rbp-28h] BYREF
  int v11; // [rsp+94h] [rbp-24h]
  int v12; // [rsp+98h] [rbp-20h]
  int v13; // [rsp+9Ch] [rbp-1Ch]

  Handle = 0LL;
  v0 = 1;
  v3 = 0;
  v4[1] = 0;
  v6 = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&v8, L"\\Registry\\Machine\\System\\Setup");
  v4[0] = 48;
  v5 = 0LL;
  DWORD2(v6) = 576;
  *(_QWORD *)&v6 = &v8;
  v7 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, v4) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Compact");
    if ( (int)NtQueryValueKey(Handle, &DestinationString, 2LL, v10, 20, &v3) >= 0 && v11 == 4 && v12 == 4 && v13 )
      v0 = 2;
  }
  if ( Handle )
    NtClose(Handle);
  return v0;
}
