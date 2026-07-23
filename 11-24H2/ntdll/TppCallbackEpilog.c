/*
 * XREFs of TppCallbackEpilog @ 0x1800512E0
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     TppFreeWait @ 0x18004CEA0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x18004CEF0 (TppTimerpFree.c)
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180051880 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     ZwReleaseSemaphore @ 0x180160190 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x180160210 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x180160450 (ZwReleaseMutant.c)
 *     ZwAlertThreadByThreadId @ 0x180160E60 (ZwAlertThreadByThreadId.c)
 *     NtSetInformationWorkerFactory @ 0x180163660 (NtSetInformationWorkerFactory.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppCallbackEpilog(PVOID *a1)
{
  PVOID *v1; // rsi
  unsigned int v2; // eax
  int v3; // ecx
  _RTL_SRWLOCK *v4; // r14
  char v5; // r15
  unsigned __int64 Value; // rdi
  unsigned __int64 v7; // rbx
  volatile signed __int32 *v8; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // edx
  volatile signed __int32 **v11; // rcx
  bool v12; // zf
  signed __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rcx
  void (__fastcall *v17)(_QWORD *, unsigned __int64, LOGICAL (__fastcall *)(void *), LOGICAL (__fastcall *)(__int64), signed __int64); // rax
  volatile signed __int32 *v18; // r8
  int v19; // r10d
  _QWORD *v20; // r9
  __int64 v21; // r8
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  void *v24; // rcx
  NTSTATUS v25; // eax
  unsigned __int64 v26; // rcx
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  NTSTATUS v29; // eax
  unsigned __int64 v30; // rax
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  signed __int64 v33; // [rsp+20h] [rbp-A9h]
  int WorkerFactoryInformation; // [rsp+28h] [rbp-A1h] BYREF
  int v35; // [rsp+2Ch] [rbp-9Dh]
  PVOID *v36; // [rsp+30h] [rbp-99h]
  __int128 v37; // [rsp+38h] [rbp-91h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp-79h] BYREF

  v36 = a1;
  v35 = 0;
  v1 = a1;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  WorkerFactoryInformation = 0;
  TppCallbackCheckThreadAfterCallback(a1);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_2:
        v2 = *((_DWORD *)v1 + 36);
        if ( !v2 )
        {
          *(_OWORD *)v1 = 0LL;
          *((_OWORD *)v1 + 1) = 0LL;
          *((_OWORD *)v1 + 2) = 0LL;
          *((_OWORD *)v1 + 3) = 0LL;
          *((_OWORD *)v1 + 4) = 0LL;
          *((_OWORD *)v1 + 5) = 0LL;
          *((_OWORD *)v1 + 6) = 0LL;
          *((_OWORD *)v1 + 7) = 0LL;
          *((_OWORD *)v1 + 8) = 0LL;
          return;
        }
        _BitScanForward((unsigned int *)&v3, v2);
        v35 = v3;
        *((_DWORD *)v1 + 36) = v2 ^ (1 << v3);
        if ( v3 != 9 )
          break;
        v16 = v1[23];
        v1[23] = 0LL;
        v17 = *(void (__fastcall **)(_QWORD *, unsigned __int64, LOGICAL (__fastcall *)(void *), LOGICAL (__fastcall *)(__int64), signed __int64))(v16[1] + 8LL);
        if ( (char *)v17 == (char *)TppWorkpFree )
        {
          TppWorkpFree(v16);
        }
        else if ( (char *)v17 == (char *)TppTimerpFree )
        {
          TppTimerpFree(v16);
        }
        else if ( (char *)v17 == (char *)TppFreeWait )
        {
          TppFreeWait((__int64)v16);
        }
        else
        {
          v17(v16, 0x180000000uLL, TppTimerpFree, TppFreeWait, v33);
        }
      }
      if ( v3 != 4 )
        break;
      v18 = (volatile signed __int32 *)v1[16];
      v19 = *((_DWORD *)v1 + 18);
      v20 = v1[23];
      if ( v18 )
      {
        _InterlockedIncrement(v18 + 104);
        _InterlockedDecrement(v18 + 105);
        _m_prefetchw((const void *)(v18 + 2));
        v27 = *((_QWORD *)v18 + 1);
        HIDWORD(v33) = HIDWORD(v27);
        do
        {
          LODWORD(v33) = ((__int16)v27 - 1) ^ (v27 ^ ((__int16)v27 - 1)) & 0xFFFF0000;
          v28 = v27;
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 1, v33, v27);
          v33 = v27;
        }
        while ( v28 != v27 );
        v24 = (void *)*((_QWORD *)v18 + 7);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v20[18] + 416LL));
        _InterlockedDecrement((volatile signed __int32 *)(v20[18] + 420LL));
        v21 = v20[18];
        _m_prefetchw((const void *)(v21 + 8));
        v22 = *(_QWORD *)(v21 + 8);
        HIDWORD(v33) = HIDWORD(v22);
        do
        {
          LODWORD(v33) = ((__int16)v22 - 1) ^ (((__int16)v22 - 1) ^ v22) & 0xFFFF0000;
          v23 = v22;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8), v33, v22);
          v33 = v22;
        }
        while ( v23 != v22 );
        v24 = *(void **)(v20[18] + 56LL);
      }
      if ( v19 == 2 )
      {
        WorkerFactoryInformation = 0;
        NtSetInformationWorkerFactory(v24, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
      }
    }
    if ( v3 != 6 )
      break;
    v4 = (_RTL_SRWLOCK *)v1[23];
    v37 = 0LL;
    v5 = 0;
    _m_prefetchw(&v4[7]);
    Value = v4[7].Value;
    do
    {
      if ( v5 )
      {
        RtlReleaseSRWLockExclusive(v4 + 8);
        v5 = 0;
      }
      v7 = (Value - 1) ^ (Value ^ (Value - 1)) & 0xF000000000000000uLL;
      if ( ((Value - 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((Value >> 60) & 8) != 0 )
      {
        v8 = (volatile signed __int32 *)&v4[8];
        v7 &= ~0x8000000000000000uLL;
        v5 = 1;
        SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          for ( i = 0; i < 8; ++i )
          {
            v11 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
            if ( !*v11 )
            {
              if ( v11 )
                *v11 = v8;
              break;
            }
          }
        }
        if ( _interlockedbittestandset64(v8, 0LL) )
          RtlpAcquireSRWLockExclusiveContended(&v4[8]);
      }
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&v4[7], v7, Value);
      v12 = Value == v13;
      Value = v13;
    }
    while ( !v12 );
    v1 = v36;
    if ( v5 )
    {
      v14 = v4[9].Value;
      v4[9].Value = 0LL;
      RtlReleaseSRWLockExclusive(v4 + 8);
      if ( v14 )
      {
        do
        {
          v15 = *(_QWORD *)v14;
          ZwAlertThreadByThreadId(*(HANDLE *)(v14 + 8));
          v14 = v15;
        }
        while ( v15 );
      }
    }
  }
  switch ( v3 )
  {
    case 0:
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)v1[24]);
      v1[24] = 0LL;
      goto LABEL_2;
    case 1:
      v29 = ZwReleaseMutant((HANDLE)*((unsigned int *)v1 + 38), 0LL);
      v26 = v29;
      if ( v29 < 0 )
      {
        v30 = *((unsigned int *)v1 + 38);
        ExceptionRecord.ExceptionCode = -1073740019;
        goto LABEL_50;
      }
      *((_DWORD *)v1 + 38) = 0;
      goto LABEL_2;
    case 2:
      v32 = ZwSetEvent((HANDLE)*((unsigned int *)v1 + 37), 0LL);
      v26 = v32;
      if ( v32 < 0 )
      {
        v30 = *((unsigned int *)v1 + 37);
        ExceptionRecord.ExceptionCode = -1073740021;
        goto LABEL_50;
      }
      *((_DWORD *)v1 + 37) = 0;
      goto LABEL_2;
    case 3:
      v31 = ZwReleaseSemaphore((HANDLE)*((unsigned int *)v1 + 39), *((_DWORD *)v1 + 40), 0LL);
      if ( v31 < 0 )
      {
        ExceptionRecord.ExceptionInformation[2] = *((unsigned int *)v1 + 39);
        ExceptionRecord.ExceptionInformation[3] = *((unsigned int *)v1 + 40);
        ExceptionRecord.ExceptionCode = -1073740020;
        ExceptionRecord.NumberParameters = 5;
        ExceptionRecord.ExceptionInformation[4] = v31;
        goto LABEL_51;
      }
      *(PVOID *)((char *)v1 + 156) = 0LL;
      goto LABEL_2;
    case 5:
      TppBarrierAdjust((_RTL_SRWLOCK *)v1[22] + 4, -1, 0);
      v1[22] = 0LL;
      goto LABEL_2;
    case 7:
      v25 = LdrUnloadDll(v1[25]);
      v26 = v25;
      if ( v25 >= 0 )
      {
        v1[25] = 0LL;
        goto LABEL_2;
      }
      v30 = (unsigned __int64)v1[25];
      ExceptionRecord.ExceptionCode = -1073740018;
LABEL_50:
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[2] = v30;
      ExceptionRecord.ExceptionInformation[3] = v26;
LABEL_51:
      ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)v1[11];
      ExceptionRecord.ExceptionInformation[1] = (unsigned __int64)v1[12];
      memset_thunk_772440563353939046(v1, 0, 0x100uLL);
      RtlRaiseException(&ExceptionRecord);
      return;
    case 8:
      LdrUnloadDll(v1[21]);
      v1[21] = 0LL;
      goto LABEL_2;
    default:
      goto LABEL_2;
  }
}
