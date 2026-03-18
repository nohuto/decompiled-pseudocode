/*
 * XREFs of AdtpLookupDriveLetter @ 0x140A3A9B8
 * Callers:
 *     AdtpSubstituteDriveLetter @ 0x140A3A944 (AdtpSubstituteDriveLetter.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 */

char __fastcall AdtpLookupDriveLetter(PCUNICODE_STRING String1, unsigned __int16 *a2, _WORD *a3)
{
  UNICODE_STRING *v4; // rbx
  int v7; // esi
  unsigned int Length; // eax
  unsigned __int16 v9; // bp
  char result; // al

  v4 = &stru_140FD9C00;
  v7 = 25;
  while ( (__int64)v4 >= (__int64)&unk_140FD99A8 )
  {
    if ( v4->Buffer )
    {
      Length = v4->Length;
      v9 = String1->Length;
      if ( (unsigned __int16)Length < String1->Length )
      {
        String1->Length = Length;
        if ( String1->Buffer[(unsigned __int64)Length >> 1] == 92 && RtlEqualUnicodeString(String1, v4, 1u) )
        {
          String1->Length = v9;
          result = 1;
          *a3 = *((_WORD *)&DriveMappingArray + 12 * v7);
          *a2 = v4->Length;
          return result;
        }
        String1->Length = v9;
      }
    }
    --v7;
    v4 = (UNICODE_STRING *)((char *)v4 - 24);
  }
  return 0;
}
