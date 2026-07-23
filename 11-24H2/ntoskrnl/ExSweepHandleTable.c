/*
 * XREFs of ExSweepHandleTable @ 0x1409DFA8C
 * Callers:
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x14094D010 (ObInitProcess.c)
 *     ObKillProcess @ 0x1409DFA28 (ObKillProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
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
  char *v13; // rax
  char *v14; // rsi
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // [rsp+30h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-70h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 0;
  v18 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KeStackAttachProcess(a1, &ApcState);
    v3 = 1;
    v18 = 1;
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
              v3 = v18;
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
  v13 = (char *)KeAbPreAcquire(a2 + 64, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 64), v13, a2 + 64);
  if ( v14 )
    v14[10] = 1;
  *(_DWORD *)(a2 + 88) -= v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64));
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread();
  if ( v3 == 1 )
    return KiUnstackDetachProcess((__int64)&ApcState, 0, v16, v17);
  return result;
}
