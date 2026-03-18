/*
 * XREFs of IopProtectSystemPartition @ 0x140C0D254
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     NtOpenKey @ 0x140AD33A0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 *     IopApplySystemPartitionProt @ 0x140C0D000 (IopApplySystemPartitionProt.c)
 */

char __fastcall IopProtectSystemPartition(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING v6; // [rsp+50h] [rbp-49h] BYREF
  int v7; // [rsp+60h] [rbp-39h]
  int v8; // [rsp+64h] [rbp-35h]
  __int64 v9; // [rsp+68h] [rbp-31h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-29h]
  int v11; // [rsp+78h] [rbp-21h]
  int v12; // [rsp+7Ch] [rbp-1Dh]
  __int128 v13; // [rsp+80h] [rbp-19h]
  _BYTE v14[80]; // [rsp+90h] [rbp-9h] BYREF

  Handle = 0LL;
  v12 = 0;
  LODWORD(v3) = 0;
  v8 = 0;
  DestinationString = 0LL;
  v6 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa");
  v9 = 0LL;
  p_DestinationString = &DestinationString;
  v7 = 48;
  v11 = 64;
  v13 = 0LL;
  if ( (int)NtOpenKey() >= 0 )
  {
    RtlInitUnicodeString(&v6, L"Protect System Partition");
    if ( (int)NtQueryValueKey(Handle, &v6, 2u, (unsigned __int64)v14, 0x14u, (unsigned __int64)&v3) >= 0 && v14[12] )
      IopApplySystemPartitionProt(a1);
    NtClose(Handle);
  }
  return 1;
}
