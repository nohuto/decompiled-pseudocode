/*
 * XREFs of BcpSetCursorPosition @ 0x14068ED78
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x14068D6A0 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14068D77C (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x14068DAE0 (BcpDisplayCriticalStringCentered.c)
 *     BcpDisplayErrorInformation @ 0x14068DE9C (BcpDisplayErrorInformation.c)
 *     BcpDisplayErrorInformationModernized @ 0x14068E104 (BcpDisplayErrorInformationModernized.c)
 *     BcpGetComponentOffsets @ 0x14068E8F0 (BcpGetComponentOffsets.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x14068ED9C (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14068EE44 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14068F010 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14068F360 (BgpFwDisplayBugCheckScreenModernized.c)
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
    dword_140EEF840 = *a3;
  }
  return result;
}
