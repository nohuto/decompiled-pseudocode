/*
 * XREFs of ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z_0 @ 0x180017AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800173EC @ 0x1800173EC (sub_1800173EC.c)
 */

Concurrency::critical_section *__fastcall Concurrency::critical_section::`scalar deleting destructor'(
        Concurrency::critical_section *this,
        char a2)
{
  sub_1800173EC((__int64)this);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(this);
  return this;
}
