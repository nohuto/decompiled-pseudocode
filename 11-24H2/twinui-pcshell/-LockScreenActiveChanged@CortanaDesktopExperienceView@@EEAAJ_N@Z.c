/*
 * XREFs of ?LockScreenActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1803DA280
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803DC998 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::LockScreenActiveChanged(
        CortanaDesktopExperienceView *this,
        unsigned __int8 a2)
{
  CortanaDesktopExperienceView::PostTargetedMessage((char *)this - 72, 3LL, a2);
  return 0LL;
}
