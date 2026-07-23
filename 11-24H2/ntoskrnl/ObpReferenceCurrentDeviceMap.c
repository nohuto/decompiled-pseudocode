/*
 * XREFs of ObpReferenceCurrentDeviceMap @ 0x14096D6B0
 * Callers:
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x14096D0C0 (ObQueryDeviceMapInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     PsGetThreadServerSilo @ 0x1403C24D0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     SeGetTokenDeviceMap @ 0x14096D9AC (SeGetTokenDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14096DC68 (ObpSetCurrentProcessDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x14096DDE4 (ObDereferenceDeviceMap.c)
 */

__int64 __fastcall ObpReferenceCurrentDeviceMap(__int16 a1, signed __int64 **a2)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Process; // rdi
  __int64 ProcessServerSilo; // r15
  __int64 ThreadServerSilo; // r12
  bool v8; // r14
  bool v9; // r13
  signed __int64 v10; // rcx
  struct _KTHREAD *v11; // r15
  char *v12; // r13
  _QWORD *p_Lock; // rbx
  signed __int64 *ServerSiloGlobals; // rbx
  signed __int64 v15; // rdx
  signed __int64 v16; // rax
  volatile signed __int64 *v17; // rdi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v19; // rcx
  signed __int64 *p_Blink; // rsi
  char *v21; // rdi
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF

  *a2 = 0LL;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
  v8 = ProcessServerSilo != ThreadServerSilo;
  v9 = ProcessServerSilo != ThreadServerSilo;
  LOBYTE(v10) = (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0;
  if ( ((unsigned __int8)v10 & ((a1 & 0x800) == 0)) != 0
    && ProcessServerSilo == ThreadServerSilo
    && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = (char *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v12,
        (__int64)&CurrentThread[1].WaitBlockList);
    if ( v12 )
      v12[10] = 1;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      p_Lock = &CurrentThread[1].WaitBlock[1].Thread->Header.Lock;
      if ( !p_Lock )
        p_Lock = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(p_Lock, 0x746C6644u);
    }
    else
    {
      p_Lock = 0LL;
    }
    PspUnlockThreadSecurityShared((__int64)CurrentThread);
    v9 = v8;
    if ( p_Lock )
    {
      if ( p_Lock[3] == 999LL )
      {
        v9 = 1;
        ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
        goto LABEL_39;
      }
      v26 = 0LL;
      if ( (int)SeGetTokenDeviceMap(p_Lock, &v26) >= 0 )
        v3 = v26;
      ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
      if ( v3 )
        return v3;
    }
  }
  if ( v9 )
  {
LABEL_39:
    ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals(ThreadServerSilo);
    goto LABEL_19;
  }
  ServerSiloGlobals = (signed __int64 *)(Process + 792);
LABEL_19:
  *a2 = ServerSiloGlobals;
  _m_prefetchw(ServerSiloGlobals);
  v15 = *ServerSiloGlobals;
  if ( (*ServerSiloGlobals & 0xF) != 0 )
  {
    do
    {
      v10 = v15 - 1;
      v16 = _InterlockedCompareExchange64(ServerSiloGlobals, v15 - 1, v15);
      if ( v15 == v16 )
        break;
      v15 = v16;
    }
    while ( (v16 & 0xF) != 0 );
  }
  v17 = (volatile signed __int64 *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v15 & 0xF) == 0 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v19 = KeGetCurrentThread();
    p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
    --v19->SpecialApcDisable;
    v21 = (char *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL);
    if ( _InterlockedCompareExchange64(p_Blink, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(p_Blink, 0, v21, (__int64)p_Blink);
    if ( v21 )
      v21[10] = 1;
    v17 = (volatile signed __int64 *)(*ServerSiloGlobals & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd64(v17 + 30, 0xFuLL) <= 0 )
        __fastfail(0xEu);
      _m_prefetchw(ServerSiloGlobals);
      v22 = *ServerSiloGlobals;
      while ( (unsigned __int64)(v22 & 0xF) + 14 <= 0xF
           && v17 == (volatile signed __int64 *)(v22 & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange64(ServerSiloGlobals, v22 + 14, v22);
        if ( v23 == v22 )
          goto LABEL_33;
      }
      ObDereferenceDeviceMap((PVOID)v17);
    }
LABEL_33:
    if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Blink);
    KeAbPostRelease((ULONG_PTR)p_Blink);
    KeLeaveGuardedRegion();
  }
  if ( v17 || v9 )
    return (__int64)v17;
  *a2 = 0LL;
  return ObpSetCurrentProcessDeviceMap(v10);
}
