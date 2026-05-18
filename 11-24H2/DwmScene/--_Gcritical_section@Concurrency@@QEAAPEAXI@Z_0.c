/*
 * XREFs of ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z_0 @ 0x180017B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800174EC @ 0x1800174EC (sub_1800174EC.c)
 */

Concurrency::critical_section *__fastcall Concurrency::critical_section::`scalar deleting destructor'(
        Concurrency::critical_section *this,
        char a2)
{
  sub_1800174EC((__int64)this);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
