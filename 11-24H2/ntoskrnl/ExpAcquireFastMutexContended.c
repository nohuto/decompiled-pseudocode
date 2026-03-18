/*
 * XREFs of ExpAcquireFastMutexContended @ 0x1404489B8
 * Callers:
 *     CmpAddToDelayedClose @ 0x140844550 (CmpAddToDelayedClose.c)
 *     CmpReferenceKeyControlBlock @ 0x140845AD0 (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140870910 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087DE20 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  _QWORD *v4; // rdi
  int v6; // esi
  __int64 result; // rax
  int v8; // ett
  int v9; // ett

  ++*(_DWORD *)(a1 + 16);
  v3 = 1;
  v4 = (_QWORD *)a2;
  v6 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)a1;
  do
  {
    while ( (result & 1) == 0 )
    {
      v8 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)a1, v6 + result, result);
      if ( v8 == (_DWORD)result )
      {
        if ( v4 )
          KeAbPreWait((__int64)v4, a2, a3);
        KeWaitForSingleObject((PVOID)(a1 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)a1);
        v3 = 3;
        v6 = 2;
        if ( v4 )
          v4 = KeAbPreAcquire(a1, (__int64)v4);
        goto LABEL_2;
      }
    }
    v9 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, v3 ^ result, result);
  }
  while ( v9 != (_DWORD)result );
  return result;
}
