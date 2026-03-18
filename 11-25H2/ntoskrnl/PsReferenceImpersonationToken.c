/*
 * XREFs of PsReferenceImpersonationToken @ 0x14094BF60
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  signed __int64 *p_WaitBlockList; // rbp
  struct _KTHREAD *CurrentThread; // r12
  __int64 *v11; // rdi
  void *v12; // rdi
  BOOLEAN v13; // al

  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
    return 0LL;
  p_WaitBlockList = (signed __int64 *)&Thread[1].WaitBlockList;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL);
  if ( _InterlockedCompareExchange64(p_WaitBlockList, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(p_WaitBlockList, 0, v11, (unsigned __int64)p_WaitBlockList);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v12 = Thread[1].WaitBlock[1].Thread;
    if ( v12 )
    {
      v13 = 0;
    }
    else
    {
      v12 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      v13 = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 2)) & 1;
    }
    *CopyOnOpen = v13;
    ObfReferenceObjectWithTag(v12, 0x746C6644u);
    *ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
    *EffectiveOnly = (*(_BYTE *)(&Thread[1].MiscFlags + 1) & 4) != 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_WaitBlockList);
  KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v12;
}
