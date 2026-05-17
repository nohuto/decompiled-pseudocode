/*
 * XREFs of TppCallbackEpilog @ 0x1800248E0
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     TppFreeWait @ 0x1800204A0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x1800204F0 (TppTimerpFree.c)
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180024E80 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     ZwReleaseSemaphore @ 0x180161DD0 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x180162090 (ZwReleaseMutant.c)
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppCallbackEpilog(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // rsi
  unsigned int v2; // eax
  int v3; // ecx
  unsigned __int64 v4; // r14
  char v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  volatile signed __int32 *v8; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // edx
  volatile signed __int32 **v11; // rcx
  bool v12; // zf
  signed __int64 v13; // rax
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64); // r8
  __int64 (__fastcall *v17)(__int64); // r9
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64); // rax
  unsigned __int64 v21; // r8
  int v22; // r10d
  unsigned __int64 v23; // r9
  __int64 v24; // r8
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rcx
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  int v32; // eax
  unsigned __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  signed __int64 v36; // [rsp+20h] [rbp-A9h]
  int v37; // [rsp+28h] [rbp-A1h] BYREF
  int v38; // [rsp+2Ch] [rbp-9Dh]
  unsigned __int64 *v39; // [rsp+30h] [rbp-99h]
  __int128 v40; // [rsp+38h] [rbp-91h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp-79h] BYREF

  v39 = a1;
  v38 = 0;
  v1 = a1;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  v37 = 0;
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
        v38 = v3;
        *((_DWORD *)v1 + 36) = v2 ^ (1 << v3);
        if ( v3 != 9 )
          break;
        v19 = v1[23];
        v1[23] = 0LL;
        v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v19 + 8) + 8LL);
        if ( v20 == TppWorkpFree )
        {
          TppWorkpFree(v19);
        }
        else if ( v20 == TppTimerpFree )
        {
          TppTimerpFree(v19);
        }
        else if ( v20 == TppFreeWait )
        {
          TppFreeWait(v19);
        }
        else
        {
          ((void (__fastcall *)(__int64, unsigned __int64, __int64 (__fastcall *)(__int64), __int64 (__fastcall *)(__int64), signed __int64))v20)(
            v19,
            0x180000000uLL,
            TppTimerpFree,
            TppFreeWait,
            v36);
        }
      }
      if ( v3 != 4 )
        break;
      v21 = v1[16];
      v22 = *((_DWORD *)v1 + 18);
      v23 = v1[23];
      if ( v21 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 416));
        _InterlockedDecrement((volatile signed __int32 *)(v21 + 420));
        _m_prefetchw((const void *)(v21 + 8));
        v30 = *(_QWORD *)(v21 + 8);
        HIDWORD(v36) = HIDWORD(v30);
        do
        {
          LODWORD(v36) = ((__int16)v30 - 1) ^ (v30 ^ ((__int16)v30 - 1)) & 0xFFFF0000;
          v31 = v30;
          v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8), v36, v30);
          v36 = v30;
        }
        while ( v31 != v30 );
        v27 = *(_QWORD *)(v21 + 56);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v23 + 144) + 416LL));
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v23 + 144) + 420LL));
        v24 = *(_QWORD *)(v23 + 144);
        _m_prefetchw((const void *)(v24 + 8));
        v25 = *(_QWORD *)(v24 + 8);
        HIDWORD(v36) = HIDWORD(v25);
        do
        {
          LODWORD(v36) = ((__int16)v25 - 1) ^ (((__int16)v25 - 1) ^ v25) & 0xFFFF0000;
          v26 = v25;
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 8), v36, v25);
          v36 = v25;
        }
        while ( v26 != v25 );
        v27 = *(_QWORD *)(*(_QWORD *)(v23 + 144) + 56LL);
      }
      if ( v22 == 2 )
      {
        v37 = 0;
        NtSetInformationWorkerFactory(v27, 9LL, &v37);
      }
    }
    if ( v3 != 6 )
      break;
    v4 = v1[23];
    v40 = 0LL;
    v5 = 0;
    _m_prefetchw((const void *)(v4 + 56));
    v6 = *(_QWORD *)(v4 + 56);
    do
    {
      if ( v5 )
      {
        RtlReleaseSRWLockExclusive(v4 + 64);
        v5 = 0;
      }
      v7 = (v6 - 1) ^ (v6 ^ (v6 - 1)) & 0xF000000000000000uLL;
      if ( ((v6 - 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v6 >> 60) & 8) != 0 )
      {
        v8 = (volatile signed __int32 *)(v4 + 64);
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
          RtlpAcquireSRWLockExclusiveContended(v4 + 64);
      }
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 56), v7, v6);
      v12 = v6 == v13;
      v6 = v13;
    }
    while ( !v12 );
    v1 = v39;
    if ( v5 )
    {
      v14 = *(_QWORD **)(v4 + 72);
      *(_QWORD *)(v4 + 72) = 0LL;
      RtlReleaseSRWLockExclusive(v4 + 64);
      v15 = 0x180000000uLL;
      v16 = TppTimerpFree;
      v17 = TppFreeWait;
      if ( v14 )
      {
        do
        {
          v18 = (_QWORD *)*v14;
          ZwAlertThreadByThreadId(v14[1], v15, v16, v17);
          v14 = v18;
        }
        while ( v18 );
      }
    }
  }
  switch ( v3 )
  {
    case 0:
      RtlLeaveCriticalSection(v1[24]);
      v1[24] = 0LL;
      goto LABEL_2;
    case 1:
      v32 = ZwReleaseMutant(*((unsigned int *)v1 + 38), 0LL, TppTimerpFree, TppFreeWait);
      v29 = v32;
      if ( v32 < 0 )
      {
        v33 = *((unsigned int *)v1 + 38);
        ExceptionRecord.ExceptionCode = -1073740019;
        goto LABEL_50;
      }
      *((_DWORD *)v1 + 38) = 0;
      goto LABEL_2;
    case 2:
      v35 = ZwSetEvent(*((unsigned int *)v1 + 37), 0LL);
      v29 = v35;
      if ( v35 < 0 )
      {
        v33 = *((unsigned int *)v1 + 37);
        ExceptionRecord.ExceptionCode = -1073740021;
        goto LABEL_50;
      }
      *((_DWORD *)v1 + 37) = 0;
      goto LABEL_2;
    case 3:
      v34 = ZwReleaseSemaphore(*((unsigned int *)v1 + 39), *((unsigned int *)v1 + 40), 0LL, TppFreeWait);
      if ( v34 < 0 )
      {
        ExceptionRecord.ExceptionInformation[2] = *((unsigned int *)v1 + 39);
        ExceptionRecord.ExceptionInformation[3] = *((unsigned int *)v1 + 40);
        ExceptionRecord.ExceptionCode = -1073740020;
        ExceptionRecord.NumberParameters = 5;
        ExceptionRecord.ExceptionInformation[4] = v34;
        goto LABEL_51;
      }
      *(unsigned __int64 *)((char *)v1 + 156) = 0LL;
      goto LABEL_2;
    case 5:
      TppBarrierAdjust((volatile signed __int64 *)(v1[22] + 32), -1, 0);
      v1[22] = 0LL;
      goto LABEL_2;
    case 7:
      v28 = LdrUnloadDll(v1[25]);
      v29 = v28;
      if ( v28 >= 0 )
      {
        v1[25] = 0LL;
        goto LABEL_2;
      }
      v33 = v1[25];
      ExceptionRecord.ExceptionCode = -1073740018;
LABEL_50:
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[2] = v33;
      ExceptionRecord.ExceptionInformation[3] = v29;
LABEL_51:
      ExceptionRecord.ExceptionInformation[0] = v1[11];
      ExceptionRecord.ExceptionInformation[1] = v1[12];
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
