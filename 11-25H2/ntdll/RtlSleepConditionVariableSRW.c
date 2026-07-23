/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x18009DB90
 * Callers:
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 *     TpTrimPools @ 0x1800F7360 (TpTrimPools.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpWakeConditionVariable @ 0x18009E650 (RtlpWakeConditionVariable.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x180166E70 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableSRW(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_SRWLOCK SRWLock,
        PLARGE_INTEGER Timeout,
        ULONG Flags)
{
  unsigned int v4; // esi
  unsigned __int64 Value; // rdi
  ULONG v8; // r15d
  void *UniqueThread; // rcx
  signed __int32 v10; // eax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rax
  char *SchedulerSharedDataSlot; // rdx
  unsigned int i; // ecx
  char *v17; // r12
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  signed __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  NTSTATUS v25; // ebx
  signed __int8 v26; // cf
  char *v27; // rdx
  PRTL_SRWLOCK *v28; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  int j; // edx
  __int64 v33; // rdx
  signed __int64 v34; // rcx
  signed __int64 v35; // rdx
  signed __int64 v36; // rtt
  _QWORD *v37; // r9
  __int64 v38; // r8
  __int64 v39; // rax
  PRTL_SRWLOCK v40; // r9
  bool v41; // zf
  signed __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rcx
  signed __int64 v45; // rax
  unsigned __int64 v46; // rax
  signed __int64 v47; // rdx
  unsigned __int64 v48; // rtt
  signed __int64 v49; // rax
  unsigned __int64 v50; // rcx
  char v51; // di
  _QWORD *v52; // r8
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // r9
  signed __int64 v55; // rtt
  unsigned __int64 v56; // rtt
  _QWORD *v57; // rax
  PRTL_SRWLOCK v58; // [rsp+20h] [rbp-50h]
  _QWORD ThreadInformation[3]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v60[4]; // [rsp+40h] [rbp-30h] BYREF
  int v61; // [rsp+60h] [rbp-10h]
  signed __int32 v62; // [rsp+64h] [rbp-Ch] BYREF
  PRTL_SRWLOCK v63; // [rsp+68h] [rbp-8h]

  v4 = 0;
  v61 = 0;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  _m_prefetchw(ConditionVariable);
  Value = ConditionVariable->Value;
  v8 = Flags & 1;
  v62 = 2;
  v60[2] = 0LL;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v10 = 2;
  if ( (Flags & 1) == 0 )
    v10 = 3;
  v60[3] = UniqueThread;
  v62 = v10;
  v63 = SRWLock;
  while ( 1 )
  {
    v11 = (unsigned __int64)v60 | Value & 0xF;
    v12 = v60;
    v60[0] = Value & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v12 = 0LL;
    v60[1] = v12;
    if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v11 |= 8uLL;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v11, Value);
    if ( Value == v13 )
      break;
    Value = v13;
  }
  if ( (Flags & 1) != 0 )
  {
    RtlReleaseSRWLockShared(SRWLock);
  }
  else
  {
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 1LL);
    if ( v14 != 1 )
    {
      do
      {
        v33 = 3LL;
        v34 = v14 & 6;
        if ( v34 != 2 )
          v33 = -1LL;
        v35 = v14 + v33;
        v36 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v35, v14);
      }
      while ( v36 != v14 );
      if ( v34 == 2 )
      {
        v58 = SRWLock;
        while ( 1 )
        {
          while ( (v35 & 1) != 0 )
          {
            v45 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v35 - 4, v35);
            v41 = v35 == v45;
            v35 = v45;
            if ( v41 )
              goto LABEL_12;
          }
          v37 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0uLL);
          v38 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v38 )
          {
            do
            {
              v57 = v37;
              v37 = (_QWORD *)*v37;
              v37[2] = v57;
              v38 = v37[1];
            }
            while ( !v38 );
            if ( v37 != (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v38;
          }
          if ( (*(_DWORD *)(v38 + 36) & 1) != 0 )
          {
            v39 = *(_QWORD *)(v38 + 16);
            if ( v39 )
              break;
          }
          v40 = 0LL;
          v58 = 0LL;
          v42 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, v35);
          v41 = v35 == v42;
          v35 = v42;
          if ( v41 )
            goto LABEL_64;
        }
        *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v39;
        *(_QWORD *)(v38 + 16) = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)SRWLock, 0xFFFFFFFFFFFFFFFBuLL);
        v40 = v58;
        do
        {
LABEL_64:
          v43 = *(_QWORD *)(v38 + 16);
          v44 = *(_QWORD *)(v38 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v38 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v38 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v44, v40, v38, v40);
          v40 = v58;
          v38 = v43;
        }
        while ( v43 );
      }
    }
