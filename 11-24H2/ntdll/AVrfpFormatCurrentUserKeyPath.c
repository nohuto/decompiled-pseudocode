/*
 * XREFs of AVrfpFormatCurrentUserKeyPath @ 0x18011B834
 * Callers:
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800A6164 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18007F450 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180092390 (RtlAppendUnicodeStringToString.c)
 *     AVrfpAppendCurrentUserSid @ 0x18010B6CC (AVrfpAppendCurrentUserSid.c)
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
      return RtlAppendUnicodeStringToString(Destination, &stru_180173760);
  }
  return result;
}
