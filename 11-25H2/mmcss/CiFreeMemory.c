/*
 * XREFs of CiFreeMemory @ 0x1C0003FF0
 * Callers:
 *     CsTerminate @ 0x1C000C400 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000C89C (CiSystemTerminate.c)
 *     CiTaskIndexCreate @ 0x1C000D070 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
