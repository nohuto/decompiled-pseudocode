/*
 * XREFs of AdtpSubstituteDriveLetter @ 0x140A3A944
 * Callers:
 *     AdtpPackageParameters @ 0x140451F80 (AdtpPackageParameters.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     AdtpLookupDriveLetter @ 0x140A3A9B8 (AdtpLookupDriveLetter.c)
 */

void *__fastcall AdtpSubstituteDriveLetter(UNICODE_STRING *a1)
{
  void *result; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // bx

  result = (void *)AdtpLookupDriveLetter(a1);
  if ( (_BYTE)result )
  {
    Buffer = a1->Buffer;
    Length = a1->Length;
    *Buffer = 0;
    Buffer[1] = 58;
    result = memmove(Buffer + 2, Buffer, Length);
    a1->Length = Length + 4;
  }
  return result;
}
