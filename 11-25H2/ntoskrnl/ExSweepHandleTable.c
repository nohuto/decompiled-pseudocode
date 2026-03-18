/*
 * XREFs of ExSweepHandleTable @ 0x140972794
 * Callers:
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x1409716EC (ObInitProcess.c)
 *     ObKillProcess @ 0x140972730 (ObKillProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExSweepHandleTable(struct _KPROCESS *a1, __int64 a2, unsigned __int8 a3)
{
  char v3; // r13
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v7; // rbx
  int v8; // r12d
  __int64 *v9; // rsi
  char v10; // r9
  __int64 v11; // r8
  int v12; // eax
  __int64 *v13; // rax
  __int64 *v14; // rsi
  __int64 result; // rax
  char v16; // [rsp+30h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-70h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 0;
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KeStackAttachProcess(a1, &ApcState);
    v3 = 1;
    v16 = 1;
  }
  --CurrentThread->KernelApcDisable;
  v7 = 4LL;
  v8 = 0;
  v9 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, 4LL);
  if ( v9 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v9);
        v11 = *v9;
        if ( ((unsigned __int8)*v9 & (unsigned __int8)v10) != 0 )
          break;
        if ( v11 )
        {
          ExpBlockOnLockedHandleEntry(a2, v9, v11);
          v10 = 1;
        }
        else
        {
LABEL_8:
          v7 += 4LL;
          v9 += 2;
          if ( (v7 & 0x3FF) == 0 )
          {
            v7 += 4LL;
            v9 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, v7);
            if ( !v9 )
            {
              v3 = v16;
              goto LABEL_11;
            }
          }
        }
      }
      if ( v11 == _InterlockedCompareExchange64(v9, v11 - 1, v11) )
      {
        v12 = ObCloseHandleTableEntry(a2, v9, a1, v7, a3, v10);
        --CurrentThread->KernelApcDisable;
        v10 = 1;
        if ( v12 >= 0 )
          ++v8;
        goto LABEL_8;
      }
    }
  }
LABEL_11:
  v13 = KeAbPreAcquire(a2 + 64, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 64), v13, a2 + 64);
  if ( v14 )
    *((_BYTE *)v14 + 10) = 1;
  *(_DWORD *)(a2 + 88) -= v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64));
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 == 1 )
    return KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  return result;
}
