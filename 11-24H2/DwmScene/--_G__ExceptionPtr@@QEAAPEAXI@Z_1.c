/*
 * XREFs of ??_G__ExceptionPtr@@QEAAPEAXI@Z_1 @ 0x1800C2880
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800C27B8 @ 0x1800C27B8 (sub_1800C27B8.c)
 */

__ExceptionPtr *__fastcall __ExceptionPtr::`scalar deleting destructor'(__ExceptionPtr *this, char a2)
{
  sub_1800C27B8(this);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
