/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14064EF04
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1404CB5C4 (OpenGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14064EC64 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     OpenRegistryKey @ 0x14064F124 (OpenRegistryKey.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(ULONG a1, _QWORD *a2)
{
  __int64 v3; // rcx
  NTSTATUS v4; // ebx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  __int64 Pool2; // rsi
  __int64 v8; // rcx
  HANDLE v9; // rax
  HANDLE v10; // rax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING v13; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  void *v18; // [rsp+A8h] [rbp+38h] BYREF

  ResultLength = a1;
  if ( dword_140EEEA20 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, &word_140E620D0);
    return (unsigned int)OpenRegistryKey(v3, &DestinationString, a2);
  }
  KeyHandle = 0LL;
  v13 = 0LL;
  RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  v4 = OpenRegistryKey(v5, &v13, &KeyHandle);
  if ( v4 >= 0 )
  {
    ResultLength = 0;
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"RedirectedKey");
    v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( !ResultLength || v6 != -1073741789 && v6 != -2147483643 )
    {
      *(_QWORD *)&DestinationString.Length = 11141120LL;
      DestinationString.Buffer = &word_140E620D0;
      if ( v13.Length <= 0xAAu )
      {
        RtlCopyUnicodeString(&DestinationString, &v13);
        dword_140EEEA20 = 1;
      }
      v10 = KeyHandle;
      KeyHandle = 0LL;
      v4 = 0;
      *a2 = v10;
      goto LABEL_21;
    }
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, (PVOID)Pool2, ResultLength, &ResultLength);
      if ( v4 >= 0 )
      {
        if ( *(_DWORD *)(Pool2 + 4) != 1 )
        {
          v9 = KeyHandle;
          KeyHandle = 0LL;
LABEL_15:
          *a2 = v9;
          goto LABEL_16;
        }
        v18 = 0LL;
        SourceString = 0LL;
        RtlInitUnicodeString(&SourceString, (PCWSTR)(Pool2 + 12));
        v4 = OpenRegistryKey(v8, &SourceString, &v18);
        if ( v4 >= 0 )
        {
          *(_QWORD *)&DestinationString.Length = 11141120LL;
          DestinationString.Buffer = &word_140E620D0;
          if ( SourceString.Length <= 0xAAu )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            dword_140EEEA20 = 1;
          }
          v9 = v18;
          goto LABEL_15;
        }
      }
LABEL_16:
      ExFreePoolWithTag((PVOID)Pool2, 0x4E4C53u);
      goto LABEL_21;
    }
    v4 = -1073741801;
  }
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
