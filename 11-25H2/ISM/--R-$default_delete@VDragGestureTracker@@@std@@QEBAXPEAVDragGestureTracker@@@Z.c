/*
 * XREFs of ??R?$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z @ 0x1801488B4
 * Callers:
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180146CC0 (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??1?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ @ 0x1801485CC (--1-$unique_ptr@VDragGestureTracker@@U-$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DragGestureTracker@@QEAA@XZ @ 0x1801994B8 (--1DragGestureTracker@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<DragGestureTracker>::operator()(__int64 a1, DragGestureTracker *a2)
{
  if ( a2 )
  {
    DragGestureTracker::~DragGestureTracker(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x18);
  }
}
