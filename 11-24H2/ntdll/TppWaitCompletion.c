/*
 * XREFs of TppWaitCompletion @ 0x18001FE00
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppDirectExecuteCallback @ 0x18006D650 (TppDirectExecuteCallback.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppFreeWait @ 0x1800204A0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x1800204F0 (TppTimerpFree.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppSetupNextWait @ 0x18006A8C0 (TppSetupNextWait.c)
 *     TppETWTimerCancelled @ 0x18006AA90 (TppETWTimerCancelled.c)
 *     TppUpdateSubQueueTimer @ 0x18006C700 (TppUpdateSubQueueTimer.c)
 *     TppPHDelete @ 0x1800E3BF0 (TppPHDelete.c)
 *     NtWaitForAlertByThreadId @ 0x1801658E0 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _TEB *__fastcall TppWaitCompletion(__int64 a1, __int64 i, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rbp
  char *SchedulerSharedDataSlot; // r8
  volatile signed __int32 **v8; // rcx
  char v9; // al
  __int64 v10; // r14
  bool v11; // di
  int v12; // edi
  signed int v13; // edi
  char v14; // al
  void (__fastcall *v15)(__int64); // rax
  __int64 v17; // r15
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r8
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (volatile signed __int32 *)(a3 + 240);
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v8 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * (unsigned int)i];
      if ( !*v8 )
      {
        if ( v8 )
          *v8 = v4;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v4, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v4);
  v9 = *(_BYTE *)(a3 + 354);
  v10 = *(_QWORD *)(a3 + 144) + 112LL;
  v11 = (v9 & 2) != 0;
  if ( (v9 & 1) != 0 )
  {
    v17 = 8LL;
    if ( (v9 & 2) == 0 )
      v17 = 128LL;
    v18 = v10 + v17;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(128LL, i, SchedulerSharedDataSlot, a4) )
      v19 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v19 = 2147353478LL;
    if ( *(_BYTE *)v19 )
      TppETWTimerCancelled(v18, a3);
    RtlAcquireSRWLockExclusive(v10);
    if ( *(_BYTE *)(a3 + 352) )
    {
      TppPHDelete(v18 + 16, a3 + 248);
      TppPHDelete(v18 + 8, a3 + 288);
      TppUpdateSubQueueTimer(v18, v11);
      *(_BYTE *)(a3 + 352) = 0;
      RtlReleaseSRWLockExclusive(v10);
      *(_DWORD *)(a3 + 348) = 0;
      v12 = 0;
      *(_QWORD *)(a3 + 328) = 0LL;
      *(_BYTE *)(a3 + 354) = 0;
    }
    else
    {
      RtlReleaseSRWLockExclusive(v10);
      *(_BYTE *)(a3 + 354) |= 4u;
      v23[1] = NtCurrentTeb()->ClientId.UniqueThread;
      _m_prefetchw((const void *)(a3 + 336));
      v21 = *(_QWORD *)(a3 + 336);
      do
      {
        v22 = v21;
        v23[0] = v21;
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 336), (signed __int64)v23, v21);
      }
      while ( v21 != v22 );
      RtlReleaseSRWLockExclusive(v4);
      NtWaitForAlertByThreadId(a3 + 336, 0LL);
      RtlAcquireSRWLockExclusive(v4);
      v12 = 1;
    }
  }
  else
  {
    *(_QWORD *)(a3 + 328) = 0LL;
    v12 = 1;
  }
  v13 = v12 - 1;
  if ( (*(_BYTE *)(a3 + 464) & 4) == 0 )
    TppBarrierAdjust((volatile signed __int64 *)(a3 + 56), 1, 0);
  v14 = *(_BYTE *)(a3 + 464);
  *(_QWORD *)(a3 + 360) = 0LL;
  if ( (v14 & 1) != 0 )
  {
    v20 = a3 + 384;
    if ( (v14 & 2) == 0 )
      v20 = 0LL;
    v13 += TppSetupNextWait(a3, *(_QWORD *)(a3 + 376), v20);
  }
  *(_BYTE *)(a3 + 464) = 0;
  if ( v13 > 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)a3, v13);
    RtlReleaseSRWLockExclusive(v4);
  }
  else
  {
    RtlReleaseSRWLockExclusive(v4);
    if ( v13 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v13) == -v13 )
    {
      v15 = **(void (__fastcall ***)(__int64))(a3 + 8);
      if ( (char *)v15 == (char *)TppFreeWait )
      {
        TppFreeWait(a3);
      }
      else if ( (char *)v15 == (char *)TppTimerpFree )
      {
        TppTimerpFree(a3);
      }
      else
      {
        v15(a3);
      }
    }
  }
  return TppExecuteWaitCallback(a1, a3, 0);
}