LABEL_12:
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v17 = &SchedulerSharedDataSlot[8 * i];
        if ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)SRWLock & 0x7FFFFFFFFFFFFFFCLL) )
        {
          if ( v17 )
          {
            *v17 |= 2u;
            if ( v17[7] < 0 )
            {
              ThreadInformation[1] = 0LL;
              ThreadInformation[0] = (v17 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
              NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
            }
            *(_QWORD *)v17 = 0LL;
          }
          break;
        }
      }
    }
  }
  if ( (((unsigned __int8)Value ^ (unsigned __int8)v11) & 8) != 0 )
  {
    v18 = v11;
    while ( 1 )
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
      v20 = (_QWORD *)v19;
      if ( !*(_QWORD *)(v19 + 8) )
      {
        do
        {
          v21 = v20;
          v20 = (_QWORD *)*v20;
          v20[2] = v21;
        }
        while ( !v20[1] );
      }
      *(_QWORD *)(v19 + 8) = v20[1];
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v19, v11);
      v18 = v22;
      if ( v11 == v22 )
        break;
      v11 = v22;
      if ( (v22 & 7) != 0 )
      {
        RtlpWakeConditionVariable(ConditionVariable, v22, 0LL);
        break;
      }
    }
  }
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( MEMORY[0x7FFE0297] )
    {
      v23 = __rdtsc();
      v24 = v23 + (unsigned int)ConditionVariableSpinCycleCount;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v62 & 2) == 0 )
          break;
        v30 = v23;
        v31 = __rdtsc();
        v23 = v31;
        if ( v31 < v30 || v31 >= v24 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( j = 0; (v62 & 2) != 0 && j != ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++j )
        _mm_pause();
    }
  }
  v25 = 0;
  v26 = _interlockedbittestandreset(&v62, 1u);
  if ( !v26 )
  {
    _InterlockedOr(&v62, 4u);
LABEL_31:
    if ( (v62 & 4) != 0 )
      goto LABEL_32;
    goto LABEL_71;
  }
  v25 = NtWaitForAlertByThreadId(SRWLock, Timeout);
  if ( v25 != 258 )
    goto LABEL_31;
LABEL_71:
  v46 = ConditionVariable->Value;
  do
  {
    while ( 1 )
    {
      if ( !v46 || (v46 & 7) == 7 )
        goto LABEL_95;
      if ( (v46 & 8) == 0 )
        break;
      v56 = v46;
      v46 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v46 | 7, v46);
      if ( v56 == v46 )
        goto LABEL_95;
    }
    v47 = v46 + 8;
    v48 = v46;
    v46 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v46 + 8, v46);
  }
  while ( v48 != v46 );
  v49 = v47;
  v50 = v47 & 0xFFFFFFFFFFFFFFF0uLL;
  v51 = 0;
  while ( 2 )
  {
    v52 = 0LL;
    v53 = v50;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v50 )
        {
          if ( v53 )
            *(_QWORD *)(v53 + 8) = v52;
          if ( !v51 )
            _InterlockedOr(&v62, 2u);
          RtlpWakeConditionVariable(ConditionVariable, v47, 0LL);
          if ( v51 )
            goto LABEL_91;
          v26 = _interlockedbittestandreset(&v62, 1u);
          if ( !v26 )
            goto LABEL_91;
          do
LABEL_95:
            NtWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v62 & 4) == 0 );
LABEL_32:
          v25 = 0;
          goto LABEL_33;
        }
        v54 = *(_QWORD *)v50;
        if ( (_QWORD *)v50 == v60 )
          break;
        *(_QWORD *)(v50 + 16) = v52;
        v52 = (_QWORD *)v50;
        v50 = v54;
      }
      if ( !v52 )
        break;
      _interlockedbittestandset((volatile signed __int32 *)(v50 + 36), 2u);
      *v52 = v54;
      v51 = 1;
      if ( v54 )
        *(_QWORD *)(v54 + 16) = v52;
      v50 = v54;
    }
    v47 = *(_QWORD *)v50;
    if ( v54 )
      v47 = v49 ^ (v49 ^ v54) & 0xFFFFFFFFFFFFFFF0uLL;
    v55 = v49;
    v49 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v47, v49);
    if ( v55 != v49 )
    {
      v47 = v49;
      goto LABEL_94;
    }
    _interlockedbittestandset((volatile signed __int32 *)(v50 + 36), 2u);
    v51 = 1;
    v49 = v47;
    if ( v54 )
    {
LABEL_94:
      v50 = v49 & 0xFFFFFFFFFFFFFFF0uLL;
      continue;
    }
    break;
  }
LABEL_91:
  if ( v25 != 258 )
    goto LABEL_32;
LABEL_33:
  if ( v8 )
  {
    RtlAcquireSRWLockShared(SRWLock);
  }
  else
  {
    v27 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( v27 )
    {
      while ( v4 < 8 )
      {
        v28 = (PRTL_SRWLOCK *)&v27[8 * v4];
        if ( !*v28 )
        {
          if ( v28 )
            *v28 = SRWLock;
          break;
        }
        ++v4;
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(SRWLock);
  }
  return v25;
}
