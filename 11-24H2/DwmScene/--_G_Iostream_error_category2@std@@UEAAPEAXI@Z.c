/*
 * XREFs of ??_G_Iostream_error_category2@std@@UEAAPEAXI@Z @ 0x180024C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

std::_Iostream_error_category2 *__fastcall std::_Iostream_error_category2::`scalar deleting destructor'(
        std::_Iostream_error_category2 *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
