/*
 * XREFs of ViDeadlockExAcquireSharedStarveExclusive_Exit @ 0x140B9B450
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockExAcquireSharedStarveExclusive_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
    return VfDeadlockAcquireResource(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
  return result;
}
