/*
 * XREFs of CcReferencePrivateVolumeCacheMap @ 0x140279C30
 * Callers:
 *     CcPostWorkQueueCachemapUninit @ 0x14027973C (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     CcAllocateWorkQueueEntry @ 0x140279B34 (CcAllocateWorkQueueEntry.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
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
