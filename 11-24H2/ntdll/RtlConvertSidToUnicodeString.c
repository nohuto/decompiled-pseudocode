/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x1800190C0
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x180018C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18007FBD0 (RtlpGetTokenNamedObjectPath.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1800CBBD4 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     WerEscalationLazyInit @ 0x1800DE2E0 (WerEscalationLazyInit.c)
 *     AVrfpAppendCurrentUserSid @ 0x18010B6CC (AVrfpAppendCurrentUserSid.c)
 * Callees:
 *     RtlIntegerToUnicode @ 0x180019360 (RtlIntegerToUnicode.c)
 *     RtlValidSid @ 0x1800194A0 (RtlValidSid.c)
 *     RtlLargeIntegerToUnicode @ 0x180019820 (RtlLargeIntegerToUnicode.c)
 *     RtlCreateUnicodeString @ 0x180054A50 (RtlCreateUnicodeString.c)
 *     wcscat_s @ 0x18012C0F0 (wcscat_s.c)
 *     wcscpy_s @ 0x18012C190 (wcscpy_s.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  _BYTE *v6; // rbx
  NTSTATUS result; // eax
  unsigned __int8 i; // di
  unsigned int MaximumLength; // ecx
  unsigned int v10; // ebx
  wchar_t *Buffer; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // r8
  wchar_t *v14; // rcx
  NTSTATUS v15; // edx
  BOOLEAN v16; // al
  int v17; // eax
  __int64 v18; // rdx
  _DWORD v19[4]; // [rsp+20h] [rbp-248h] BYREF
  wchar_t Destination; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v21[4]; // [rsp+38h] [rbp-230h] BYREF
  _BYTE v22[496]; // [rsp+3Ch] [rbp-22Ch] BYREF
  _BYTE v23[2]; // [rsp+22Ch] [rbp-3Ch] BYREF
  _BYTE v24[2]; // [rsp+22Eh] [rbp-3Ah] BYREF

  if ( RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(&Destination, 0x100uLL, L"S-1-");
  v6 = v21;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(&Destination, 0x100uLL, L"0x");
    v6 = v22;
    v17 = *((unsigned __int8 *)Sid + 5);
    v19[1] = *((unsigned __int8 *)Sid + 3) + (*((unsigned __int8 *)Sid + 2) << 8);
    v19[0] = *((unsigned __int8 *)Sid + 7)
           + (*((unsigned __int8 *)Sid + 6) << 8)
           + (v17 << 16)
           + (*((unsigned __int8 *)Sid + 4) << 24);
    result = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _BYTE *))RtlLargeIntegerToUnicode)(
               v19,
               v18,
               250LL,
               v22);
  }
  else
  {
    result = RtlIntegerToUnicode(
               *((unsigned __int8 *)Sid + 7)
             + (*((unsigned __int8 *)Sid + 6) << 8)
             + (*((unsigned __int8 *)Sid + 5) << 16)
             + (*((unsigned __int8 *)Sid + 4) << 24),
               10LL,
               252LL,
               v21);
  }
  if ( result >= 0 )
  {
    for ( i = 0; i < *((_BYTE *)Sid + 1); ++i )
    {
      for ( ; v6 < v23; v6 += 2 )
      {
        if ( !*(_WORD *)v6 )
          break;
      }
      *(_WORD *)v6 = 45;
      v6 += 2;
      result = RtlIntegerToUnicode(
                 *((unsigned int *)Sid + i + 2),
                 10LL,
                 256 - (unsigned int)((v6 - (_BYTE *)&Destination) >> 1),
                 v6);
      if ( result < 0 )
        return result;
    }
    if ( AllocateDestinationString )
    {
      v16 = RtlCreateUnicodeString(UnicodeString, &Destination);
      v15 = 0;
      if ( !v16 )
        return -1073741801;
    }
    else
    {
      for ( ; v6 < v24; v6 += 2 )
      {
        if ( !*(_WORD *)v6 )
          break;
      }
      MaximumLength = UnicodeString->MaximumLength;
      v10 = 2 * ((v6 - (_BYTE *)&Destination) >> 1);
      if ( v10 >= MaximumLength )
      {
        return -2147483643;
      }
      else
      {
        Buffer = UnicodeString->Buffer;
        if ( (unsigned __int16)v10 <= (unsigned __int16)MaximumLength )
          MaximumLength = (unsigned __int16)v10;
        v12 = MaximumLength;
        v13 = MaximumLength;
        v14 = UnicodeString->Buffer;
        UnicodeString->Length = v12;
        memmove(v14, &Destination, v13);
        v15 = 0;
        if ( (unsigned __int64)UnicodeString->Length + 2 <= UnicodeString->MaximumLength )
          Buffer[v12 >> 1] = 0;
      }
    }
    return v15;
  }
  return result;
}
