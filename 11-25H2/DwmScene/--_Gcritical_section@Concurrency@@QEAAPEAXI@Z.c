/*
 * XREFs of ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z @ 0x1800179F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180017374 @ 0x180017374 (sub_180017374.c)
 */

Concurrency::critical_section *__fastcall Concurrency::critical_section::`scalar deleting destructor'(
        Concurrency::critical_section *this,
        char a2)
{
  sub_180017374(this);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(this);
  return this;
}
