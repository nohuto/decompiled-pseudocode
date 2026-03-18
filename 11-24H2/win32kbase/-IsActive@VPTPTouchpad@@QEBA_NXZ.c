/*
 * XREFs of ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x14019F2FC
 * Callers:
 *     ??1VPTPTouchpad@@QEAA@XZ @ 0x14018A7E8 (--1VPTPTouchpad@@QEAA@XZ.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x140219F4C (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x14021A1EC (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VPTPTouchpad::IsActive(VPTPTouchpad *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 4) || *((VPTPTouchpad **)this + 2) != (VPTPTouchpad *)((char *)this + 16) )
    return 1;
  return v1;
}
