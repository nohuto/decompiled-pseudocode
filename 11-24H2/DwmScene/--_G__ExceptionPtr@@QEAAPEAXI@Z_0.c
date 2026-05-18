/*
 * XREFs of ??_G__ExceptionPtr@@QEAAPEAXI@Z_0 @ 0x18004F730
 * Callers:
 *     sub_18004FBB0 @ 0x18004FBB0 (sub_18004FBB0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180051534 @ 0x180051534 (sub_180051534.c)
 */

__ExceptionPtr *__fastcall __ExceptionPtr::`scalar deleting destructor'(__ExceptionPtr *this, char a2)
{
  sub_180051534();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
