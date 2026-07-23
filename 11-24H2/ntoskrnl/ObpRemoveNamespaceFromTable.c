/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x140A0D56C
 * Callers:
 *     NtDeletePrivateNamespace @ 0x1406F5940 (NtDeletePrivateNamespace.c)
 *     ObpCloseDirectoryObject @ 0x140A0D540 (ObpCloseDirectoryObject.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(volatile signed __int32 *Object)
{
  unsigned int v2; // ebp
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  char *v6; // rax
  char *v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  signed __int64 v13; // rtt

  v2 = -1072103391;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)&CurrentServerSiloGlobals[45];
  --CurrentThread->KernelApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[45], 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[45], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CurrentServerSiloGlobals[45],
      v6,
      (__int64)&CurrentServerSiloGlobals[45]);
  if ( v7 )
    v7[10] = 1;
  _InterlockedOr(Object + 84, 2u);
  v8 = (_QWORD *)*((_QWORD *)Object + 40);
  if ( v8 )
  {
    *((_QWORD *)Object + 40) = 0LL;
    v8[2] = 0LL;
    v9 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    --LODWORD(CurrentServerSiloGlobals[45].Blink);
    ObfDereferenceObject((PVOID)Object);
    v2 = 0;
  }
  _m_prefetchw(v5);
  v11 = *v5;
  v12 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (v11 & 2) != 0 || (v13 = *v5, v13 != _InterlockedCompareExchange64(v5, v12, v11)) )
    ExfReleasePushLock(&CurrentServerSiloGlobals[45].Flink);
  KeAbPostRelease((ULONG_PTR)&CurrentServerSiloGlobals[45]);
  KeLeaveCriticalRegion();
  return v2;
}
