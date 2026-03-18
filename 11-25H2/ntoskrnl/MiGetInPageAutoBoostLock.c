/*
 * XREFs of MiGetInPageAutoBoostLock @ 0x1402D9B38
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x1409C8D00 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x1409CABB4 (MiPrefetchControlArea.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402DAA60 (ExpAllocatePoolWithTagFromNode.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 */

_QWORD *MiGetInPageAutoBoostLock()
{
  ULONG_PTR v0; // r9
  _QWORD *result; // rax
  __int64 v2; // [rsp+40h] [rbp-18h] BYREF
  int v3; // [rsp+48h] [rbp-10h]
  int v4; // [rsp+4Ch] [rbp-Ch]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0;
  v0 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v0) = v0 | 0x80000000;
  if ( (ExpPoolFlags & 8) != 0 )
  {
    v2 = 1LL;
    v3 = 32;
    result = (_QWORD *)VfHandlePoolAlloc(
                         NonPagedPool,
                         0x40uLL,
                         8uLL,
                         0x4149694Du,
                         LowPoolPriority,
                         (__int64)&v2,
                         1,
                         retaddr);
  }
  else
  {
    result = (_QWORD *)ExpAllocatePoolWithTagFromNode(0x40uLL, 8uLL, 0x4149694DuLL, v0);
  }
  if ( result )
    *result = 1LL;
  return result;
}
