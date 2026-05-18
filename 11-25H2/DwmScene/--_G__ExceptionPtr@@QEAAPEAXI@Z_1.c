/*
 * XREFs of ??_G__ExceptionPtr@@QEAAPEAXI@Z_1 @ 0x1800C2720
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800C2658 @ 0x1800C2658 (sub_1800C2658.c)
 */

__ExceptionPtr *__fastcall __ExceptionPtr::`scalar deleting destructor'(__ExceptionPtr *this, char a2)
{
  sub_1800C2658(this);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(this);
  return this;
}
