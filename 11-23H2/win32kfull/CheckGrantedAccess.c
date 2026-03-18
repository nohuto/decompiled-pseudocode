/*
 * XREFs of CheckGrantedAccess @ 0x1C007F6B0
 * Callers:
 *     CheckCursorClipAccess @ 0x1C002DF50 (CheckCursorClipAccess.c)
 *     EditionAreAllAccessGranted @ 0x1C007F540 (EditionAreAllAccessGranted.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C007F558 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C007F610 (NtUserGetCaretBlinkTime.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AAE3C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01AFFF4 (xxxInjectTouchInput.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01BEBD8 (-_SwapMouseButton@@YAHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5LL);
  return 0LL;
}
