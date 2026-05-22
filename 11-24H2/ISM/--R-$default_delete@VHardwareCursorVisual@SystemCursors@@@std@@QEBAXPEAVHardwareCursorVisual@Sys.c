/*
 * XREFs of ??R?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@QEBAXPEAVHardwareCursorVisual@SystemCursors@@@Z @ 0x1800F927C
 * Callers:
 *     ??$?4U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@$0A@@?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009A63C (--$-4U-$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@$0A@@-$unique_ptr@VHardwareCur.c)
 *     ??1?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x18009C088 (--1-$unique_ptr@VHardwareCursorVisual@SystemCursors@@U-$default_delete@VHardwareCursorVisual@Sys.c)
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800F9D00 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HardwareCursorVisual@SystemCursors@@QEAA@XZ @ 0x1800F8FF4 (--1HardwareCursorVisual@SystemCursors@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<SystemCursors::HardwareCursorVisual>::operator()(
        __int64 a1,
        SystemCursors::HardwareCursorVisual *a2)
{
  if ( a2 )
  {
    SystemCursors::HardwareCursorVisual::~HardwareCursorVisual(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x40);
  }
}
