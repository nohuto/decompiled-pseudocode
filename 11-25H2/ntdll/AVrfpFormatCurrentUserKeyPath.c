/*
 * XREFs of AVrfpFormatCurrentUserKeyPath @ 0x18011EED4
 * Callers:
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800B3634 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     AVrfpAppendCurrentUserSid @ 0x1801131DC (AVrfpAppendCurrentUserSid.c)
 */

int __fastcall AVrfpFormatCurrentUserKeyPath(PUNICODE_STRING Destination)
{
  int result; // eax

  *Destination = 0LL;
  Destination->MaximumLength = 1252;
  Destination->Buffer = (wchar_t *)&AVrfpCurrentUserKeyPath;
  result = RtlAppendUnicodeToString(Destination, L"\\REGISTRY\\USER\\");
  if ( result >= 0 )
  {
    result = AVrfpAppendCurrentUserSid(&Destination->Length);
    if ( result >= 0 )
      return RtlAppendUnicodeStringToString(Destination, &stru_180176770);
  }
  return result;
}
