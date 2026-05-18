/*
 * XREFs of ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z @ 0x180017AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180017474 @ 0x180017474 (sub_180017474.c)
 */

Concurrency::critical_section *__fastcall Concurrency::critical_section::`scalar deleting destructor'(
        Concurrency::critical_section *this,
        char a2)
{
  sub_180017474(this);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(this);
  return this;
}
