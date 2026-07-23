/*
 * XREFs of RtlpIsEmptyImageFileOptionsKey @ 0x1801362A8
 * Callers:
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x180136210 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1801362A8 (RtlpIsEmptyImageFileOptionsKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1800044C0 (RtlInitUnicodeStringEx.c)
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1801362A8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1801602B0 (ZwEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x180160690 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

bool __fastcall RtlpIsEmptyImageFileOptionsKey(void *a1)
{
  NTSTATUS inited; // ebx
  ULONG v2; // edi
  NTSTATUS v4; // edi
  ULONG v5; // esi
  char IsEmptyImageFileOptionsKey; // bl
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  PCWCH String1[2]; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING v12; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v15; // [rsp+A8h] [rbp-58h]
  __int16 v16; // [rsp+ACh] [rbp-54h] BYREF
  char v17; // [rsp+B0h] [rbp-50h] BYREF

  inited = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  v2 = 0;
  *(_OWORD *)String1 = 0LL;
  DestinationString = 0LL;
  v12 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  while ( inited >= 0 )
  {
    inited = ZwEnumerateValueKey(a1, v2, KeyValueBasicInformation, KeyValueInformation, 0x230u, &ResultLength);
    if ( inited >= 0 )
    {
      if ( v2 )
        return 0;
      LOWORD(String1[0]) = v15;
      WORD1(String1[0]) = v15;
      String1[1] = (PCWCH)&v16;
      if ( RtlInitUnicodeStringEx(&DestinationString, L"UseFilter") < 0 )
        return 0;
      inited = RtlInitUnicodeStringEx(&v12, L"FilterFullPath");
      if ( inited < 0
        || RtlCompareUnicodeStrings(
             String1[1],
             (unsigned __int64)LOWORD(String1[0]) >> 1,
             DestinationString.Buffer,
             (unsigned __int64)DestinationString.Length >> 1,
             1u)
        && RtlCompareUnicodeStrings(
             String1[1],
             (unsigned __int64)LOWORD(String1[0]) >> 1,
             v12.Buffer,
             (unsigned __int64)v12.Length >> 1,
             1u) )
      {
        return 0;
      }
    }
    ++v2;
  }
  if ( inited != -2147483622 )
    return 0;
  v4 = 0;
  v5 = 0;
  while ( v4 >= 0 )
  {
    v4 = NtEnumerateKey(a1, v5, KeyBasicInformation, KeyValueInformation, 0x230u, &ResultLength);
    if ( v4 >= 0 )
    {
      LOWORD(String1[0]) = v16;
      WORD1(String1[0]) = v16;
      ObjectAttributes.Length = 48;
      String1[1] = (PCWCH)&v17;
      ObjectAttributes.RootDirectory = a1;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)String1;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
      if ( v4 >= 0 )
      {
        IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(KeyHandle);
        NtClose(KeyHandle);
        if ( !IsEmptyImageFileOptionsKey )
          return 0;
      }
    }
    ++v5;
  }
  return v4 == -2147483622;
}
