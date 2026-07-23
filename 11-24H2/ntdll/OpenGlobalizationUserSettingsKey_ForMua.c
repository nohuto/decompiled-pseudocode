/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x1800CBBD4
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800149A0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800C9BA0 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1800044C0 (RtlInitUnicodeStringEx.c)
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlConvertSidToUnicodeString @ 0x1800190C0 (RtlConvertSidToUnicodeString.c)
 *     RtlGetPersistedStateLocation @ 0x180053020 (RtlGetPersistedStateLocation.c)
 *     RtlAppendUnicodeToString @ 0x18007F450 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180092390 (RtlAppendUnicodeStringToString.c)
 *     IdnaMemAlloc @ 0x1800B18CC (IdnaMemAlloc.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800CB894 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryInformationToken @ 0x180160470 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(ACCESS_MASK a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  ACCESS_MASK v4; // esi
  HANDLE *v6; // r12
  int v7; // r13d
  __int64 *v8; // r15
  NTSTATUS InformationToken; // ebx
  HANDLE *v10; // rcx
  __int64 v12; // rax
  unsigned __int16 v13; // bx
  wchar_t *v14; // rax
  wchar_t *v15; // rdi
  unsigned int v16; // esi
  wchar_t *v17; // r12
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle[2]; // [rsp+58h] [rbp-A8h] BYREF
  PHANDLE KeyHandle; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  WCHAR TargetPath[264]; // [rsp+B0h] [rbp-50h] BYREF

  KeyHandle = a3;
  v4 = a1;
  v6 = a3;
  UnicodeString = 0LL;
  v7 = 0;
  memset(&ObjectAttributes, 0, 44);
  v8 = (__int64 *)IdnaMemAlloc(0x54uLL);
  if ( v8 )
  {
    LODWORD(Handle[0]) = 0;
    InformationToken = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, v8, 0x54u, (PULONG)Handle);
    if ( InformationToken < 0 )
      goto LABEL_7;
    v12 = *v8;
    if ( *(_BYTE *)(*v8 + 1) < 2u
      || *(_BYTE *)(v12 + 1) == 5 && *(_DWORD *)(v12 + 8) == 21 && *(_DWORD *)(v12 + 24) == 503 )
    {
      *a4 = 0;
      goto LABEL_8;
    }
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v12, 1u);
    if ( InformationToken < 0 )
    {
LABEL_7:
      if ( !v7 )
      {
LABEL_9:
        RtlpSysVolFree(v8);
        return (unsigned int)InformationToken;
      }
LABEL_8:
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v4, v6);
      goto LABEL_9;
    }
    LODWORD(Handle[0]) = 0;
    InformationToken = RtlGetPersistedStateLocation(
                         L"GlobalizationUserSettings",
                         L"TargetNtPath",
                         L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                         LocationTypeRegistry,
                         TargetPath,
                         0x208u,
                         (PULONG)Handle);
    if ( InformationToken >= 0 )
    {
      v13 = LOWORD(Handle[0]) + UnicodeString.Length + 4;
      v14 = (wchar_t *)IdnaMemAlloc(v13);
      v15 = v14;
      if ( v14 )
      {
        *(_QWORD *)&Destination.Length = 0LL;
        Destination.MaximumLength = v13;
        Destination.Buffer = v14;
        *(_OWORD *)Handle = 0LL;
        if ( RtlInitUnicodeStringEx((PUNICODE_STRING)Handle, TargetPath) < 0 )
        {
          InformationToken = -1073741789;
          goto LABEL_4;
        }
        v16 = LOWORD(Handle[0]);
        if ( LOWORD(Handle[0]) + (unsigned int)Destination.Length > Destination.MaximumLength )
        {
          InformationToken = -1073741789;
        }
        else
        {
          v17 = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
          memmove(v17, TargetPath, LOWORD(Handle[0]));
          Destination.Length += v16;
          if ( (unsigned int)Destination.Length + 1 < Destination.MaximumLength )
            v17[(unsigned __int64)v16 >> 1] = 0;
          InformationToken = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( InformationToken >= 0 )
          {
            InformationToken = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
            if ( InformationToken >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              Handle[0] = 0LL;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( NtOpenKey(Handle, 0x20019u, &ObjectAttributes) >= 0 )
              {
                NtClose(Handle[0]);
                v6 = KeyHandle;
                v4 = a1;
                v10 = KeyHandle;
                *a4 = 2;
                InformationToken = NtOpenKey(v10, a1, &ObjectAttributes);
LABEL_4:
                RtlpSysVolFree(v15);
                goto LABEL_5;
              }
              *a4 = 1;
              v7 = 1;
            }
          }
          v6 = KeyHandle;
        }
        v4 = a1;
        goto LABEL_4;
      }
      InformationToken = -1073741801;
    }
LABEL_5:
    if ( UnicodeString.Buffer )
      RtlpSysVolFree(UnicodeString.Buffer);
    goto LABEL_7;
  }
  return (unsigned int)-1073741801;
}
