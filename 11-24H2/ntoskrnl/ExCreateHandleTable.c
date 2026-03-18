/*
 * XREFs of ExCreateHandleTable @ 0x14093BEF4
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140741C20 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpInitSystem @ 0x1407422BC (AlpcpInitSystem.c)
 *     ObInitProcess @ 0x14093BD38 (ObInitProcess.c)
 *     ExDupHandleTable @ 0x14093D080 (ExDupHandleTable.c)
 *     PspInitializeJobStructures @ 0x140C35CF8 (PspInitializeJobStructures.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 *     PspInitPhase0 @ 0x140C65530 (PspInitPhase0.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpAllocateHandleTable @ 0x14093BFFC (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(ULONG_PTR a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  signed __int8 v7; // cf
  _QWORD *v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  CurrentThread = KeGetCurrentThread();
  result = ExpAllocateHandleTable(a1);
  v5 = result;
  if ( result )
  {
    if ( a2 )
    {
      --CurrentThread->KernelApcDisable;
      v6 = KeAbPreAcquire((__int64)&HandleTableListLock, 0LL);
      v7 = _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL);
      v8 = v6;
      if ( v7 )
        ExfAcquirePushLockExclusiveEx(&HandleTableListLock, (__int64)v6, (__int64)&HandleTableListLock);
      if ( v8 )
        *((_BYTE *)v8 + 10) = 1;
      v9 = (_QWORD *)qword_140FD8FB0;
      v10 = (_QWORD *)(v5 + 24);
      if ( *(__int64 **)qword_140FD8FB0 != &HandleTableListHead )
        __fastfail(3u);
      *v10 = &HandleTableListHead;
      *(_QWORD *)(v5 + 32) = v9;
      *v9 = v10;
      qword_140FD8FB0 = v5 + 24;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
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
