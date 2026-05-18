/*
 * XREFs of ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z_1 @ 0x180087A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800878D4 @ 0x1800878D4 (sub_1800878D4.c)
 */

Concurrency::critical_section *__fastcall Concurrency::critical_section::`scalar deleting destructor'(
        Concurrency::critical_section *this,
        char a2)
{
  sub_1800878D4((__int64)this);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
