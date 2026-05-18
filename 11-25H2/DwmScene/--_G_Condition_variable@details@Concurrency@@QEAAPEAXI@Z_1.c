/*
 * XREFs of ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_1 @ 0x180093A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800939BC @ 0x1800939BC (sub_1800939BC.c)
 */

Concurrency::details::_Condition_variable *__fastcall Concurrency::details::_Condition_variable::`scalar deleting destructor'(
        Concurrency::details::_Condition_variable *this,
        char a2)
{
  sub_1800939BC(this);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(this);
  return this;
}
