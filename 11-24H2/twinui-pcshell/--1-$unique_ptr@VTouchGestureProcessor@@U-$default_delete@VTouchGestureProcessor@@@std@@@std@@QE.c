/*
 * XREFs of ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x1802CEB0C
 * Callers:
 *     ??1TouchGestureComponent@@UEAA@XZ @ 0x18058AD80 (--1TouchGestureComponent@@UEAA@XZ.c)
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x18058B800 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 *     _TouchGestureComponent::TouchGestureComponent_::_1_::dtor$1 @ 0x1806F586A (_TouchGestureComponent--TouchGestureComponent_--_1_--dtor$1.c)
 * Callees:
 *     ??R?$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z @ 0x18058AE14 (--R-$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<TouchGestureProcessor>::~unique_ptr<TouchGestureProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<TouchGestureProcessor>::operator()();
  return result;
}
