/*
 * XREFs of SmcStoreSlotReserve @ 0x14079E1A8
 * Callers:
 *     SmcStoreCreate @ 0x14079D7E4 (SmcStoreCreate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SmAllocEx @ 0x14044AB68 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     SmcStorePlacementGet @ 0x14079DC30 (SmcStorePlacementGet.c)
 *     SmcStoreSlotAbort @ 0x14079E00C (SmcStoreSlotAbort.c)
 */

unsigned __int64 __fastcall SmcStoreSlotReserve(__int64 a1, __int64 a2, ULONG a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  struct _PRIVILEGE_SET *v7; // r14
  void *v8; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  int v13; // eax

  v4 = ((unsigned __int64)*(unsigned int *)(a1 + 8) + 31) >> 5;
  v5 = 0LL;
  v6 = SmAllocEx(4 * v4, 1917021555LL, -1);
  v7 = (struct _PRIVILEGE_SET *)v6;
  if ( !v6 )
    return v5;
  v8 = (void *)v6;
  if ( v4 )
  {
    if ( (v6 & 4) != 0 )
    {
      *(_DWORD *)v6 = -1;
      if ( !--v4 )
        goto LABEL_8;
      v8 = (void *)(v6 + 4);
    }
    memset(v8, 0xFFu, 8 * (v4 >> 1));
    if ( (v4 & 1) != 0 )
      *((_DWORD *)v8 + v4 - 1) = -1;
  }
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  v10 = a1 + 168;
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire(a1 + 160, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 160), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 160), (__int64)v11, a1 + 160);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  while ( v10 < a1 + 552 )
  {
    if ( *(_DWORD *)v10 == -1 )
    {
      v13 = *(_DWORD *)(v10 + 4);
      if ( (v13 & 4) == 0 )
      {
        *(_QWORD *)(v10 + 8) = v7;
        *(_DWORD *)(v10 + 4) = v13 | 4;
        v7 = 0LL;
        if ( (int)SmcStorePlacementGet(a1, a3, v10) < 0 )
        {
          if ( v10 )
          {
            SmcStoreSlotAbort(a1, v10, 1);
            return v5;
          }
        }
        else
        {
          v5 = v10;
        }
        break;
      }
    }
    v10 += 24LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 160));
  KeAbPostRelease(a1 + 160);
  KeLeaveCriticalRegion();
  if ( v7 )
    CmSiFreeMemory(v7);
  return v5;
}
