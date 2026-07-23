/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x1407813F0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1405E6300 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x140780D40 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x1403C2D90 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlGetAppContainerParent @ 0x140780B50 (RtlGetAppContainerParent.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlGetAppContainerSidType @ 0x1409143B0 (RtlGetAppContainerSidType.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, char a3, UNICODE_STRING *a4)
{
  PSID v8; // r12
  char v9; // r15
  int v10; // esi
  int v11; // eax
  int v12; // edi
  NTSTATUS appended; // ebx
  ULONG CurrentServiceSessionId; // eax
  int v15; // r9d
  NTSTATUS AppContainerParent; // eax
  PSID v17; // rdi
  PULONG v18; // rsi
  PULONG v19; // rdi
  PULONG v20; // rbx
  const wchar_t *v21; // r8
  NTSTATUS v22; // eax
  const wchar_t *v23; // r8
  size_t v24; // rbx
  int v25; // r15d
  ULONG_PTR v26; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v28; // rdi
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  PSID AppContainerSidParent; // [rsp+40h] [rbp-C0h] BYREF
  char v33; // [rsp+48h] [rbp-B8h]
  int TokenInformation; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+54h] [rbp-ACh] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+5Ch] [rbp-A4h] BYREF
  int v39; // [rsp+60h] [rbp-A0h]
  size_t pcbLength; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+84h] [rbp-7Ch]
  UNICODE_STRING Source; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v46; // [rsp+A8h] [rbp-58h] BYREF
  PSID Sida[12]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v48[10]; // [rsp+120h] [rbp+20h] BYREF
  PCWSTR SourceString; // [rsp+170h] [rbp+70h] BYREF
  char v50; // [rsp+178h] [rbp+78h]
  wchar_t psz[264]; // [rsp+290h] [rbp+190h] BYREF
  wchar_t pszDest[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  AppContainerSidType = NotAppContainerSidType;
  AppContainerSidParent = 0LL;
  v8 = 0LL;
  memset_0(v48, 0, sizeof(v48));
  v35 = 0;
  v37 = 0;
  memset_0(psz, 0, 0x208uLL);
  memset_0(pszDest, 0, 0x208uLL);
  memset_0(Sida, 0, 0x58uLL);
  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = (wchar_t *)L"\\";
  v46 = 0LL;
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  TokenInformation = 0;
  v9 = 1;
  v36 = 0;
  v33 = 1;
  LODWORD(pcbLength) = a3 & 1;
  v10 = a3 & 2;
  v11 = a3 & 8;
  v43 = v10;
  v12 = a3 & 4;
  v39 = v11;
  v42 = v12;
  *a4 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( Sid )
  {
    v8 = Sid;
    TokenInformation = 1;
  }
  else
  {
    appended = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &v35);
    if ( appended < 0 )
      goto LABEL_65;
    if ( TokenInformation )
    {
      appended = NtQueryInformationToken(TokenHandle, TokenAppContainerSid, v48, 0x50u, &v35);
      if ( appended < 0 )
        goto LABEL_65;
      v8 = (PSID)v48[0];
      if ( !v48[0] )
      {
        appended = -1073741823;
        goto LABEL_65;
      }
    }
  }
  appended = NtQueryInformationToken(TokenHandle, TokenPrivateNameSpace, &v36, 4u, &v35);
  if ( appended < 0 )
    goto LABEL_65;
  if ( v36 )
  {
    appended = NtQueryInformationToken(TokenHandle, TokenUser, Sida, 0x58u, &v35);
    if ( appended < 0 )
      goto LABEL_65;
    appended = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
    if ( appended < 0 )
      goto LABEL_65;
  }
  appended = NtQueryInformationToken(TokenHandle, TokenSessionId, &v37, 4u, &v35);
  if ( appended < 0 )
    goto LABEL_65;
  if ( TokenInformation )
  {
    appended = RtlGetAppContainerSidType(v8, &AppContainerSidType);
    if ( appended < 0 )
      goto LABEL_65;
    if ( AppContainerSidType == ParentAppContainerSidType )
    {
      appended = RtlConvertSidToUnicodeString(&DestinationString, v8, 1u);
      if ( appended < 0 )
        goto LABEL_65;
    }
    else
    {
      AppContainerParent = RtlGetAppContainerParent(v8, &AppContainerSidParent);
      v17 = AppContainerSidParent;
      appended = AppContainerParent;
      if ( AppContainerParent < 0 )
        goto LABEL_66;
      appended = RtlConvertSidToUnicodeString(&DestinationString, AppContainerSidParent, 1u);
      if ( appended < 0 )
        goto LABEL_66;
      v18 = RtlSubAuthoritySid(v8, 0xBu);
      v19 = RtlSubAuthoritySid(v8, 0xAu);
      v20 = RtlSubAuthoritySid(v8, 9u);
      LODWORD(ReturnLength) = *RtlSubAuthoritySid(v8, 8u);
      appended = RtlStringCchPrintfW(
                   pszDest,
                   0x104uLL,
                   L"%s\\%u-%u-%u-%u",
                   DestinationString.Buffer,
                   ReturnLength,
                   *v20,
                   *v19,
                   *v18);
      if ( appended < 0 )
        goto LABEL_65;
      RtlFreeAnsiString(&DestinationString);
      RtlInitUnicodeString(&DestinationString, pszDest);
      v12 = v42;
      v10 = v43;
      v33 = 0;
    }
  }
  appended = NtQueryInformationToken(TokenHandle, TokenBnoIsolation, &SourceString, 0x120u, &v35);
  if ( appended >= 0 )
  {
    if ( v36 || TokenInformation )
    {
      v15 = v37;
    }
    else
    {
      CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
      v15 = v37;
      if ( v37 == CurrentServiceSessionId )
        goto LABEL_30;
    }
    v9 = 0;
LABEL_30:
    if ( (_BYTE)pcbLength )
    {
      if ( !v12 )
      {
        v22 = RtlStringCchPrintfW(psz, 0x104uLL, L"Global\\Session\\%ld%s");
LABEL_40:
        appended = v22;
        if ( v22 >= 0 )
        {
          pcbLength = 0LL;
          appended = RtlStringCbLengthW(psz, 0x208uLL, &pcbLength);
          if ( appended >= 0 )
          {
            if ( !v36 || v10 )
              v24 = pcbLength;
            else
              v24 = UnicodeString.Length + pcbLength + 2;
            if ( TokenInformation )
              v24 += DestinationString.Length + 2LL;
            v25 = v39;
            if ( v50 && !v39 )
            {
              RtlInitUnicodeString(&v46, SourceString);
              v24 += v46.Length + 2LL;
            }
            v26 = v24 + 2;
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v26, 0x67727453u);
            v28 = Pool2;
            if ( Pool2 )
            {
              memset_0(Pool2, 0, v26);
              *a4 = 0LL;
              a4->MaximumLength = v26;
              a4->Buffer = v28;
              appended = RtlAppendUnicodeToString(a4, psz);
              if ( appended >= 0 )
              {
                if ( !v36
                  || v10
                  || (appended = RtlAppendUnicodeStringToString(a4, &Source), appended >= 0)
                  && (appended = RtlAppendUnicodeStringToString(a4, &UnicodeString), appended >= 0) )
                {
                  if ( !TokenInformation
                    || (appended = RtlAppendUnicodeStringToString(a4, &Source), appended >= 0)
                    && (appended = RtlAppendUnicodeStringToString(a4, &DestinationString), appended >= 0) )
                  {
                    if ( v50 )
                    {
                      if ( !v25 )
                      {
                        appended = RtlAppendUnicodeStringToString(a4, &Source);
                        if ( appended >= 0 )
                          appended = RtlAppendUnicodeStringToString(a4, &v46);
                      }
                    }
                  }
                }
              }
            }
            else
            {
              appended = -1073741670;
            }
          }
        }
        goto LABEL_65;
      }
      v23 = L"AppContainerNamedObjects";
    }
    else
    {
      if ( !v9 )
      {
        v21 = L"AppContainerNamedObjects";
        if ( !TokenInformation )
          v21 = L"BaseNamedObjects";
        LODWORD(ReturnLengtha) = v15;
        v22 = RtlStringCchPrintfW(psz, 0x104uLL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v21);
        goto LABEL_40;
      }
      v23 = L"\\BaseNamedObjects";
    }
    v22 = RtlStringCchCopyW(psz, 0x104uLL, v23);
    goto LABEL_40;
  }
LABEL_65:
  v17 = AppContainerSidParent;
LABEL_66:
  RtlFreeAnsiString(&UnicodeString);
  if ( appended < 0 )
    RtlFreeAnsiString(a4);
  if ( v33 )
    RtlFreeAnsiString(&DestinationString);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  return (unsigned int)appended;
}
