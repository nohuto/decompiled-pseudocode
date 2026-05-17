/*
 * XREFs of TppWaitCompletion @ 0x180041270
 * Callers:
 *     TppDirectExecuteCallback @ 0x18003BD60 (TppDirectExecuteCallback.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppUpdateSubQueueTimer @ 0x18003FA60 (TppUpdateSubQueueTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppFreeWait @ 0x180041EB0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x180041F00 (TppTimerpFree.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppSetupNextWait @ 0x1800D70F0 (TppSetupNextWait.c)
 *     TppPHDelete @ 0x1800E08A0 (TppPHDelete.c)
 *     TppETWTimerCancelled @ 0x1801134B0 (TppETWTimerCancelled.c)
 *     NtWaitForAlertByThreadId @ 0x180166E70 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _PEB *__fastcall TppWaitCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rbp
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  volatile signed __int32 **v8; // rcx
  char v9; // al
  volatile signed __int32 *v10; // r14
  char v11; // di
  int v12; // edi
  signed int v13; // edi
  char v14; // al
  void (__fastcall *v15)(__int64); // rax
  __int64 v17; // r15
  unsigned __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r8
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (volatile signed __int32 *)(a3 + 240);
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v8 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*v8 )
      {
        if ( v8 )
          *v8 = v3;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v3, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v3);
  v9 = *(_BYTE *)(a3 + 354);
  v10 = (volatile signed __int32 *)(*(_QWORD *)(a3 + 144) + 112LL);
  v11 = (v9 & 2) != 0;
  if ( (v9 & 1) != 0 )
  {
    v17 = 2LL;
    if ( (v9 & 2) == 0 )
      v17 = 32LL;
    v18 = (unsigned __int64)&v10[v17];
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
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
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)v10);
      *(_DWORD *)(a3 + 348) = 0;
      v12 = 0;
      *(_QWORD *)(a3 + 328) = 0LL;
      *(_BYTE *)(a3 + 354) = 0;
    }
    else
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)v10);
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
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)v3);
      NtWaitForAlertByThreadId(a3 + 336, 0LL);
      RtlAcquireSRWLockExclusive(v3);
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
    TppBarrierAdjust(a3 + 56, 1LL, 0LL);
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
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v3);
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v3);
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
