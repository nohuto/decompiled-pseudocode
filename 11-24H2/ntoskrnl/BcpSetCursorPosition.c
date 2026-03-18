/*
 * XREFs of BcpSetCursorPosition @ 0x14069A0C8
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x1406989F0 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140698ACC (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x140698E30 (BcpDisplayCriticalStringCentered.c)
 *     BcpDisplayErrorInformation @ 0x1406991EC (BcpDisplayErrorInformation.c)
 *     BcpDisplayErrorInformationModernized @ 0x140699454 (BcpDisplayErrorInformationModernized.c)
 *     BcpGetComponentOffsets @ 0x140699C40 (BcpGetComponentOffsets.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x14069A0EC (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069A194 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069A360 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069A6B0 (BgpFwDisplayBugCheckScreenModernized.c)
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
    dword_140EEFAE8 = *a3;
  }
  return result;
}
