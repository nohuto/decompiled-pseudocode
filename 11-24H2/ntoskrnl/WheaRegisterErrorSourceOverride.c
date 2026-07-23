/*
 * XREFs of WheaRegisterErrorSourceOverride @ 0x14065D170
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WheaAddErrorSource @ 0x1407C6DE0 (WheaAddErrorSource.c)
 */

__int64 __fastcall WheaRegisterErrorSourceOverride(int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  volatile signed __int32 *v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rax
  char *v10; // r14
  int v11; // esi
  signed __int32 v13[8]; // [rsp+0h] [rbp-418h] BYREF
  _DWORD v14[244]; // [rsp+20h] [rbp-3F8h] BYREF

  v3 = *a1;
  if ( (unsigned int)v3 > 0x12 || (_DWORD)v3 == 16 )
  {
    return (unsigned int)-1073741585;
  }
  else if ( *(_QWORD *)(a2 + 8)
         && *(_QWORD *)(a2 + 16)
         && *(_QWORD *)(a2 + 24)
         && *(_QWORD *)(a2 + 32)
         && *(_QWORD *)(a2 + 40) )
  {
    v7 = (volatile signed __int32 *)((char *)&WheapSourceConfigOverride + 64 * v3);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (char *)KeAbPreAcquire((__int64)v7, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64(v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapSourceConfigOverride + 8 * v3,
        v9,
        (__int64)&WheapSourceConfigOverride + 64 * v3);
    if ( v10 )
      v10[10] = 1;
    if ( *((_BYTE *)v7 + 8) )
    {
      v11 = -1073740024;
    }
    else
    {
      *((_DWORD *)v7 + 3) = *(_DWORD *)a2;
      *((_QWORD *)v7 + 2) = *(_QWORD *)(a2 + 8);
      *((_QWORD *)v7 + 3) = *(_QWORD *)(a2 + 16);
      *((_QWORD *)v7 + 4) = *(_QWORD *)(a2 + 24);
      *((_QWORD *)v7 + 5) = *(_QWORD *)(a2 + 32);
      *((_QWORD *)v7 + 6) = *(_QWORD *)(a2 + 40);
      _InterlockedOr(v13, 0);
      *((_BYTE *)v7 + 8) = 1;
      memset_0(v14, 0, 0x3CCuLL);
      v14[5] = a1[2];
      v14[6] = a1[3];
      v14[4] = a1[1];
      v14[0] = 972;
      v14[1] = 10;
      v14[2] = v3;
      v14[3] = 1;
      v14[7] = 0;
      v14[9] = 0x40000000;
      v11 = WheaAddErrorSource(v14, 0LL);
      if ( v11 < 0 )
      {
        *((_QWORD *)v7 + 2) = PdcCreateWatchdogAroundClientCall;
        *((_QWORD *)v7 + 3) = xHalPciEarlyRestore;
        *((_QWORD *)v7 + 4) = WheapDefaultErrSrcCreateRecord;
        *((_QWORD *)v7 + 5) = PdcCreateWatchdogAroundClientCall;
        *((_QWORD *)v7 + 6) = xHalTimerWatchdogStop;
        *((_QWORD *)v7 + 7) = 0LL;
      }
      else
      {
        v11 = 0;
        WheapOverrideHandler[v3] = a3;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfigOverride + 8 * v3);
    KeAbPostRelease((ULONG_PTR)&WheapSourceConfigOverride + 64 * v3);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v11;
}
