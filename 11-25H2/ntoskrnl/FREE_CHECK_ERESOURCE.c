/*
 * XREFs of FREE_CHECK_ERESOURCE @ 0x1404925E0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 * Callees:
 *     ExpCheckForResource @ 0x140492604 (ExpCheckForResource.c)
 */

__int64 __fastcall FREE_CHECK_ERESOURCE(__int64 a1, __int64 a2)
{
  if ( (ExpPoolFlags & 4) != 0 )
    return ExpCheckForResource(a1, a2);
  else
    return 0LL;
}
