/*
 * XREFs of RtlpQueueWaitBlockToSRWLock @ 0x180060800
 * Callers:
 *     RtlpWakeConditionVariable @ 0x180060550 (RtlpWakeConditionVariable.c)
 *     RtlWakeConditionVariable @ 0x180060690 (RtlWakeConditionVariable.c)
 * Callees:
 *     RtlpAbFreeKernelEntry @ 0x180046770 (RtlpAbFreeKernelEntry.c)
 *     RtlAbPostRelease @ 0x1800CEFC0 (RtlAbPostRelease.c)
 *     RtlBackoff @ 0x1800D1E40 (RtlBackoff.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180160E80 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall RtlpQueueWaitBlockToSRWLock(__int64 a1, volatile signed __int64 *a2)
{
  unsigned __int8 v2; // r15
  unsigned __int64 v5; // rax
  char v6; // r14
  __int64 v7; // rbx
  bool v8; // bp
  __int64 v9; // rcx
  signed __int64 v10; // rcx
  signed __int64 v11; // rdx
  _QWORD *v12; // r8
  bool v13; // zf
  signed __int64 v14; // rax
  volatile signed __int64 *v16; // rsi
  _QWORD *v17; // r9
  __int64 v18; // r8
  __int64 v19; // rax
  signed __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  _QWORD *SchedulerSharedDataSlot; // r11
  unsigned int i; // r9d
  signed __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v5 = *a2;
  v6 = *(_DWORD *)(a1 + 36) & 1;
  v29 = 0;
  v7 = 0LL;
  while ( (v5 & 1) != 0 && (v6 || (v5 & 2) != 0 || (v5 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    v8 = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (v5 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 32) = -1;
      *(_QWORD *)a1 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = a1 | v5 & 8 | 7;
      v8 = (v5 & 4) == 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a1;
      v9 = 11LL;
      *(_DWORD *)(a1 + 32) = v5 >> 4;
      if ( (int)(v5 >> 4) <= 1 )
        v9 = 3LL;
      v10 = a1 | v9;
      if ( !(unsigned int)(v5 >> 4) )
      {
        *(_DWORD *)(a1 + 32) = -2;
        v11 = v10;
        goto LABEL_9;
      }
    }
    v11 = v10;
    if ( v8 )
    {
      v7 = 0LL;
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          if ( !SchedulerSharedDataSlot[i] )
          {
            v7 = (__int64)&SchedulerSharedDataSlot[i];
            break;
          }
        }
      }
      if ( v7 )
        *(_QWORD *)v7 = a2;
    }
LABEL_9:
    if ( v5 == _InterlockedCompareExchange64(a2, v10, v5) )
    {
      if ( v8 )
      {
        while ( (v11 & 1) != 0 )
        {
          v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0uLL);
          if ( !*(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
          {
            do
            {
              v26 = v12;
              v12 = (_QWORD *)*v12;
              v12[2] = v26;
              v27 = v12[1];
            }
            while ( !v27 );
            if ( v12 != (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v27;
          }
          v14 = _InterlockedCompareExchange64(a2, v11 - 4, v11);
          v13 = v11 == v14;
          v11 = v14;
          if ( v13 )
            goto LABEL_14;
        }
        v16 = a2;
        while ( 1 )
        {
          while ( (v11 & 1) != 0 )
          {
            v25 = _InterlockedCompareExchange64(a2, v11 - 4, v11);
            v13 = v11 == v25;
            v11 = v25;
            if ( v13 )
              goto LABEL_14;
          }
          v17 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0uLL);
          v18 = *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v18 )
          {
            do
            {
              v28 = v17;
              v17 = (_QWORD *)*v17;
              v17[2] = v28;
              v18 = v17[1];
            }
            while ( !v18 );
            if ( v17 != (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v18;
          }
          if ( (*(_DWORD *)(v18 + 36) & 1) != 0 )
          {
            v19 = *(_QWORD *)(v18 + 16);
            if ( v19 )
              break;
          }
          v16 = 0LL;
          v20 = _InterlockedCompareExchange64(a2, 0LL, v11);
          v13 = v11 == v20;
          v11 = v20;
          if ( v13 )
            goto LABEL_28;
        }
        *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v19;
        *(_QWORD *)(v18 + 16) = 0LL;
        _InterlockedAnd64(a2, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_28:
          v21 = *(_QWORD *)(v18 + 16);
          v22 = *(_QWORD *)(v18 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v18 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v18 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v22, v16, v18, v17);
          v18 = v21;
        }
        while ( v21 );
      }
LABEL_14:
      v2 = 1;
      break;
    }
    if ( v7 )
    {
      RtlAbPostRelease(a2, v7);
      v7 = 0LL;
    }
    RtlBackoff(&v29);
    _m_prefetchw((const void *)a2);
    v5 = *a2;
  }
  if ( v7 )
  {
    *(_BYTE *)v7 |= 2u;
    if ( *(char *)(v7 + 7) < 0 )
      RtlpAbFreeKernelEntry(v7);
    *(_QWORD *)v7 = 0LL;
  }
  return v2;
}
