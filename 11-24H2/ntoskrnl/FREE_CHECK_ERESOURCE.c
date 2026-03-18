/*
 * XREFs of FREE_CHECK_ERESOURCE @ 0x1404917EC
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 * Callees:
 *     ExpCheckForResource @ 0x140491810 (ExpCheckForResource.c)
 */

__int64 __fastcall FREE_CHECK_ERESOURCE(__int64 a1, __int64 a2)
{
  volatile CCHAR v2; // al

  v2 = KeNumberProcessorsGroup0[9];
  if ( (v2 & 4) != 0 )
    return ExpCheckForResource(a1, a2);
  else
    return 0LL;
}
