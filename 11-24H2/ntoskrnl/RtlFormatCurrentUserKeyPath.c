/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x140865040
 * Callers:
 *     RtlOpenCurrentUser @ 0x1407820C0 (RtlOpenCurrentUser.c)
 *     AslRegistryBuildUserPath @ 0x140808920 (AslRegistryBuildUserPath.c)
 *     _RegRtlOpenPredefinedKey @ 0x1408210F4 (_RegRtlOpenPredefinedKey.c)
 *     RtlpGetRegistryHandle @ 0x1409CC85C (RtlpGetRegistryHandle.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x1406A6830 (ZwQueryInformationToken.c)
 *     RtlConvertSidToUnicodeString @ 0x140865350 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSid @ 0x140866F20 (RtlValidSid.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  NTSTATUS result; // eax
  unsigned __int8 *v3; // rdi
  __int16 v4; // dx
  __int16 v5; // di
  unsigned __int16 v6; // di
  wchar_t *Pool2; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v9; // rdx
  NTSTATUS v10; // edi
  ULONG ReturnLength; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+38h] [rbp-90h] BYREF
  PSID TokenInformation[12]; // [rsp+50h] [rbp-78h] BYREF

  ReturnLength = 0;
  *(_DWORD *)(&UnicodeStringa.MaximumLength + 1) = 0;
  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    v3 = (unsigned __int8 *)TokenInformation[0];
    if ( RtlValidSid(TokenInformation[0]) == 1 )
    {
      if ( v3[2] || (v4 = 28, v3[3]) )
        v4 = 36;
      v5 = 22 * v3[1];
      UnicodeString->Length = 0;
      v6 = v4 + v5;
      UnicodeString->MaximumLength = v6 + 34;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      UnicodeString->Buffer = Pool2;
      if ( Pool2 )
      {
        RtlAppendUnicodeToString(UnicodeString, L"\\REGISTRY\\USER\\");
        Buffer = UnicodeString->Buffer;
        v9 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v6;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v9];
        v10 = RtlConvertSidToUnicodeString(&UnicodeStringa, TokenInformation[0], 0);
        if ( v10 < 0 )
          RtlFreeAnsiString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
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
