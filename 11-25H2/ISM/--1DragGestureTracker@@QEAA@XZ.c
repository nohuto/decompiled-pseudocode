/*
 * XREFs of ??1DragGestureTracker@@QEAA@XZ @ 0x1801994B8
 * Callers:
 *     ??R?$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z @ 0x1801488B4 (--R-$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DragGestureTracker::~DragGestureTracker(DragGestureTracker *this)
{
  if ( *((_QWORD *)this + 2) )
    DestroyInteractionContext();
}
