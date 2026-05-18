/*
 * XREFs of ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_2 @ 0x1800CDBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800CDB54 @ 0x1800CDB54 (sub_1800CDB54.c)
 */

Concurrency::details::_Condition_variable *__fastcall Concurrency::details::_Condition_variable::`scalar deleting destructor'(
        Concurrency::details::_Condition_variable *this,
        char a2)
{
  sub_1800CDB54((__int64)this);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
