/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x140916F10
 * Callers:
 *     RtlOpenCurrentUser @ 0x140772E10 (RtlOpenCurrentUser.c)
 *     AslRegistryBuildUserPath @ 0x1407F8DB0 (AslRegistryBuildUserPath.c)
 *     _RegRtlOpenPredefinedKey @ 0x1408111F4 (_RegRtlOpenPredefinedKey.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x14069B560 (ZwQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlConvertSidToUnicodeString @ 0x140917220 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  NTSTATUS result; // eax
  unsigned __int8 *v3; // rdi
  __int16 v4; // dx
  __int16 v5; // di
  unsigned __int16 v6; // di
  wchar_t *Pool2; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v9; // rdx
  int v10; // edi
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
      CurrentUserKeyPath->MaximumLength = v6 + 34;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      CurrentUserKeyPath->Buffer = Pool2;
      if ( Pool2 )
      {
        RtlAppendUnicodeToString(CurrentUserKeyPath, L"\\REGISTRY\\USER\\");
        Buffer = CurrentUserKeyPath->Buffer;
        v9 = (unsigned __int64)CurrentUserKeyPath->Length >> 1;
        UnicodeString.MaximumLength = v6;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v9];
        v10 = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
        if ( v10 < 0 )
          RtlFreeAnsiString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += UnicodeString.Length;
        return v10;
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
