/*
 * XREFs of ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_0 @ 0x180092B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180092B00 @ 0x180092B00 (sub_180092B00.c)
 */

Concurrency::details::_Condition_variable *__fastcall Concurrency::details::_Condition_variable::`scalar deleting destructor'(
        Concurrency::details::_Condition_variable *this,
        char a2)
{
  sub_180092B00(this);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(this);
  return this;
}
