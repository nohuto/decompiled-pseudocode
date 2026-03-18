/*
 * XREFs of CiFreeMemory @ 0x140003FF0
 * Callers:
 *     CsTerminate @ 0x14000D470 (CsTerminate.c)
 *     CiSystemTerminate @ 0x14000DD5C (CiSystemTerminate.c)
 *     CiTaskIndexCreate @ 0x14000E600 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
