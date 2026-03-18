/*
 * XREFs of CiDecrementTotalThreadCount @ 0x140003E90
 * Callers:
 *     CiThreadCreate @ 0x14000ECB0 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x14000F520 (CiThreadCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
