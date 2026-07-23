/*
 * XREFs of BcpSetCursorPosition @ 0x14069B148
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x140699A70 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140699B4C (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x140699EB0 (BcpDisplayCriticalStringCentered.c)
 *     BcpDisplayErrorInformation @ 0x14069A26C (BcpDisplayErrorInformation.c)
 *     BcpDisplayErrorInformationModernized @ 0x14069A4D4 (BcpDisplayErrorInformationModernized.c)
 *     BcpGetComponentOffsets @ 0x14069ACC0 (BcpGetComponentOffsets.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x14069B16C (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069B214 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069B3E0 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069B730 (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpSetCursorPosition(ULONG a1, ULONG a2, int *a3)
{
  __int64 result; // rax

  BcpCursor = a1;
  *(&BcpCursor + 1) = a2;
  if ( a3 )
  {
    result = (unsigned int)*a3;
    dword_140EEFD38 = *a3;
  }
  return result;
}
