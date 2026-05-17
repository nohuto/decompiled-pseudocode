/*
 * XREFs of TppBarrierAdjust @ 0x180011D50
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001F480 (TppExecuteWaitCallback.c)
 *     TppWaitCompletion @ 0x18001FE00 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     TppWorkCancelPendingCallbacks @ 0x180022AB0 (TppWorkCancelPendingCallbacks.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     TppWorkUnposted @ 0x180068B90 (TppWorkUnposted.c)
 *     TppJobpExecuteCallback @ 0x180068EC0 (TppJobpExecuteCallback.c)
 *     TpWaitForAlpcCompletion @ 0x1800696F0 (TpWaitForAlpcCompletion.c)
 *     TpReleaseCleanupGroupMembers @ 0x180069760 (TpReleaseCleanupGroupMembers.c)
 *     TpWaitForJobNotification @ 0x180069C80 (TpWaitForJobNotification.c)
 *     TpCancelAsyncIoOperation @ 0x18006A1B0 (TpCancelAsyncIoOperation.c)
 *     TppCancelWait @ 0x18006ADE0 (TppCancelWait.c)
 *     TpWaitForTimer @ 0x18006C110 (TpWaitForTimer.c)
 *     TpReleaseWait @ 0x18006E4C0 (TpReleaseWait.c)
 *     TppWorkWait @ 0x18006ED50 (TppWorkWait.c)
 *     TpStartAsyncIoOperation @ 0x1800E67A0 (TpStartAsyncIoOperation.c)
 *     TpDisassociateCallback @ 0x1800F7670 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x1800F9460 (TpWaitForIoCompletion.c)
 *     TppIopCancelPendingCallbacks @ 0x18015C460 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180162AC0 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x1801658E0 (NtWaitForAlertByThreadId.c)
 */

