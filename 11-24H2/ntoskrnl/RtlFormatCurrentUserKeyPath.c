/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x140869650
 * Callers:
 *     RtlOpenCurrentUser @ 0x140781FF0 (RtlOpenCurrentUser.c)
 *     AslRegistryBuildUserPath @ 0x140809060 (AslRegistryBuildUserPath.c)
 *     _RegRtlOpenPredefinedKey @ 0x140821834 (_RegRtlOpenPredefinedKey.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x1406A77D0 (ZwQueryInformationToken.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  NTSTATUS result; // eax
  unsigned __int8 *v3; // rdi
  __int16 v4; // dx
  __int16 v5; // di
  unsigned __int16 v6; // di
  ULONG_PTR v7; // rdx
  wchar_t *Pool2; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v10; // rdx
  int v11; // edi
  ULONG ReturnLength; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-90h] BYREF
  PSID TokenInformation[12]; // [rsp+50h] [rbp-78h] BYREF

  ReturnLength = 0;
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    v3 = (unsigned __int8 *)TokenInformation[0];
    if ( RtlValidSid(TokenInformation[0]) == 1 )
    {
      if ( v3[2] || (v4 = 28, v3[3]) )
        v4 = 36;
      v5 = 22 * v3[1];
      CurrentUserKeyPath->Length = 0;
      v6 = v4 + v5;
      v7 = (unsigned __int16)(v6 + 34);
      CurrentUserKeyPath->MaximumLength = v7;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v7, 0x67727453u);
      CurrentUserKeyPath->Buffer = Pool2;
      if ( Pool2 )
      {
        RtlAppendUnicodeToString(CurrentUserKeyPath, L"\\REGISTRY\\USER\\");
        Buffer = CurrentUserKeyPath->Buffer;
        v10 = (unsigned __int64)CurrentUserKeyPath->Length >> 1;
        UnicodeString.MaximumLength = v6;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v10];
        v11 = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
        if ( v11 < 0 )
          RtlFreeAnsiString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += UnicodeString.Length;
        return v11;
      }
      else
      {
        return -1073741801;
      }
    }
    else
    {
      return -1073741704;
    }
  }
  return result;
}
