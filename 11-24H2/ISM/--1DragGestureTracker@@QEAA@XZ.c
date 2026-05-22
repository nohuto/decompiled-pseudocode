/*
 * XREFs of ??1DragGestureTracker@@QEAA@XZ @ 0x1801A0AA8
 * Callers:
 *     ??R?$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z @ 0x18014AA84 (--R-$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DragGestureTracker::~DragGestureTracker(DragGestureTracker *this)
{
  if ( *((_QWORD *)this + 2) )
    DestroyInteractionContext();
}
