/*
 * XREFs of SaferpIsV2PolicyPresent @ 0x1800F1C7C
 * Callers:
 *     LdrpCodeAuthzCheckDllAllowedSrpV2 @ 0x1800F1C30 (LdrpCodeAuthzCheckDllAllowedSrpV2.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall SaferpIsV2PolicyPresent(_DWORD *a1)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  HANDLE v5; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-9h] BYREF
  int v11; // [rsp+64h] [rbp-5h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]

  *a1 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v2 = NtOpenKey(&KeyHandle, 0x20119u, (POBJECT_ATTRIBUTES)&stru_180175DA0);
  if ( v2 < 0 )
  {
    v3 = 0;
    if ( v2 != -1073741772 )
      v3 = v2;
  }
  else
  {
    v3 = NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_180175DD0,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x50u,
           &ResultLength);
    if ( v3 >= 0 && v12 == 4 && v11 == 4 )
      *a1 = v13 != 0;
    else
      v3 = 0;
    if ( !*a1 )
    {
      FileHandle = 0LL;
      IoStatusBlock = 0LL;
      if ( NtOpenFile(&FileHandle, 0x100000u, (POBJECT_ATTRIBUTES)&stru_180175DE0, &IoStatusBlock, 7u, 0x4021u) >= 0 )
      {
        v5 = FileHandle;
        *a1 = 1;
        NtClose(v5);
      }
      v3 = 0;
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v3;
}
