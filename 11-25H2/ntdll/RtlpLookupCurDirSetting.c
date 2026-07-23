/*
 * XREFs of RtlpLookupCurDirSetting @ 0x1800ABF84
 * Callers:
 *     RtlpComputeSearchPath @ 0x1800AAB60 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x1800AC8B0 (RtlpComputeDllPath.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLookupCurDirSetting(PUNICODE_STRING ValueName, unsigned __int32 a2, volatile signed __int32 *a3)
{
  HANDLE v6; // rbx
  unsigned __int32 v7; // ecx
  __int64 result; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+40h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  if ( !LdrpIsSecureProcess )
  {
    v6 = ::KeyHandle;
    KeyHandle = ::KeyHandle;
    if ( !::KeyHandle )
    {
      if ( NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180175968) < 0 )
      {
LABEL_7:
        v7 = a2;
        goto LABEL_8;
      }
      v6 = (HANDLE)_InterlockedCompareExchange64(
                     (volatile signed __int64 *)&::KeyHandle,
                     (signed __int64)KeyHandle,
                     0LL);
      if ( v6 )
      {
        NtClose(KeyHandle);
        KeyHandle = v6;
      }
      else
      {
        v6 = KeyHandle;
      }
    }
    if ( NtQueryValueKey(v6, ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0
      && ResultLength == 16 )
    {
      v7 = HIDWORD(KeyValueInformation);
      if ( HIDWORD(KeyValueInformation) <= 1 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
  v7 = 1;
LABEL_8:
  result = (unsigned int)_InterlockedCompareExchange(a3, v7, 0);
  if ( !(_DWORD)result )
    return v7;
  return result;
}
