/*
 * XREFs of BcpDisplayProgressModernized @ 0x140699A04
 * Callers:
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069A194 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069A6B0 (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     BcpConvertProgressToString @ 0x1406988EC (BcpConvertProgressToString.c)
 *     BcpDisplayCriticalStringCentered @ 0x140698E30 (BcpDisplayCriticalStringCentered.c)
 *     BcpPrintSpaces @ 0x140699F68 (BcpPrintSpaces.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall BcpDisplayProgressModernized(unsigned int a1, int a2)
{
  __int64 v4; // rsi
  NTSTATUS appended; // ebx
  const UNICODE_STRING *v6; // rdx
  const UNICODE_STRING *v7; // rdx
  unsigned int v8; // r8d
  int v10; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING Destination; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING Source; // [rsp+48h] [rbp-28h] BYREF
  char v13; // [rsp+58h] [rbp-18h] BYREF

  v10 = 0;
  v4 = 84LL * a2;
  appended = BcpPrintSpaces(
               qword_140E3EAA0,
               *(_DWORD *)((char *)&unk_140E0EED0 + v4 + 16) + *(_DWORD *)((char *)&unk_140E0EED0 + v4 + 32),
               *(_DWORD *)((char *)&unk_140E0EED0 + v4 + 32)
             + *(_DWORD *)((char *)&unk_140E0EED0 + v4 + 16)
             + *(_DWORD *)((char *)&unk_140E0EED0 + v4 + 24),
               *(&BcpCursor + 1),
               *(_DWORD *)(*(_QWORD *)(qword_140E3EAA0 + 24) + 40LL),
               (__int64)&v10);
  if ( appended >= 0 )
  {
    *(_QWORD *)&Source.Length = 0x80000LL;
    Source.Buffer = (wchar_t *)&v13;
    BcpConvertProgressToString(a1, (__int64)&Source);
    v6 = &stru_140E3E9E0;
    *(_QWORD *)&Destination.Length = 0LL;
    Destination.MaximumLength = word_140E3EAB8;
    Destination.Buffer = (wchar_t *)qword_140E3EAB0;
    if ( a1 != 1 )
      v6 = &stru_140E3EA00;
    appended = RtlAppendUnicodeStringToString(&Destination, v6);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, L" ");
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(&Destination, &Source);
        if ( appended >= 0 )
        {
          v7 = &stru_140E3E9F0;
          if ( a1 != 1 )
            v7 = &stru_140E3EA10;
          appended = RtlAppendUnicodeStringToString(&Destination, v7);
          if ( appended >= 0 )
            BcpDisplayCriticalStringCentered(&Destination, *(_DWORD *)((char *)&unk_140E0EED0 + v4 + 8), v8, a2);
        }
      }
    }
  }
  return (unsigned int)appended;
}
