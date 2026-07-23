/*
 * XREFs of PspStorageRemoveObject @ 0x14077C498
 * Callers:
 *     PsRemoveSiloContext @ 0x140772410 (PsRemoveSiloContext.c)
 *     PsUnregisterSiloMonitor @ 0x1407795B0 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PspGetStorageArrayIfPossible @ 0x1404150B0 (PspGetStorageArrayIfPossible.c)
 */

__int64 __fastcall PspStorageRemoveObject(__int64 a1, unsigned int a2, char a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  int v7; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rdi
  char *v10; // rax
  char *v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  volatile signed __int64 *v15; // rsi
  unsigned int v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17[4]; // [rsp+28h] [rbp-20h] BYREF

  v16 = 0;
  v17[0] = 0LL;
  result = PspGetStorageArrayIfPossible(a1, a2, &v16, v17);
  v7 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = (unsigned __int64 *)(v17[0] + 16LL * v16);
    --CurrentThread->KernelApcDisable;
    v10 = (char *)KeAbPreAcquire((__int64)v9, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      v11[10] = 1;
    v12 = v9[1];
    v13 = v16;
    v14 = v17[0];
    if ( v12 )
    {
      if ( a3 || (v12 & 1) == 0 )
      {
        v12 &= ~1uLL;
        *(_QWORD *)(v17[0] + 16LL * v16 + 8) = 0LL;
      }
      else
      {
        v12 = 0LL;
        v7 = -1073741637;
      }
    }
    v15 = (volatile signed __int64 *)(v14 + 16 * v13);
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 16 * v13));
    KeAbPostRelease((ULONG_PTR)v15);
    KeLeaveCriticalRegion();
    if ( v7 >= 0 )
    {
      if ( !v12 )
        return 3221226021LL;
      if ( a4 )
        *a4 = v12;
      else
        ObfDereferenceObject((PVOID)v12);
    }
    return (unsigned int)v7;
  }
  return result;
}
