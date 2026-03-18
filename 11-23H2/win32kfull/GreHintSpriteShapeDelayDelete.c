/*
 * XREFs of GreHintSpriteShapeDelayDelete @ 0x1C026754C
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FEBE0 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C00B356C (GreHintSpriteShape.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C02799AC (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

int __fastcall GreHintSpriteShapeDelayDelete(Gre::Base *a1, HWND a2, HBITMAP a3, __int64 a4, int a5, int a6)
{
  if ( a6 && IsDwmActive(a1) )
    return GreHintSpriteShape((HDEV)a1, a2, a3, a4, a5, a6, 0);
  else
    return GdiHintSpriteShapeDelayDelete((HDEV)a1, a2, a3, a4);
}
