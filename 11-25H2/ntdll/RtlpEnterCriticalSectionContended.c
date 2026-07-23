/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x18007C690
 * Callers:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 * Callees:
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(_RTL_CRITICAL_SECTION *a1)
{
  unsigned __int64 SpinCount; // rdx
  _RTL_CRITICAL_SECTION *v2; // r14
  unsigned __int64 v3; // rdi
  char v4; // bp
  char v5; // si
  signed __int32 LockCount; // eax
  volatile signed __int32 *p_LockCount; // r9
  int v8; // r11d
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  signed __int32 v13; // eax
  __int64 result; // rax
  int v15; // edx
  unsigned int v16; // r14d
  signed __int32 v17; // eax
  int v18; // edx
  char v19; // bl
  signed __int32 v20; // ecx
  unsigned int v21; // ecx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // ebx
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int j; // ecx
  unsigned __int64 v28; // rbx
  struct _TEB *v29; // rax
  char *SchedulerSharedDataSlot; // r8
  __int64 i; // rdx
  char *v32; // rcx
  __int64 p_ProcessLocksList; // rax
  __int64 *v35; // rcx
  bool v37; // [rsp+88h] [rbp+10h]

  SpinCount = a1->SpinCount;
  v2 = a1;
  if ( (SpinCount & 0x4000000) != 0
    && a1->DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL
    && !a1->DebugInfo->ProcessLocksList.Flink )
  {
    if ( (SpinCount & 0x2000000) != 0 && (SpinCount & 0xFFFFFF) == 0 )
      SpinCount |= 0x7D0uLL;
    v28 = (unsigned int)SpinCount & 0xFF000000;
    v29 = NtCurrentTeb();
    if ( NtCurrentPeb()->NumberOfProcessors != 1 )
      v28 = SpinCount;
    SchedulerSharedDataSlot = (char *)v29->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
      {
        v32 = &SchedulerSharedDataSlot[8 * i];
        if ( !*(_QWORD *)v32 )
        {
          if ( v32 )
            *(_QWORD *)v32 = &RtlCriticalSectionLock;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlCriticalSectionLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&RtlCriticalSectionLock);
    p_ProcessLocksList = (__int64)&v2->DebugInfo->ProcessLocksList;
    if ( !*(_QWORD *)p_ProcessLocksList )
    {
      v2->SpinCount = v28;
      v35 = (__int64 *)off_1801CE8D8;
      if ( *off_1801CE8D8 != (_UNKNOWN *)&RtlCriticalSectionList )
        __fastfail(3u);
      *(_QWORD *)p_ProcessLocksList = &RtlCriticalSectionList;
      *(_QWORD *)(p_ProcessLocksList + 8) = v35;
      *v35 = p_ProcessLocksList;
      off_1801CE8D8 = (_UNKNOWN **)p_ProcessLocksList;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  }
  v3 = 0LL;
  v37 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v3 = v2->SpinCount & 0xFFFFFF;
    v37 = (v2->SpinCount & 0x2000000) != 0;
  }
  v4 = 0;
  v5 = 0;
LABEL_5:
  LockCount = v2->LockCount;
  p_LockCount = &v2->LockCount;
  v8 = 3;
  if ( !v4 )
    v8 = 1;
  if ( (LockCount & 1) != 0 )
  {
    v9 = 0;
    if ( LockCount == _InterlockedCompareExchange(p_LockCount, LockCount ^ v8, LockCount) )
      goto LABEL_16;
  }
  else
  {
    v9 = 0;
  }
  v10 = 10 * v3;
  if ( MEMORY[0x7FFE036A] <= 1u )
    goto LABEL_23;
  if ( v2 == (_RTL_CRITICAL_SECTION *)-8LL || !MEMORY[0x7FFE0297] )
  {
    v15 = 0;
    v16 = v10 / MEMORY[0x7FFE02D6];
    while ( 1 )
    {
      if ( (*p_LockCount & 1) != 0 )
      {
        v17 = *p_LockCount;
        if ( v17 == _InterlockedCompareExchange(p_LockCount, v17 ^ v8, v17) )
          goto LABEL_15;
      }
      if ( v15 == v16 )
        goto LABEL_23;
      _mm_pause();
      ++v15;
    }
  }
  v11 = __rdtsc();
  v12 = v11 + v10;
  while ( 1 )
  {
    __asm { monitorx rax, rcx, rdx }
    if ( (*p_LockCount & 1) != 0 )
    {
      v13 = *p_LockCount;
      if ( v13 == _InterlockedCompareExchange(p_LockCount, v13 ^ v8, v13) )
        break;
    }
    v22 = v11;
    v23 = __rdtsc();
    v11 = v23;
    if ( v23 < v22 || v23 >= v12 )
    {
      while ( 1 )
      {
LABEL_23:
        _m_prefetchw((const void *)p_LockCount);
        v18 = *p_LockCount;
        if ( v4 )
        {
          if ( (v18 & 2) != 0 )
            goto LABEL_29;
          if ( (v18 & 1) != 0 )
          {
            v19 = 1;
            v20 = v18 ^ 3;
          }
          else
          {
            v19 = 0;
            v20 = v18 - 2;
          }
        }
        else if ( (v18 & 1) != 0 )
        {
          v19 = 1;
          v20 = v18 ^ 1;
        }
        else
        {
          v19 = 0;
          v20 = v18 - 4;
          if ( (((_BYTE)v18 - 4) & 2) == 0 )
            v20 = v18 - 6;
        }
        if ( v20 == v18 )
        {
LABEL_29:
          v2 = a1;
          RtlpWaitOnCriticalSection(a1, v18);
          v5 = 1;
          if ( v37 && v3 > 0x64 )
            --v3;
          goto LABEL_5;
        }
        if ( v18 == _InterlockedCompareExchange(p_LockCount, v20, v18) )
        {
          if ( v19 )
            goto LABEL_15;
          v4 = 1;
          v18 = v20;
          goto LABEL_29;
        }
        v24 = v9;
        if ( v9 )
        {
          if ( v9 < 0x1FFF )
            v24 = 2 * v9;
        }
        else
        {
          if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
            goto LABEL_52;
          v24 = 64;
        }
        v9 = v24;
        v25 = __rdtsc();
        v26 = 10 * (((v24 - 1) & (unsigned int)v25) + v24) / MEMORY[0x7FFE02D6];
        for ( j = 0; j < v26; ++j )
          _mm_pause();
LABEL_52:
        p_LockCount = &a1->LockCount;
      }
    }
    __asm { mwaitx  rax, rcx, rbx }
  }
LABEL_15:
  v2 = a1;
LABEL_16:
  if ( v37 )
  {
    if ( !v5 && v3 < 0x7D0 )
      LODWORD(v3) = v3 + 1;
    v21 = (LODWORD(v2->SpinCount) ^ (v3 ^ LODWORD(v2->SpinCount)) & 0xFFFFFF) & 0xFF000000;
    if ( NtCurrentPeb()->NumberOfProcessors != 1 )
      v21 = LODWORD(v2->SpinCount) ^ (v3 ^ LODWORD(v2->SpinCount)) & 0xFFFFFF;
    v2->SpinCount = v21;
  }
  result = 0LL;
  v2->OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
  v2->RecursionCount = 1;
  return result;
}
