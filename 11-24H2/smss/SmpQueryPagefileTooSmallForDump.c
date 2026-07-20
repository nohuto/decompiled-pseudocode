/*
 * XREFs of SmpQueryPagefileTooSmallForDump @ 0x1400127CC
 * Callers:
 *     SmpComputeDesiredPfSizeForCrashDump @ 0x14000E8C0 (SmpComputeDesiredPfSizeForCrashDump.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 SmpQueryPagefileTooSmallForDump()
{
  __int64 v0; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-18h] BYREF

  v0 = 0LL;
  ValueName.Buffer = L"PagefileTooSmall";
  *(_QWORD *)&ValueName.Length = 2228256LL;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  if ( NtQueryValueKey(
         SmpCrashDumpKey,
         &ValueName,
         KeyValuePartialInformationAlign64,
         &KeyValueInformation,
         0x10u,
         &ResultLength) >= 0
    && (_QWORD)KeyValueInformation == 0x80000000BLL )
  {
    return *((_QWORD *)&KeyValueInformation + 1);
  }
  return v0;
}
