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

__int64 __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  __int64 result; // rax
  unsigned __int8 *v3; // rbx
  __int16 v4; // dx
  __int16 v5; // bp
  unsigned __int16 v6; // bp
  wchar_t *Atom; // rax
  size_t v8; // rax
  unsigned int v9; // esi
  wchar_t *v10; // r14
  wchar_t *Buffer; // rax
  unsigned __int64 v12; // rdx
  NTSTATUS v13; // ebx
  int v14; // [rsp+30h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+38h] [rbp-A0h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-88h] BYREF

  v14 = 0;
  *(_DWORD *)(&UnicodeStringa.MaximumLength + 1) = 0;
  result = NtQueryInformationToken(-6LL, 1LL, Sid, 88LL, &v14);
  if ( (int)result >= 0 )
  {
    v3 = (unsigned __int8 *)Sid[0];
    if ( (unsigned __int8)RtlValidSid(Sid[0]) == 1 )
    {
      if ( v3[2] || v3[3] )
        v4 = 36;
      else
        v4 = 28;
      v5 = 22 * v3[1];
      UnicodeString->Length = 0;
      v6 = v4 + v5;
      UnicodeString->MaximumLength = v6 + 34;
      Atom = (wchar_t *)RtlpAllocateAtom();
      UnicodeString->Buffer = Atom;
      if ( Atom )
      {
        v8 = wcslen(L"\\REGISTRY\\USER\\");
        if ( v8 <= 0x7FFE )
        {
          v9 = (unsigned __int16)(2 * v8);
          if ( UnicodeString->Length + v9 <= UnicodeString->MaximumLength )
          {
            v10 = &UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1];
            memmove(v10, L"\\REGISTRY\\USER\\", (unsigned __int16)(2 * v8));
            UnicodeString->Length += v9;
            if ( (unsigned int)UnicodeString->Length + 1 < UnicodeString->MaximumLength )
              v10[(unsigned __int64)v9 >> 1] = 0;
          }
        }
        Buffer = UnicodeString->Buffer;
        v12 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v6;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v12];
        v13 = RtlConvertSidToUnicodeString(&UnicodeStringa, Sid[0], 0);
        if ( v13 < 0 )
          RtlFreeAnsiString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return (unsigned int)v13;
      }
      else
      {
        return 3221225495LL;
      }
    }
    else
    {
      return 3221225592LL;
    }
  }
  return result;
}
