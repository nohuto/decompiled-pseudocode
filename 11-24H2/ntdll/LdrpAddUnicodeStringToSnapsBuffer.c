/*
 * XREFs of LdrpAddUnicodeStringToSnapsBuffer @ 0x180040ED0
 * Callers:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlpNotOwnerCriticalSection @ 0x180041700 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlpWakeByAddress @ 0x180041860 (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x1800D1E40 (RtlBackoff.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwCreateEvent @ 0x180160950 (ZwCreateEvent.c)
 *     ZwSetEventEx @ 0x180163460 (ZwSetEventEx.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

void __fastcall LdrpAddUnicodeStringToSnapsBuffer(const void **a1)
{
  int v2; // edi
  __int16 v3; // ax
  size_t v4; // rsi
  char *v5; // r14
  unsigned __int16 v6; // r8
  unsigned int v7; // edx
  bool v8; // zf
  signed __int64 v9; // rdi
  signed __int32 LockCount; // esi
  char *SchedulerSharedDataSlot; // rdx
  unsigned int i; // ecx
  char *v13; // rbx
  void *LockSemaphore; // rbx
  NTSTATUS v15; // eax
  char *v16; // rdx
  unsigned int j; // ecx
  unsigned int v18; // edi
  unsigned int v19; // edx
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+78h] [rbp+10h] BYREF
  HANDLE EventHandle; // [rsp+88h] [rbp+20h] BYREF

  if ( !qword_1801D1798 )
    return;
  RtlEnterCriticalSection(&LdrpSnapsLock);
  v2 = *(unsigned __int16 *)a1;
  if ( (_WORD)v2 )
  {
    v3 = HIWORD(LdrpSnapsUnicodeString);
    if ( v2 + (unsigned int)(unsigned __int16)LdrpSnapsUnicodeString > HIWORD(LdrpSnapsUnicodeString) )
    {
      LOWORD(LdrpSnapsUnicodeString) = 0;
      v6 = 0;
      v18 = *(unsigned __int16 *)a1;
      if ( !(_WORD)v18 )
        goto LABEL_5;
      if ( v18 > HIWORD(LdrpSnapsUnicodeString) )
        goto LABEL_5;
      v5 = (char *)qword_1801D1798;
      v4 = *(unsigned __int16 *)a1;
      memmove(qword_1801D1798, a1[1], v4);
      v3 = HIWORD(LdrpSnapsUnicodeString);
      v6 = v18 + LdrpSnapsUnicodeString;
      v19 = (unsigned __int16)(v18 + LdrpSnapsUnicodeString) + 1;
      LOWORD(LdrpSnapsUnicodeString) = v18 + LdrpSnapsUnicodeString;
      if ( v19 >= HIWORD(LdrpSnapsUnicodeString) )
        goto LABEL_5;
    }
    else
    {
      v4 = *(unsigned __int16 *)a1;
      v5 = (char *)qword_1801D1798 + 2 * ((unsigned __int64)(unsigned __int16)LdrpSnapsUnicodeString >> 1);
      memmove(v5, a1[1], v4);
      v3 = HIWORD(LdrpSnapsUnicodeString);
      v6 = v2 + LdrpSnapsUnicodeString;
      v7 = (unsigned __int16)(v2 + LdrpSnapsUnicodeString) + 1;
      LOWORD(LdrpSnapsUnicodeString) = v2 + LdrpSnapsUnicodeString;
      if ( v7 >= HIWORD(LdrpSnapsUnicodeString) )
        goto LABEL_5;
    }
    *(_WORD *)&v5[2 * (v4 >> 1)] = 0;
  }
  v3 = HIWORD(LdrpSnapsUnicodeString);
  v6 = LdrpSnapsUnicodeString;
LABEL_5:
  if ( v6 == v3 )
  {
    qword_1801D1788 = (__int64)qword_1801D1798;
    LOWORD(LdrpSnapsUnicodeString2) = 0;
  }
  else
  {
    v3 = v3 - v6 - 2;
    LOWORD(LdrpSnapsUnicodeString2) = v3;
    qword_1801D1788 = (__int64)qword_1801D1798 + 2 * ((unsigned __int64)v6 >> 1) + 2;
  }
  v8 = LdrpSnapsLock.RecursionCount-- == 1;
  HIWORD(LdrpSnapsUnicodeString2) = v3;
  if ( v8 )
  {
    LdrpSnapsLock.OwningThread = 0LL;
    v9 = -1LL;
    LockCount = _InterlockedCompareExchange(&LdrpSnapsLock.LockCount, -1, -2);
    if ( LockCount == -2 )
    {
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          v13 = &SchedulerSharedDataSlot[8 * i];
          if ( (*(_QWORD *)v13 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpSnapsLock & 0x7FFFFFFFFFFFFFFCLL) )
          {
            if ( !v13 )
              return;
            *v13 |= 2u;
            if ( v13[7] >= 0 )
              goto LABEL_51;
            goto LABEL_50;
          }
        }
      }
    }
    else
    {
      if ( (LdrpSnapsLock.LockCount & 1) != 0 )
        RtlpNotOwnerCriticalSection(&LdrpSnapsLock);
      LockSemaphore = LdrpSnapsLock.LockSemaphore;
      if ( !LdrpSnapsLock.LockSemaphore )
      {
        EventHandle = (HANDLE)-1LL;
        if ( RtlpForceCSToUseEvents )
        {
          if ( ZwCreateEvent(&EventHandle, 0x100003u, 0LL, SynchronizationEvent, 0) >= 0 )
            v9 = (signed __int64)EventHandle;
          else
            EventHandle = (HANDLE)-1LL;
        }
        LockSemaphore = (void *)_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)&LdrpSnapsLock.LockSemaphore,
                                  v9,
                                  0LL);
        if ( LockSemaphore )
        {
          if ( EventHandle != (HANDLE)-1LL )
            NtClose(EventHandle);
          EventHandle = LockSemaphore;
        }
        else
        {
          LockSemaphore = EventHandle;
        }
      }
      v22 = 0;
      while ( LockCount != _InterlockedCompareExchange(
                             &LdrpSnapsLock.LockCount,
                             (LockCount & 2 | 1) + LockCount,
                             LockCount) )
      {
        RtlBackoff(&v22);
        _m_prefetchw(&LdrpSnapsLock.LockCount);
        LockCount = LdrpSnapsLock.LockCount;
      }
      if ( (LockCount & 2) != 0 )
      {
        if ( LockSemaphore == (void *)-1LL )
        {
          _InterlockedOr(v20, 0);
          RtlpWakeByAddress(&LdrpSnapsLock.LockCount, 0LL, &LdrpSnapsLock);
        }
        else
        {
          v15 = ZwSetEventEx(LockSemaphore, 0LL, &LdrpSnapsLock);
          if ( v15 < 0 )
            RtlRaiseStatus(v15);
        }
      }
      v16 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v16 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v13 = &v16[8 * j];
          if ( (*(_QWORD *)v13 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpSnapsLock & 0x7FFFFFFFFFFFFFFCLL) )
          {
            if ( v13 )
            {
              *v13 |= 2u;
              if ( v13[7] < 0 )
              {
LABEL_50:
                ThreadInformation[1] = 0LL;
                ThreadInformation[0] = (v13 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
                NtSetInformationThread(
                  (HANDLE)0xFFFFFFFFFFFFFFFELL,
                  ThreadUpdateLockOwnership,
                  ThreadInformation,
                  0x10u);
              }
LABEL_51:
              *(_QWORD *)v13 = 0LL;
            }
            return;
          }
        }
      }
    }
  }
}
