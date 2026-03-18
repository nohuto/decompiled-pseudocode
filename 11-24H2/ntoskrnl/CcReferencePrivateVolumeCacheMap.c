/*
 * XREFs of CcReferencePrivateVolumeCacheMap @ 0x1402A7E40
 * Callers:
 *     CcPostWorkQueueCachemapUninit @ 0x1402A7944 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x1402A7ADC (CcWriteBehind.c)
 *     CcAllocateWorkQueueEntry @ 0x1402A7D3C (CcAllocateWorkQueueEntry.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
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
