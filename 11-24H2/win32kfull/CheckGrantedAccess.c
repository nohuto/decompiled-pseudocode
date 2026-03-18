/*
 * XREFs of CheckGrantedAccess @ 0x140174598
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     NtUserGetCaretBlinkTime @ 0x1401743B0 (NtUserGetCaretBlinkTime.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1401744B4 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     EditionAreAllAccessGranted @ 0x140174580 (EditionAreAllAccessGranted.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1401FD550 (-_SwapMouseButton@@YAHH@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14022FDC8 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x140234EBC (xxxInjectTouchInput.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x140272DAC (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5);
  return 0LL;
}
