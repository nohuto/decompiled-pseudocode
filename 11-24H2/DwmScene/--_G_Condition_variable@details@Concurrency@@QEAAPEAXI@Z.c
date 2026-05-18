/*
 * XREFs of ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z @ 0x180051640
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800515E4 @ 0x1800515E4 (sub_1800515E4.c)
 */

Concurrency::details::_Condition_variable *__fastcall Concurrency::details::_Condition_variable::`scalar deleting destructor'(
        Concurrency::details::_Condition_variable *this,
        char a2)
{
  sub_1800515E4((__int64)this);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