struct _TEB *__fastcall TppBarrierAdjust(volatile signed __int64 *a1, int a2, int a3)
{
  char v3; // r15
  char v4; // bp
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  volatile signed __int64 *v9; // rbp
  signed __int64 v10; // rax
  char *SchedulerSharedDataSlot; // rcx
  __int64 v12; // rbp
  unsigned int i; // edx
  char *v14; // rbx
  signed __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  volatile signed __int32 *v17; // r8
  void *v18; // r9
  unsigned int j; // ecx
  bool v20; // zf
  struct _TEB *result; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  _QWORD *v24; // rbx
  volatile signed __int64 *v25; // rsi
  signed __int64 v26; // rax
  char *v27; // rcx
  __int64 v28; // rsi
  char *v29; // rdi
  _QWORD *v30; // rdi
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  __int64 v33; // rdx
  signed __int64 v34; // rcx
  signed __int64 v35; // rtt
  volatile signed __int64 *v36; // rbp
  __int64 v37; // rcx
  __int64 v38; // rax
  signed __int64 v39; // rax
  __int64 v40; // rdx
  signed __int64 v41; // rcx
  signed __int64 v42; // rdx
  signed __int64 v43; // rtt
  volatile signed __int64 *v44; // r14
  unsigned __int64 v45; // r8
  _QWORD *v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rax
  signed __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  signed __int64 v54; // rax
  signed __int64 v55; // rax
  unsigned __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD v58[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v59[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v60; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v60 = 0LL;
  v4 = 0;
  _m_prefetchw((const void *)a1);
  v7 = *a1;
  v8 = a2;
  do
  {
    if ( v4 )
    {
      v9 = a1 + 1;
      v10 = _InterlockedCompareExchange64(a1 + 1, 0LL, 1LL);
      if ( v10 != 1 )
      {
        do
        {
          v40 = 3LL;
          v41 = v10 & 6;
          if ( v41 != 2 )
            v40 = -1LL;
          v42 = v10 + v40;
          v43 = v10;
          v10 = _InterlockedCompareExchange64(v9, v42, v10);
        }
        while ( v43 != v10 );
        if ( v41 == 2 )
        {
          v44 = a1 + 1;
          while ( 1 )
          {
            while ( (v42 & 1) != 0 )
            {
              v55 = _InterlockedCompareExchange64(v9, v42 - 4, v42);
              v20 = v42 == v55;
              v42 = v55;
              if ( v20 )
                goto LABEL_4;
            }
            v45 = v42 & 0xFFFFFFFFFFFFFFF0uLL;
            v46 = (_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0uLL);
            v47 = *(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( !v47 )
            {
              do
              {
                v57 = v46;
                v46 = (_QWORD *)*v46;
                v46[2] = v57;
                v47 = v46[1];
              }
              while ( !v47 );
              if ( v46 != (_QWORD *)v45 )
                *(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v47;
            }
            if ( (*(_DWORD *)(v47 + 36) & 1) != 0 )
            {
              v48 = *(_QWORD *)(v47 + 16);
              if ( v48 )
                break;
            }
            v44 = 0LL;
            v49 = _InterlockedCompareExchange64(v9, 0LL, v42);
            v20 = v42 == v49;
            v42 = v49;
            if ( v20 )
              goto LABEL_70;
          }
          *(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v48;
          *(_QWORD *)(v47 + 16) = 0LL;
          _InterlockedAnd64(v9, 0xFFFFFFFFFFFFFFFBuLL);
          do
          {
LABEL_70:
            v52 = *(_QWORD *)(v47 + 16);
            v53 = *(_QWORD *)(v47 + 24);
            _interlockedbittestandset((volatile signed __int32 *)(v47 + 36), 2u);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)(v47 + 36), 1u) )
              ZwAlertThreadByThreadIdEx(v53, v44, v45, v46);
            v47 = v52;
          }
          while ( v52 );
        }
      }
LABEL_4:
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v12 = (unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL;
        for ( i = 0; i < 8; ++i )
        {
          v14 = &SchedulerSharedDataSlot[8 * i];
          if ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) == v12 )
          {
            if ( v14 )
            {
              *v14 |= 2u;
              if ( v14[7] < 0 )
              {
                v58[1] = 0LL;
                v58[0] = (v14 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
                NtSetInformationThread(-2LL, 56LL, v58);
              }
              *(_QWORD *)v14 = 0LL;
            }
            break;
          }
        }
      }
      v4 = 0;
    }
    else if ( v3 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v3 = 0;
    }
    v15 = (v8 + v7) & 0xFFFFFFFFFFFFFFFLL;
    v16 = (v8 + v7) ^ (v7 ^ (v8 + v7)) & 0xF000000000000000uLL;
    if ( v15 == 0 && ((v7 >> 60) & 8) != 0 )
    {
      v17 = (volatile signed __int32 *)(a1 + 1);
      v16 &= ~0x8000000000000000uLL;
      v4 = 1;
      v18 = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v18 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v15 = (signed __int64)v18 + 8 * j;
          if ( !*(_QWORD *)v15 )
          {
            if ( v15 )
              *(_QWORD *)v15 = v17;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v17, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(a1 + 1);
    }
    else if ( a3 && v15 )
    {
      v16 |= 0x8000000000000000uLL;
      v3 = 1;
      RtlAcquireSRWLockShared(a1 + 1);
    }
    result = (struct _TEB *)_InterlockedCompareExchange64(a1, v16, v7);
    v20 = v7 == (_QWORD)result;
    v7 = (unsigned __int64)result;
    v22 = 0x7FFFFFFFFFFFFFFCLL;
    v23 = 0x7FFFFFFFFFFFFFFFLL;
  }
  while ( !v20 );
  if ( v4 )
  {
    v24 = (_QWORD *)*((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = 0LL;
    v25 = a1 + 1;
    v26 = _InterlockedCompareExchange64(v25, 0LL, 1LL);
    if ( v26 != 1 )
    {
      do
      {
        v33 = 3LL;
        v34 = v26 & 6;
        if ( v34 != 2 )
          v33 = -1LL;
        v15 = v26 + v33;
        v35 = v26;
        v26 = _InterlockedCompareExchange64(v25, v15, v26);
      }
      while ( v35 != v26 );
      if ( v34 == 2 )
      {
        v36 = v25;
        while ( 1 )
        {
          while ( (v15 & 1) != 0 )
          {
            v54 = _InterlockedCompareExchange64(v25, v15 - 4, v15);
            v20 = v15 == v54;
            v15 = v54;
            if ( v20 )
              goto LABEL_25;
          }
          v23 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v22 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v37 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v37 )
          {
            do
            {
              v56 = v22;
              v22 = *(_QWORD *)v22;
              *(_QWORD *)(v22 + 16) = v56;
              v37 = *(_QWORD *)(v22 + 8);
            }
            while ( !v37 );
            if ( v22 != v23 )
              *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v37;
          }
          if ( (*(_DWORD *)(v37 + 36) & 1) != 0 )
          {
            v38 = *(_QWORD *)(v37 + 16);
            if ( v38 )
              break;
          }
          v36 = 0LL;
          v39 = _InterlockedCompareExchange64(v25, 0LL, v15);
          v20 = v15 == v39;
          v15 = v39;
          if ( v20 )
            goto LABEL_65;
        }
        *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v38;
        *(_QWORD *)(v37 + 16) = 0LL;
        _InterlockedAnd64(v25, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_65:
          v50 = *(_QWORD *)(v37 + 16);
          v51 = *(_QWORD *)(v37 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v37 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v37 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v51, v36, v22, v23);
          v37 = v50;
        }
        while ( v50 );
      }
    }
LABEL_25:
    result = NtCurrentTeb();
    v27 = (char *)result->SchedulerSharedDataSlot;
    if ( v27 )
    {
      v22 = 0x7FFFFFFFFFFFFFFCLL;
      v15 = 0LL;
      v28 = (unsigned __int64)v25 & 0x7FFFFFFFFFFFFFFCLL;
      while ( (unsigned int)v15 < 8 )
      {
        v29 = &v27[8 * (unsigned int)v15];
        result = (struct _TEB *)(*(_QWORD *)v29 & 0x7FFFFFFFFFFFFFFCLL);
        if ( result == (struct _TEB *)v28 )
        {
          if ( v29 )
          {
            *v29 |= 2u;
            if ( v29[7] < 0 )
            {
              v59[1] = 0LL;
              v59[0] = (v29 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
              result = (struct _TEB *)NtSetInformationThread(-2LL, 56LL, v59);
            }
            *(_QWORD *)v29 = 0LL;
          }
          break;
        }
        v15 = (unsigned int)(v15 + 1);
      }
    }
    if ( v24 )
    {
      do
      {
        v30 = (_QWORD *)*v24;
        result = (struct _TEB *)ZwAlertThreadByThreadId(v24[1], v15, v22, v23);
        v24 = v30;
      }
      while ( v30 );
    }
  }
  else if ( v3 )
  {
    *((_QWORD *)&v60 + 1) = NtCurrentTeb()->ClientId.UniqueThread;
    _m_prefetchw((const void *)(a1 + 2));
    v31 = *((_QWORD *)a1 + 2);
    do
    {
      v32 = v31;
      *(_QWORD *)&v60 = v31;
      v31 = _InterlockedCompareExchange64(a1 + 2, (signed __int64)&v60, v31);
    }
    while ( v31 != v32 );
    RtlReleaseSRWLockShared(a1 + 1);
    return (struct _TEB *)NtWaitForAlertByThreadId(a1 + 2, 0LL);
  }
  return result;
}
