/*
 * XREFs of ??R?$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z @ 0x18058AE14
 * Callers:
 *     ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x1802CEB0C (--1-$unique_ptr@VTouchGestureProcessor@@U-$default_delete@VTouchGestureProcessor@@@std@@@std@@QE.c)
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x18058B800 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ??1TouchGestureProcessor@@QEAA@XZ @ 0x18026FC18 (--1TouchGestureProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<TouchGestureProcessor>::operator()(__int64 a1, TouchGestureProcessor *a2)
{
  if ( a2 )
  {
    TouchGestureProcessor::~TouchGestureProcessor(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x128);
  }
}
