/*
 * XREFs of ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_1 @ 0x180093B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180093B1C @ 0x180093B1C (sub_180093B1C.c)
 */

Concurrency::details::_Condition_variable *__fastcall Concurrency::details::_Condition_variable::`scalar deleting destructor'(
        Concurrency::details::_Condition_variable *this,
        char a2)
{
  sub_180093B1C(this);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
