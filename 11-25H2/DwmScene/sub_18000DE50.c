/*
 * XREFs of sub_18000DE50 @ 0x18000DE50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E1FC @ 0x18000E1FC (sub_18000E1FC.c)
 */

void *sub_18000DE50()
{
  if ( !byte_1801C3390 )
  {
    sub_18000E1FC((LPCWSTR)sub_18000EEF0);
    byte_1801C3390 = 1;
  }
  return &unk_1801C33B0;
}
