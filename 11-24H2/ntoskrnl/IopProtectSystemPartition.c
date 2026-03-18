/*
 * XREFs of IopProtectSystemPartition @ 0x140C1E3BC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     NtOpenKey @ 0x140A4A090 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 *     IopApplySystemPartitionProt @ 0x140C1E168 (IopApplySystemPartitionProt.c)
 */

char __fastcall IopProtectSystemPartition(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING v6; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v7[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v8; // [rsp+68h] [rbp-31h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-29h]
  int v10; // [rsp+78h] [rbp-21h]
  int v11; // [rsp+7Ch] [rbp-1Dh]
  __int128 v12; // [rsp+80h] [rbp-19h]
  _BYTE v13[80]; // [rsp+90h] [rbp-9h] BYREF

  Handle = 0LL;
  v11 = 0;
  LODWORD(v3) = 0;
  v7[1] = 0;
  DestinationString = 0LL;
  v6 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa");
  v8 = 0LL;
  p_DestinationString = &DestinationString;
  v7[0] = 48;
  v10 = 64;
  v12 = 0LL;
  if ( (int)NtOpenKey((__int64)&Handle, 131097LL, (__int64)v7) >= 0 )
  {
    RtlInitUnicodeString(&v6, L"Protect System Partition");
    if ( (int)NtQueryValueKey(Handle, &v6, 2u, (unsigned __int64)v13, 0x14u, &v3) >= 0 && v13[12] )
      IopApplySystemPartitionProt(a1);
    NtClose(Handle);
  }
  return 1;
}
