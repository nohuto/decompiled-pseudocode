/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x1800389C0
 * Callers:
 *     RtlOpenCurrentUser @ 0x180036FF0 (RtlOpenCurrentUser.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     RtlpGetRegistryHandle @ 0x1800B6868 (RtlpGetRegistryHandle.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     RtlConvertSidToUnicodeString @ 0x180038E40 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSid @ 0x180039220 (RtlValidSid.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  __int64 result; // rax
  unsigned __int8 *v3; // rbx
  __int16 v4; // dx
  __int16 v5; // bp
  unsigned __int16 v6; // bp
  __int64 v7; // rcx
  wchar_t *Atom; // rax
  size_t v9; // rax
  unsigned int v10; // esi
  wchar_t *v11; // r14
  wchar_t *Buffer; // rax
  unsigned __int64 v13; // rdx
  NTSTATUS v14; // ebx
  int v15; // [rsp+30h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+38h] [rbp-A0h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-88h] BYREF

  v15 = 0;
  *(_DWORD *)(&UnicodeStringa.MaximumLength + 1) = 0;
  result = NtQueryInformationToken(-6LL, 1LL, Sid, 88LL, &v15);
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
      v7 = (unsigned __int16)(v6 + 34);
      UnicodeString->MaximumLength = v7;
      Atom = (wchar_t *)RtlpAllocateAtom(v7);
      UnicodeString->Buffer = Atom;
      if ( Atom )
      {
        v9 = wcslen(L"\\REGISTRY\\USER\\");
        if ( v9 <= 0x7FFE )
        {
          v10 = (unsigned __int16)(2 * v9);
          if ( UnicodeString->Length + v10 <= UnicodeString->MaximumLength )
          {
            v11 = &UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1];
            memmove(v11, L"\\REGISTRY\\USER\\", (unsigned __int16)(2 * v9));
            UnicodeString->Length += v10;
            if ( (unsigned int)UnicodeString->Length + 1 < UnicodeString->MaximumLength )
              v11[(unsigned __int64)v10 >> 1] = 0;
          }
        }
        Buffer = UnicodeString->Buffer;
        v13 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v6;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v13];
        v14 = RtlConvertSidToUnicodeString(&UnicodeStringa, Sid[0], 0);
        if ( v14 < 0 )
          RtlFreeAnsiString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return (unsigned int)v14;
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
