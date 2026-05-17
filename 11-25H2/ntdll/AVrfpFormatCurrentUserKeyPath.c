/*
 * XREFs of AVrfpFormatCurrentUserKeyPath @ 0x18011EED4
 * Callers:
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800B3634 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     AVrfpAppendCurrentUserSid @ 0x1801131DC (AVrfpAppendCurrentUserSid.c)
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
      return RtlAppendUnicodeStringToString((unsigned __int16 *)a1, &qword_180176770);
  }
  return result;
}
