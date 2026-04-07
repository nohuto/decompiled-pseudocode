/*
 * XREFs of ??1CTouchVisual@@MEAA@XZ @ 0x180086E10
 * Callers:
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x18001205C (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x180012DB0 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18007E4BC (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x180098388 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800C2F9C (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800C6E60 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800C9ED4 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??1CPressTapVisual@@MEAA@XZ @ 0x1800CA38C (--1CPressTapVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800D93B8 (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800DBC28 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800DC460 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTouchVisual::~CTouchVisual(void **this)
{
  *this = &CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
