/*
 * XREFs of ExCreateHandleTable @ 0x14094D1CC
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14073FB50 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpInitSystem @ 0x14073FD1C (AlpcpInitSystem.c)
 *     ExDupHandleTable @ 0x140891770 (ExDupHandleTable.c)
 *     ObInitProcess @ 0x14094D010 (ObInitProcess.c)
 *     PspInitializeJobStructures @ 0x140C37E38 (PspInitializeJobStructures.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpAllocateHandleTable @ 0x14094D2D4 (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(ULONG_PTR a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 result; // rax
  __int64 v5; // rdi
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  CurrentThread = KeGetCurrentThread();
  result = ExpAllocateHandleTable(a1);
  v5 = result;
  if ( result )
  {
    if ( a2 )
    {
      --CurrentThread->KernelApcDisable;
      v6 = (char *)KeAbPreAcquire((__int64)&HandleTableListLock, 0LL);
      v7 = _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL);
      v8 = v6;
      if ( v7 )
        ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v6, (__int64)&HandleTableListLock);
      if ( v8 )
        v8[10] = 1;
      v9 = (_QWORD *)qword_140FD9FC0;
      v10 = (_QWORD *)(v5 + 24);
      if ( *(__int64 **)qword_140FD9FC0 != &HandleTableListHead )
        __fastfail(3u);
      *v10 = &HandleTableListHead;
      *(_QWORD *)(v5 + 32) = v9;
      *v9 = v10;
      qword_140FD9FC0 = v5 + 24;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      v11 = (_QWORD *)(result + 24);
      v11[1] = v11;
      *v11 = v11;
    }
    return v5;
  }
  return result;
}
