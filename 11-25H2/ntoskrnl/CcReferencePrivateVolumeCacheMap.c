/*
 * XREFs of CcReferencePrivateVolumeCacheMap @ 0x1403AC690
 * Callers:
 *     CcPostWorkQueueCachemapUninit @ 0x1403AC174 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x1403AC318 (CcWriteBehind.c)
 *     CcAllocateWorkQueueEntry @ 0x1403AC58C (CcAllocateWorkQueueEntry.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcReferencePrivateVolumeCacheMap(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
    if ( result <= 1 )
      __fastfail(0xEu);
  }
  return result;
}
