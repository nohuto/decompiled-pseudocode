/*
 * XREFs of TppBarrierAdjust @ 0x18003E750
 * Callers:
 *     TppExecuteWaitCallback @ 0x18004BE80 (TppExecuteWaitCallback.c)
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     TppWorkCancelPendingCallbacks @ 0x18004F4B0 (TppWorkCancelPendingCallbacks.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     TppWorkUnposted @ 0x180084900 (TppWorkUnposted.c)
 *     TppJobpExecuteCallback @ 0x180084A50 (TppJobpExecuteCallback.c)
 *     TpWaitForAlpcCompletion @ 0x180085280 (TpWaitForAlpcCompletion.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800852F0 (TpReleaseCleanupGroupMembers.c)
 *     TpWaitForJobNotification @ 0x180086370 (TpWaitForJobNotification.c)
 *     TpCancelAsyncIoOperation @ 0x1800868A0 (TpCancelAsyncIoOperation.c)
 *     TppCancelWait @ 0x1800876C0 (TppCancelWait.c)
 *     TpWaitForTimer @ 0x1800889F0 (TpWaitForTimer.c)
 *     TpReleaseWait @ 0x18008ADA0 (TpReleaseWait.c)
 *     TppWorkWait @ 0x18008B630 (TppWorkWait.c)
 *     TpStartAsyncIoOperation @ 0x1800E1C50 (TpStartAsyncIoOperation.c)
 *     TpDisassociateCallback @ 0x1800F1DC0 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x1800F4030 (TpWaitForIoCompletion.c)
 *     TppIopCancelPendingCallbacks @ 0x18015A820 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadId @ 0x180160E60 (ZwAlertThreadByThreadId.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180160E80 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x180163CA0 (NtWaitForAlertByThreadId.c)
 */

int __fastcall TppBarrierAdjust(_RTL_SRWLOCK *a1, int a2, int a3)
{
  char v3; // r15
  char v4; // bp
  unsigned __int64 Value; // rdi
  __int64 v8; // r12
  _RTL_SRWLOCK *v9; // rbp
  signed __int64 v10; // rax
  char *SchedulerSharedDataSlot; // rcx
  __int64 v12; // rbp
  unsigned int i; // edx
  char *v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  volatile signed __int32 *v17; // r8
  char *v18; // r9
  unsigned int j; // ecx
  volatile signed __int32 **v20; // rdx
  bool v21; // zf
  struct _TEB *v22; // rax
  unsigned __int64 v23; // rbx
  _RTL_SRWLOCK *v24; // rsi
  signed __int64 v25; // rax
  char *v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // rsi
  char *v29; // rdi
  unsigned __int64 v30; // rdi
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  __int64 v33; // rdx
  signed __int64 v34; // rcx
  signed __int64 v35; // rdx
  signed __int64 v36; // rtt
  _RTL_SRWLOCK *v37; // rbp
  unsigned __int64 v38; // r9
  _QWORD *v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  signed __int64 v42; // rax
  __int64 v43; // rdx
  signed __int64 v44; // rcx
  signed __int64 v45; // rdx
  signed __int64 v46; // rtt
  _RTL_SRWLOCK *v47; // r14
  unsigned __int64 v48; // r8
  _QWORD *v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rax
  signed __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  signed __int64 v57; // rax
  signed __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD v62[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v64; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v64 = 0LL;
  v4 = 0;
  _m_prefetchw(a1);
  Value = a1->Value;
  v8 = a2;
  do
  {
    if ( v4 )
    {
      v9 = a1 + 1;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[1], 0LL, 1LL);
      if ( v10 != 1 )
      {
        do
        {
          v43 = 3LL;
          v44 = v10 & 6;
          if ( v44 != 2 )
            v43 = -1LL;
          v45 = v10 + v43;
          v46 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v45, v10);
        }
        while ( v46 != v10 );
        if ( v44 == 2 )
        {
          v47 = a1 + 1;
          while ( 1 )
          {
            while ( (v45 & 1) != 0 )
            {
              v58 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v45 - 4, v45);
              v21 = v45 == v58;
              v45 = v58;
              if ( v21 )
                goto LABEL_4;
            }
            v48 = v45 & 0xFFFFFFFFFFFFFFF0uLL;
            v49 = (_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0uLL);
            v50 = *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( !v50 )
            {
              do
              {
                v60 = v49;
                v49 = (_QWORD *)*v49;
                v49[2] = v60;
                v50 = v49[1];
              }
              while ( !v50 );
              if ( v49 != (_QWORD *)v48 )
                *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v50;
            }
            if ( (*(_DWORD *)(v50 + 36) & 1) != 0 )
            {
              v51 = *(_QWORD *)(v50 + 16);
              if ( v51 )
                break;
            }
            v47 = 0LL;
            v52 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, v45);
            v21 = v45 == v52;
            v45 = v52;
            if ( v21 )
              goto LABEL_70;
          }
          *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v51;
          *(_QWORD *)(v50 + 16) = 0LL;
          _InterlockedAnd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFBuLL);
          do
          {
LABEL_70:
            v55 = *(_QWORD *)(v50 + 16);
            v56 = *(_QWORD *)(v50 + 24);
            _interlockedbittestandset((volatile signed __int32 *)(v50 + 36), 2u);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)(v50 + 36), 1u) )
              ZwAlertThreadByThreadIdEx(v56, v47, v48, v49);
            v50 = v55;
          }
          while ( v55 );
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
                v62[1] = 0LL;
                v62[0] = (v14 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
                NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, v62, 0x10u);
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
    v15 = (v8 + Value) & 0xFFFFFFFFFFFFFFFLL;
    v16 = (v8 + Value) ^ (Value ^ (v8 + Value)) & 0xF000000000000000uLL;
    if ( v15 == 0 && ((Value >> 60) & 8) != 0 )
    {
      v17 = (volatile signed __int32 *)&a1[1];
      v16 &= ~0x8000000000000000uLL;
      v4 = 1;
      v18 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v18 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v20 = (volatile signed __int32 **)&v18[8 * j];
          if ( !*v20 )
          {
            if ( v20 )
              *v20 = v17;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v17, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(&a1[1]);
    }
    else if ( a3 && v15 )
    {
      v16 |= 0x8000000000000000uLL;
      v3 = 1;
      RtlAcquireSRWLockShared(a1 + 1);
    }
    v22 = (struct _TEB *)_InterlockedCompareExchange64((volatile signed __int64 *)a1, v16, Value);
    v21 = Value == (_QWORD)v22;
    Value = (unsigned __int64)v22;
  }
  while ( !v21 );
  if ( v4 )
  {
    v23 = a1[2].Value;
    a1[2].Value = 0LL;
    v24 = a1 + 1;
    v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, 0LL, 1LL);
    if ( v25 != 1 )
    {
      do
      {
        v33 = 3LL;
        v34 = v25 & 6;
        if ( v34 != 2 )
          v33 = -1LL;
        v35 = v25 + v33;
        v36 = v25;
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, v35, v25);
      }
      while ( v36 != v25 );
      if ( v34 == 2 )
      {
        v37 = v24;
        while ( 1 )
        {
          while ( (v35 & 1) != 0 )
          {
            v57 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, v35 - 4, v35);
            v21 = v35 == v57;
            v35 = v57;
            if ( v21 )
              goto LABEL_25;
          }
          v38 = v35 & 0xFFFFFFFFFFFFFFF0uLL;
          v39 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0uLL);
          v40 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v40 )
          {
            do
            {
              v59 = v39;
              v39 = (_QWORD *)*v39;
              v39[2] = v59;
              v40 = v39[1];
            }
            while ( !v40 );
            if ( v39 != (_QWORD *)v38 )
              *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v40;
          }
          if ( (*(_DWORD *)(v40 + 36) & 1) != 0 )
          {
            v41 = *(_QWORD *)(v40 + 16);
            if ( v41 )
              break;
          }
          v37 = 0LL;
          v42 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, 0LL, v35);
          v21 = v35 == v42;
          v35 = v42;
          if ( v21 )
            goto LABEL_65;
        }
        *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v41;
        *(_QWORD *)(v40 + 16) = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_65:
          v53 = *(_QWORD *)(v40 + 16);
          v54 = *(_QWORD *)(v40 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v40 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v40 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v54, v37, v39, v38);
          v40 = v53;
        }
        while ( v53 );
      }
    }
