/*
 * XREFs of ??_G_Iostream_error_category2@std@@UEAAPEAXI@Z @ 0x180024AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

std::_Iostream_error_category2 *__fastcall std::_Iostream_error_category2::`scalar deleting destructor'(
        std::_Iostream_error_category2 *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18000B77C(this);
  return this;
}
