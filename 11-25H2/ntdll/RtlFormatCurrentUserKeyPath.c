/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x18005F470
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     RtlOpenCurrentUser @ 0x18005D890 (RtlOpenCurrentUser.c)
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlConvertSidToUnicodeString @ 0x18005F8F0 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  NTSTATUS result; // eax
  unsigned __int8 *v3; // rbx
  __int16 v4; // dx
  __int16 v5; // bp
  unsigned __int16 v6; // bp
  SIZE_T v7; // rcx
  wchar_t *Atom; // rax
  size_t v9; // rax
  unsigned int v10; // esi
  wchar_t *v11; // r14
  wchar_t *Buffer; // rax
  unsigned __int64 v13; // rdx
  int v14; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp-A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-A0h] BYREF
  PSID TokenInformation[12]; // [rsp+50h] [rbp-88h] BYREF

  ReturnLength = 0;
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, TokenInformation, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    v3 = (unsigned __int8 *)TokenInformation[0];
    if ( RtlValidSid(TokenInformation[0]) == 1 )
    {
      if ( v3[2] || v3[3] )
        v4 = 36;
      else
        v4 = 28;
      v5 = 22 * v3[1];
      CurrentUserKeyPath->Length = 0;
      v6 = v4 + v5;
      v7 = (unsigned __int16)(v6 + 34);
      CurrentUserKeyPath->MaximumLength = v7;
      Atom = (wchar_t *)RtlpAllocateAtom(v7);
      CurrentUserKeyPath->Buffer = Atom;
      if ( Atom )
      {
        v9 = wcslen(L"\\REGISTRY\\USER\\");
        if ( v9 <= 0x7FFE )
        {
          v10 = (unsigned __int16)(2 * v9);
          if ( CurrentUserKeyPath->Length + v10 <= CurrentUserKeyPath->MaximumLength )
          {
            v11 = &CurrentUserKeyPath->Buffer[(unsigned __int64)CurrentUserKeyPath->Length >> 1];
            memmove(v11, L"\\REGISTRY\\USER\\", (unsigned __int16)(2 * v9));
            CurrentUserKeyPath->Length += v10;
            if ( (unsigned int)CurrentUserKeyPath->Length + 1 < CurrentUserKeyPath->MaximumLength )
              v11[(unsigned __int64)v10 >> 1] = 0;
          }
        }
        Buffer = CurrentUserKeyPath->Buffer;
        v13 = (unsigned __int64)CurrentUserKeyPath->Length >> 1;
        UnicodeString.MaximumLength = v6;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v13];
        v14 = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
        if ( v14 < 0 )
          RtlFreeAnsiString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += UnicodeString.Length;
        return v14;
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
