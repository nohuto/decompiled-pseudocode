/*
 * XREFs of PspStorageReplaceObject @ 0x14076CB80
 * Callers:
 *     PsReplaceSiloContext @ 0x140762870 (PsReplaceSiloContext.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x1409E3768 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageReplaceObject(__int64 a1, __int64 a2, void *a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned int v7; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // rsi
  unsigned __int64 v12; // rsi
  void *v13; // rcx
  unsigned int v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+28h] [rbp-20h] BYREF

  v14 = 0;
  v15[0] = 0LL;
  result = PspGetStorageArray(a1, a2, &v14, v15);
  v7 = result;
  if ( (int)result >= 0 )
  {
    PsReferenceSiloContext(a3);
    CurrentThread = KeGetCurrentThread();
    v9 = (unsigned __int64 *)(v15[0] + 16LL * v14);
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((__int64)v9, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v12 = v9[1];
    if ( (v12 & 1) != 0 )
    {
      v12 = 0LL;
      v7 = -1073741637;
    }
    else
    {
      v9[1] = (unsigned __int64)a3;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    if ( (v7 & 0x80000000) != 0 )
    {
      v13 = a3;
    }
    else
    {
      if ( !v12 )
      {
        if ( a4 )
          *a4 = 0LL;
        return v7;
      }
      if ( a4 )
      {
        *a4 = v12;
        return v7;
      }
      v13 = (void *)v12;
    }
    ObfDereferenceObject(v13);
    return v7;
  }
  return result;
}
