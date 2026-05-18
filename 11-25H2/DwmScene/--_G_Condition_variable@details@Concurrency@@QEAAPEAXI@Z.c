/*
 * XREFs of ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z @ 0x1800514E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180051484 @ 0x180051484 (sub_180051484.c)
 */

Concurrency::details::_Condition_variable *__fastcall Concurrency::details::_Condition_variable::`scalar deleting destructor'(
        Concurrency::details::_Condition_variable *this,
        char a2)
{
  sub_180051484((__int64)this);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(this);
  return this;
}
