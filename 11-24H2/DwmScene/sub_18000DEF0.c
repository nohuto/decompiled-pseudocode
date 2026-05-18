/*
 * XREFs of sub_18000DEF0 @ 0x18000DEF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E2FC @ 0x18000E2FC (sub_18000E2FC.c)
 */

void *sub_18000DEF0()
{
  if ( !byte_1801C43A8 )
  {
    sub_18000E2FC((LPCWSTR)sub_18000EFF0);
    byte_1801C43A8 = 1;
  }
  return &unk_1801C43C0;
}
