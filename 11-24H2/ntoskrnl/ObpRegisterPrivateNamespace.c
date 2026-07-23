/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x140A06750
 * Callers:
 *     NtCreatePrivateNamespace @ 0x140A05BA0 (NtCreatePrivateNamespace.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObpLookupNamespaceEntry @ 0x140A06684 (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1)
{
  unsigned int v2; // ebp
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  char *v6; // rax
  char *v7; // rsi
  __int64 v8; // rax
  __int64 *v9; // rcx
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt

  v2 = -1073741771;
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
  if ( !ObpLookupNamespaceEntry((__int64)&CurrentServerSiloGlobals[8], a1) )
  {
    v8 = (__int64)&CurrentServerSiloGlobals[*(unsigned __int8 *)(a1 + 40) + 8];
    v9 = *(__int64 **)(v8 + 8);
    if ( *v9 != v8 )
      __fastfail(3u);
    *(_QWORD *)a1 = v8;
    v2 = 0;
    *(_QWORD *)(a1 + 8) = v9;
    *v9 = a1;
    *(_QWORD *)(v8 + 8) = a1;
    ++LODWORD(CurrentServerSiloGlobals[45].Blink);
  }
  _m_prefetchw(v5);
  v10 = *v5;
  v11 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (v10 & 2) != 0 || (v12 = *v5, v12 != _InterlockedCompareExchange64(v5, v11, v10)) )
    ExfReleasePushLock(&CurrentServerSiloGlobals[45].Flink);
  KeAbPostRelease((ULONG_PTR)&CurrentServerSiloGlobals[45]);
  KeLeaveCriticalRegion();
  return v2;
}
