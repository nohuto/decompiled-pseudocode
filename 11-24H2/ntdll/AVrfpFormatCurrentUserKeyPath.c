/*
 * XREFs of AVrfpFormatCurrentUserKeyPath @ 0x18011D604
 * Callers:
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x18008A6A4 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     AVrfpAppendCurrentUserSid @ 0x18011040C (AVrfpAppendCurrentUserSid.c)
 */

int __fastcall AVrfpFormatCurrentUserKeyPath(__int64 a1)
{
  int result; // eax

  *(_OWORD *)a1 = 0LL;
  *(_WORD *)(a1 + 2) = 1252;
  *(_QWORD *)(a1 + 8) = &AVrfpCurrentUserKeyPath;
  result = RtlAppendUnicodeToString((unsigned __int16 *)a1, L"\\REGISTRY\\USER\\");
  if ( result >= 0 )
  {
    result = AVrfpAppendCurrentUserSid((unsigned __int16 *)a1);
    if ( result >= 0 )
      return RtlAppendUnicodeStringToString((unsigned __int16 *)a1, &qword_180174760);
  }
  return result;
}
