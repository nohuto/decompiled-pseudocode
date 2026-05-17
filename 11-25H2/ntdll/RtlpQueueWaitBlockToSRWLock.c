/*
 * XREFs of RtlpQueueWaitBlockToSRWLock @ 0x18009E900
 * Callers:
 *     RtlpWakeConditionVariable @ 0x18009E650 (RtlpWakeConditionVariable.c)
 *     RtlWakeConditionVariable @ 0x18009E790 (RtlWakeConditionVariable.c)
 * Callees:
 *     RtlpAbFreeKernelEntry @ 0x180047D90 (RtlpAbFreeKernelEntry.c)
 *     RtlBackoff @ 0x18009EE30 (RtlBackoff.c)
 *     RtlAbPostRelease @ 0x1800A0360 (RtlAbPostRelease.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall RtlpQueueWaitBlockToSRWLock(__int64 a1, volatile signed __int64 *a2, struct _TEB *a3)
{
  unsigned __int8 v3; // r15
  unsigned __int64 v6; // rax
  char v7; // r14
  __int64 v8; // rbx
  bool v9; // bp
  __int64 v10; // rcx
  signed __int64 v11; // rcx
  signed __int64 v12; // rdx
  _QWORD *v13; // r8
  bool v14; // zf
  signed __int64 v15; // rax
  volatile signed __int64 *v17; // rsi
  _QWORD *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  signed __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  _QWORD *SchedulerSharedDataSlot; // r11
  unsigned int i; // r9d
  signed __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v6 = *a2;
  v7 = *(_DWORD *)(a1 + 36) & 1;
  v30 = 0;
  v8 = 0LL;
  while ( (v6 & 1) != 0 && (v7 || (v6 & 2) != 0 || (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    v9 = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (v6 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 32) = -1;
      *(_QWORD *)a1 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = a1 | v6 & 8 | 7;
      v9 = (v6 & 4) == 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a1;
      v10 = 11LL;
      *(_DWORD *)(a1 + 32) = v6 >> 4;
      if ( (int)(v6 >> 4) <= 1 )
        v10 = 3LL;
      v11 = a1 | v10;
      if ( !(unsigned int)(v6 >> 4) )
      {
        *(_DWORD *)(a1 + 32) = -2;
        v12 = v11;
        goto LABEL_9;
      }
    }
    v12 = v11;
    if ( v9 )
    {
      a3 = NtCurrentTeb();
      v8 = 0LL;
      SchedulerSharedDataSlot = a3->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          a3 = (struct _TEB *)i;
          if ( !SchedulerSharedDataSlot[i] )
          {
            v8 = (__int64)&SchedulerSharedDataSlot[i];
            break;
          }
        }
      }
      if ( v8 )
        *(_QWORD *)v8 = a2;
    }
LABEL_9:
    if ( v6 == _InterlockedCompareExchange64(a2, v11, v6) )
    {
      if ( v9 )
      {
        while ( (v12 & 1) != 0 )
        {
          v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
          if ( !*(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
          {
            do
            {
              v27 = v13;
              v13 = (_QWORD *)*v13;
              v13[2] = v27;
              v28 = v13[1];
            }
            while ( !v28 );
            if ( v13 != (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v28;
          }
          v15 = _InterlockedCompareExchange64(a2, v12 - 4, v12);
          v14 = v12 == v15;
          v12 = v15;
          if ( v14 )
            goto LABEL_14;
        }
        v17 = a2;
        while ( 1 )
        {
          while ( (v12 & 1) != 0 )
          {
            v26 = _InterlockedCompareExchange64(a2, v12 - 4, v12);
            v14 = v12 == v26;
            v12 = v26;
            if ( v14 )
              goto LABEL_14;
          }
          v18 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
          v19 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v19 )
          {
            do
            {
              v29 = v18;
              v18 = (_QWORD *)*v18;
              v18[2] = v29;
              v19 = v18[1];
            }
            while ( !v19 );
            if ( v18 != (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v19;
          }
          if ( (*(_DWORD *)(v19 + 36) & 1) != 0 )
          {
            v20 = *(_QWORD *)(v19 + 16);
            if ( v20 )
              break;
          }
          v17 = 0LL;
          v21 = _InterlockedCompareExchange64(a2, 0LL, v12);
          v14 = v12 == v21;
          v12 = v21;
          if ( v14 )
            goto LABEL_28;
        }
        *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v20;
        *(_QWORD *)(v19 + 16) = 0LL;
        _InterlockedAnd64(a2, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_28:
          v22 = *(_QWORD *)(v19 + 16);
          v23 = *(_QWORD *)(v19 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v19 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v19 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v23, v17, v19, v18);
          v19 = v22;
        }
        while ( v22 );
      }
LABEL_14:
      v3 = 1;
      break;
    }
    if ( v8 )
    {
      RtlAbPostRelease(a2, v8, a3);
      v8 = 0LL;
    }
    RtlBackoff(&v30);
    _m_prefetchw((const void *)a2);
    v6 = *a2;
  }
  if ( v8 )
  {
    *(_BYTE *)v8 |= 2u;
    if ( *(char *)(v8 + 7) < 0 )
      RtlpAbFreeKernelEntry(v8);
    *(_QWORD *)v8 = 0LL;
  }
  return v3;
}
