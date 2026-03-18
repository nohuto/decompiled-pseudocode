/*
 * XREFs of SecureDump_ProvisionCrashDumpKey @ 0x1405A23C8
 * Callers:
 *     SecureDump_ReInitialize @ 0x1405A248C (SecureDump_ReInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405A1E04 (SecureDump_LoadCertAndProvisionKey.c)
 */

__int64 SecureDump_ProvisionCrashDumpKey()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !SecureDmpEncryptionContext )
    return 3221225860LL;
  if ( ForceDumpDisabled
    || !SecureDmpLoadCertificate
    || !DWORD1(xmmword_140E660E8)
    || (_DWORD)xmmword_140E660E8
    || !AllowCrashDump )
  {
    return 3221225473LL;
  }
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\system32\\ntdumpkey.p7b");
  result = SecureDump_LoadCertAndProvisionKey(
             &DestinationString,
             (_QWORD *)&xmmword_140E660E8 + 1,
             (int *)&dwFlags,
             (_QWORD *)&dwFlags + 1,
             (__int64)(&dwFlags + 1));
  if ( (int)result < 0 )
  {
    if ( SecureDmpEncryptionContext == 1 )
      SecureDmpCertProvisionFailedDuringBoot = 1;
    SecureDmpEncryptionContext = 3;
    byte_140E660E4 = 0;
  }
  return result;
}
