/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C0003E90
 * Callers:
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x1C000DF90 (CiThreadCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
