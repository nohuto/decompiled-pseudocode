/*
 * XREFs of ExpAcquireFastMutexContended @ 0x14044AE54
 * Callers:
 *     CmpAddToDelayedClose @ 0x140848A10 (CmpAddToDelayedClose.c)
 *     CmpReferenceKeyControlBlock @ 0x140849E30 (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140874820 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(__int64 a1, __int64 *a2)
{
  int v2; // ebp
  int v5; // esi
  __int64 result; // rax
  int v7; // ett
  int v8; // ett

  ++*(_DWORD *)(a1 + 16);
  v2 = 1;
  v5 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)a1;
  do
  {
    while ( (result & 1) == 0 )
    {
      v7 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)a1, v5 + result, result);
      if ( v7 == (_DWORD)result )
      {
        if ( a2 )
          KeAbPreWait(a2);
        KeWaitForSingleObject((PVOID)(a1 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)a1);
        v2 = 3;
        v5 = 2;
        if ( a2 )
          a2 = KeAbPreAcquire(a1, (__int64)a2);
        goto LABEL_2;
      }
    }
    v8 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, v2 ^ result, result);
  }
  while ( v8 != (_DWORD)result );
  return result;
}
