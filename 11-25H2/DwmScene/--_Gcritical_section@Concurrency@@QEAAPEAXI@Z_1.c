/*
 * XREFs of ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z_1 @ 0x1800878A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180087774 @ 0x180087774 (sub_180087774.c)
 */

Concurrency::critical_section *__fastcall Concurrency::critical_section::`scalar deleting destructor'(
        Concurrency::critical_section *this,
        char a2)
{
  sub_180087774((__int64)this);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(this);
  return this;
}
