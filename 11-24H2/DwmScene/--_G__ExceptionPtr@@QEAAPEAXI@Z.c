/*
 * XREFs of ??_G__ExceptionPtr@@QEAAPEAXI@Z @ 0x18004BC10
 * Callers:
 *     sub_18004D5E0 @ 0x18004D5E0 (sub_18004D5E0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18004B890 @ 0x18004B890 (sub_18004B890.c)
 */

__ExceptionPtr *__fastcall __ExceptionPtr::`scalar deleting destructor'(__ExceptionPtr *this, char a2)
{
  sub_18004B890((__int64)this);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
