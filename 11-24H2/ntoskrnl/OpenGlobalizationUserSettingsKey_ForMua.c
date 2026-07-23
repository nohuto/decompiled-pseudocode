/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x14065930C
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1404C4820 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1406595AC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryInformationToken @ 0x1406A77D0 (ZwQueryInformationToken.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(__int64 a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  int v6; // r15d
  void *Pool2; // r14
  __int64 v8; // rcx
  NTSTATUS InformationToken; // ebx
  _DWORD *v10; // rax
  unsigned __int16 v11; // bx
  wchar_t *v12; // rax
  wchar_t *v13; // rdi
  ULONG ReturnLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  WCHAR TargetPath[264]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = 0;
  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x54uLL, 0x4E4C53u);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  ReturnLength[0] = 0;
  InformationToken = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, Pool2, 0x54u, ReturnLength);
  if ( InformationToken >= 0 )
  {
    v10 = *(_DWORD **)Pool2;
    LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)Pool2 + 1LL);
    if ( (unsigned __int8)v8 < 2u || (_BYTE)v8 == 5 && v10[2] == 21 && v10[6] == 503 )
    {
      *a4 = 0;
LABEL_21:
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v8, a3);
      goto LABEL_22;
    }
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
    if ( InformationToken >= 0 )
    {
      ReturnLength[0] = 0;
      InformationToken = RtlGetPersistedStateLocation(
                           L"GlobalizationUserSettings",
                           L"TargetNtPath",
                           L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                           LocationTypeRegistry,
                           TargetPath,
                           0x208u,
                           ReturnLength);
      if ( InformationToken >= 0 )
      {
        v11 = LOWORD(ReturnLength[0]) + UnicodeString.Length + 4;
        v12 = (wchar_t *)ExAllocatePool2(0x100uLL, v11, 0x4E4C53u);
        v13 = v12;
        if ( v12 )
        {
          *(_QWORD *)&Destination.Length = 0LL;
          Destination.MaximumLength = v11;
          Destination.Buffer = v12;
          InformationToken = RtlAppendUnicodeToString(&Destination, TargetPath);
          if ( InformationToken >= 0 )
          {
            InformationToken = RtlAppendUnicodeToString(&Destination, L"\\");
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
              if ( InformationToken >= 0 )
              {
                ObjectAttributes.RootDirectory = 0LL;
                *(_QWORD *)ReturnLength = 0LL;
                ObjectAttributes.ObjectName = &Destination;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey((PHANDLE)ReturnLength, 0x20019u, &ObjectAttributes) < 0 )
                {
                  *a4 = 1;
                  v6 = 1;
                }
                else
                {
                  ZwClose(*(HANDLE *)ReturnLength);
                  *a4 = 2;
                  InformationToken = ZwOpenKey(a3, 8u, &ObjectAttributes);
                }
              }
            }
          }
          ExFreePoolWithTag(v13, 0x4E4C53u);
        }
        else
        {
          InformationToken = -1073741801;
        }
      }
      RtlFreeAnsiString(&UnicodeString);
    }
  }
  if ( v6 )
    goto LABEL_21;
LABEL_22:
  ExFreePoolWithTag(Pool2, 0x4E4C53u);
  return (unsigned int)InformationToken;
}
