/*
 * XREFs of ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800DBC28
 * Callers:
 *     ??_ECTouchPressHoldVisual@@MEAAPEAXI@Z @ 0x1800DBC60 (--_ECTouchPressHoldVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800DC1D0 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchPressHoldVisual::~CTouchPressHoldVisual(CTouchPressHoldVisual *this)
{
  *(_QWORD *)this = &CTouchPressHoldVisual::`vftable';
  CTouchPressHoldVisual::Stop(this);
  CTouchVisual::~CTouchVisual((void **)this);
}
