/*
 * XREFs of ??_G__ExceptionPtr@@QEAAPEAXI@Z @ 0x18004BAB0
 * Callers:
 *     sub_18004D480 @ 0x18004D480 (sub_18004D480.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18004B730 @ 0x18004B730 (sub_18004B730.c)
 */

__ExceptionPtr *__fastcall __ExceptionPtr::`scalar deleting destructor'(__ExceptionPtr *this, char a2)
{
  sub_18004B730((__int64)this);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(this);
  return this;
}
