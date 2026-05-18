/*
 * XREFs of ??_G__ExceptionPtr@@QEAAPEAXI@Z_0 @ 0x18004F5D0
 * Callers:
 *     sub_18004FA50 @ 0x18004FA50 (sub_18004FA50.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800513D4 @ 0x1800513D4 (sub_1800513D4.c)
 */

__ExceptionPtr *__fastcall __ExceptionPtr::`scalar deleting destructor'(__ExceptionPtr *this, char a2)
{
  sub_1800513D4();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(this);
  return this;
}