LABEL_25:
    v22 = NtCurrentTeb();
    v26 = (char *)v22->SchedulerSharedDataSlot;
    if ( v26 )
    {
      v27 = 0;
      v28 = (unsigned __int64)v24 & 0x7FFFFFFFFFFFFFFCLL;
      while ( v27 < 8 )
      {
        v29 = &v26[8 * v27];
        v22 = (struct _TEB *)(*(_QWORD *)v29 & 0x7FFFFFFFFFFFFFFCLL);
        if ( v22 == (struct _TEB *)v28 )
        {
          if ( v29 )
          {
            *v29 |= 2u;
            if ( v29[7] < 0 )
            {
              ThreadInformation[1] = 0LL;
              ThreadInformation[0] = (v29 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
              LODWORD(v22) = NtSetInformationThread(
                               (HANDLE)0xFFFFFFFFFFFFFFFELL,
                               ThreadUpdateLockOwnership,
                               ThreadInformation,
                               0x10u);
            }
            *(_QWORD *)v29 = 0LL;
          }
          break;
        }
        ++v27;
      }
    }
    if ( v23 )
    {
      do
      {
        v30 = *(_QWORD *)v23;
        LODWORD(v22) = ZwAlertThreadByThreadId(*(HANDLE *)(v23 + 8));
        v23 = v30;
      }
      while ( v30 );
    }
  }
  else if ( v3 )
  {
    *((_QWORD *)&v64 + 1) = NtCurrentTeb()->ClientId.UniqueThread;
    _m_prefetchw(&a1[2]);
    v31 = a1[2].Value;
    do
    {
      v32 = v31;
      *(_QWORD *)&v64 = v31;
      v31 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2], (signed __int64)&v64, v31);
    }
    while ( v31 != v32 );
    RtlReleaseSRWLockShared(a1 + 1);
    LODWORD(v22) = NtWaitForAlertByThreadId(&a1[2], 0LL);
  }
  return (int)v22;
}
