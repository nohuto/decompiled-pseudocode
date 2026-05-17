/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x18007C690
 * Callers:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 * Callees:
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  volatile signed __int32 *v2; // r14
  unsigned __int64 v3; // rdi
  char v4; // bp
  char v5; // si
  signed __int32 v6; // eax
  volatile signed __int32 *v7; // r9
  int v8; // r11d
  __int64 v9; // r8
  unsigned int v10; // ebx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  signed __int32 v13; // eax
  __int64 result; // rax
  int v15; // edx
  unsigned int v16; // r14d
  signed __int32 v17; // eax
  __int64 v18; // rdx
  char v19; // bl
  unsigned __int32 v20; // ecx
  unsigned int v21; // ecx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int j; // ecx
  __int64 v28; // rbx
  struct _TEB *v29; // rax
  char *SchedulerSharedDataSlot; // r8
  __int64 i; // rdx
  char *v32; // rcx
  __int64 v34; // rax
  __int64 *v35; // rcx
  bool v37; // [rsp+88h] [rbp+10h]

  v1 = *((_QWORD *)a1 + 4);
  v2 = a1;
  if ( (v1 & 0x4000000) != 0 && *(_QWORD *)a1 != -1LL && !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    if ( (v1 & 0x2000000) != 0 && (v1 & 0xFFFFFF) == 0 )
      v1 |= 0x7D0uLL;
    v28 = (unsigned int)v1 & 0xFF000000;
    v29 = NtCurrentTeb();
    if ( NtCurrentPeb()->NumberOfProcessors != 1 )
      v28 = v1;
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
    v34 = *(_QWORD *)v2 + 16LL;
    if ( !*(_QWORD *)v34 )
    {
      *((_QWORD *)v2 + 4) = v28;
      v35 = (__int64 *)off_1801CE8D8;
      if ( *off_1801CE8D8 != (_UNKNOWN *)&RtlCriticalSectionList )
        __fastfail(3u);
      *(_QWORD *)v34 = &RtlCriticalSectionList;
      *(_QWORD *)(v34 + 8) = v35;
      *v35 = v34;
      off_1801CE8D8 = (_UNKNOWN **)v34;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  }
  v3 = 0LL;
  v37 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v3 = *((_QWORD *)v2 + 4) & 0xFFFFFFLL;
    v37 = (*((_QWORD *)v2 + 4) & 0x2000000LL) != 0;
  }
  v4 = 0;
  v5 = 0;
LABEL_5:
  v6 = *((_DWORD *)v2 + 2);
  v7 = v2 + 2;
  v8 = 3;
  if ( !v4 )
    v8 = 1;
  if ( (v6 & 1) != 0 )
  {
    v9 = 0LL;
    if ( v6 == _InterlockedCompareExchange(v7, v6 ^ v8, v6) )
      goto LABEL_16;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = 10 * v3;
  if ( MEMORY[0x7FFE036A] <= 1u )
    goto LABEL_23;
  if ( v2 == (volatile signed __int32 *)-8LL || !MEMORY[0x7FFE0297] )
  {
    v15 = 0;
    v16 = v10 / MEMORY[0x7FFE02D6];
    while ( 1 )
    {
      if ( (*v7 & 1) != 0 )
      {
        v17 = *v7;
        if ( v17 == _InterlockedCompareExchange(v7, v17 ^ v8, v17) )
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
    if ( (*v7 & 1) != 0 )
    {
      v13 = *v7;
      if ( v13 == _InterlockedCompareExchange(v7, v13 ^ v8, v13) )
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
        _m_prefetchw((const void *)v7);
        v18 = *(unsigned int *)v7;
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
        if ( v20 == (_DWORD)v18 )
        {
LABEL_29:
          v2 = a1;
          RtlpWaitOnCriticalSection((__int64)a1, v18, v9, (__int64)v7);
          v5 = 1;
          if ( v37 && v3 > 0x64 )
            --v3;
          goto LABEL_5;
        }
        if ( (_DWORD)v18 == _InterlockedCompareExchange(v7, v20, v18) )
        {
          if ( v19 )
            goto LABEL_15;
          v4 = 1;
          v18 = v20;
          goto LABEL_29;
        }
        v24 = v9;
        if ( (_DWORD)v9 )
        {
          if ( (unsigned int)v9 < 0x1FFF )
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
        v7 = a1 + 2;
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
    v21 = (*((_DWORD *)v2 + 8) ^ (v3 ^ *((_DWORD *)v2 + 8)) & 0xFFFFFF) & 0xFF000000;
    if ( NtCurrentPeb()->NumberOfProcessors != 1 )
      v21 = *((_DWORD *)v2 + 8) ^ (v3 ^ *((_DWORD *)v2 + 8)) & 0xFFFFFF;
    *((_QWORD *)v2 + 4) = v21;
  }
  result = 0LL;
  *((_QWORD *)v2 + 2) = NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)v2 + 3) = 1;
  return result;
}
