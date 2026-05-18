/*
 * XREFs of ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_0 @ 0x180092CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180092C60 @ 0x180092C60 (sub_180092C60.c)
 */

Concurrency::details::_Condition_variable *__fastcall Concurrency::details::_Condition_variable::`scalar deleting destructor'(
        Concurrency::details::_Condition_variable *this,
        char a2)
{
  sub_180092C60(this);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
