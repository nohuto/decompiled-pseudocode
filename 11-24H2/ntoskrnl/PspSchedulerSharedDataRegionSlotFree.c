/*
 * XREFs of PspSchedulerSharedDataRegionSlotFree @ 0x1408A7904
 * Callers:
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSwappablePageDereference @ 0x140268ED0 (KeSwappablePageDereference.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspSchedulerSharedDataRegionSlotFree(__int64 a1)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  unsigned int v5; // r8d
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r14d
  _QWORD *v9; // rax
  _QWORD *v10; // r15
  _BYTE *v11; // rdx

  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    v2 = *(_QWORD *)(a1 + 1760);
    v3 = 0;
    if ( v2 )
    {
      *(_QWORD *)(a1 + 800) = 0LL;
      KeSwappablePageDereference(*(_QWORD *)(a1 + 1128));
      v5 = *(_DWORD *)(a1 + 1124);
      v6 = *(_QWORD *)(a1 + 1128) - v2;
      *(_QWORD *)(a1 + 1128) = 0LL;
      *(_DWORD *)(a1 + 1124) = 0;
      *(_QWORD *)(a1 + 1760) = 0LL;
      CurrentThread = KeGetCurrentThread();
      v8 = (v5 >> 6) + (((int)v6 / 80) << 6);
      --CurrentThread->KernelApcDisable;
      v9 = KeAbPreAcquire(v2 + 200, 0LL);
      v10 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 200), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 200), (__int64)v9, v2 + 200);
      if ( v10 )
        *((_BYTE *)v10 + 10) = 1;
      v11 = (_BYTE *)(*(_QWORD *)(v2 + 216) + ((unsigned __int64)v8 >> 3));
      *v11 &= ~(1 << (v8 & 7));
      if ( *(_DWORD *)(v2 + 224) > v8 )
        *(_DWORD *)(v2 + 224) = v8;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 200));
      KeAbPostRelease(v2 + 200);
      KeLeaveCriticalRegion();
      ObfDereferenceObjectWithTag((PVOID)v2, 0x61537350u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
