/*
 * XREFs of ExpAcquireFastMutexContended @ 0x140441108
 * Callers:
 *     CmpAddToDelayedClose @ 0x140840810 (CmpAddToDelayedClose.c)
 *     CmpReferenceKeyControlBlock @ 0x140841D90 (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140874C40 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  char *v5; // rdi
  int v7; // esi
  __int64 result; // rax
  int v9; // ett
  int v10; // ett

  ++*(_DWORD *)(a1 + 16);
  v4 = 1;
  v5 = (char *)a2;
  v7 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)a1;
  do
  {
    while ( (result & 1) == 0 )
    {
      v9 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)a1, v7 + result, result);
      if ( v9 == (_DWORD)result )
      {
        if ( v5 )
          KeAbPreWait(v5, a2, a3, a4);
        KeWaitForSingleObject((PVOID)(a1 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)a1);
        v4 = 3;
        v7 = 2;
        if ( v5 )
          v5 = (char *)KeAbPreAcquire(a1, (__int64)v5);
        goto LABEL_2;
      }
    }
    v10 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, v4 ^ result, result);
  }
  while ( v10 != (_DWORD)result );
  return result;
}
