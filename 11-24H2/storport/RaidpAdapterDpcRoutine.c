/*
 * XREFs of RaidpAdapterDpcRoutine @ 0x14002A4B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x140052F38 (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidpAdapterDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  LARGE_INTEGER v5; // rbx
  char v6; // r12
  unsigned int v7; // r14d
  char v8; // si
  bool v9; // r15
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  char v12; // si
  USHORT CurrentNodeNumber; // ax
  unsigned __int64 Mask; // rdx
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // cl
  _QWORD *v17; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v19; // rax
  LARGE_INTEGER v20; // rdx
  unsigned int LowPart; // ecx
  LARGE_INTEGER v22; // r8
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp-68h] BYREF
  int v26; // [rsp+68h] [rbp-60h]
  int v27; // [rsp+6Ch] [rbp-5Ch]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-50h]
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp-48h] BYREF

  v4 = DeferredContext[8];
  ProcNumber = 0;
  v5.QuadPart = 0LL;
  Affinity = 0LL;
  v6 = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 320), 1, 0) == 1 )
    return;
  v7 = 0;
  v29 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && (byte_140171463 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v5 = PerformanceCounter;
  }
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 304) || *(_QWORD *)(v4 + 312);
  if ( DpcCompletionLimit )
  {
    do
    {
      if ( !*(_QWORD *)(v4 + 304) && !*(_QWORD *)(v4 + 312) && !v8 )
      {
        *(_QWORD *)(v4 + 304) = ExpInterlockedFlushSList((PSLIST_HEADER)(v4 + 256));
        *(_QWORD *)(v4 + 312) = ExpInterlockedFlushSList((PSLIST_HEADER)(v4 + 272));
        v8 = 1;
      }
      v10 = *(_QWORD **)(v4 + 304);
      if ( v10 )
      {
        v17 = v10 - 4;
        *(_QWORD *)(v4 + 304) = *v10;
        if ( (*((_BYTE *)v10 - 15) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(v4, *((unsigned int *)v17 + 187));
          *((_BYTE *)v17 + 17) &= ~1u;
        }
        ((void (__fastcall *)(_QWORD *, _QWORD *, PVOID, PVOID))v17[82])(
          v17,
          DeferredContext,
          SystemArgument1,
          SystemArgument2);
      }
      else
      {
        v11 = *(_QWORD **)(v4 + 312);
        if ( !v11 )
          break;
        *(_QWORD *)(v4 + 312) = *v11;
        RaidUnitCompleteIrpRequest((PIRP)(v11 - 16), *(_DWORD *)(v11[7] + 24LL));
      }
      ++v7;
    }
    while ( v7 < DpcCompletionLimit );
  }
  v12 = *(_QWORD *)(v4 + 304) || *(_QWORD *)(v4 + 312);
  *(_DWORD *)(v4 + 320) = 0;
  if ( v12 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    KeQueryNodeActiveAffinity(CurrentNodeNumber, &Affinity, 0LL);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    Mask = Affinity.Mask;
    v15 = ProcNumber.Number + 1;
    ProcNumber.Number = v15;
    if ( v15 >= 0x40u )
    {
LABEL_21:
      v16 = 0;
      ProcNumber.Number = 0;
      if ( (Affinity.Mask & 1) == 0 )
      {
        do
          ++v16;
        while ( !_bittest64((const __int64 *)&Mask, v16) );
        ProcNumber.Number = v16;
      }
    }
    else
    {
      while ( !_bittest64((const __int64 *)&Mask, v15) )
      {
        ProcNumber.Number = ++v15;
        if ( v15 >= 0x40u )
          goto LABEL_21;
      }
    }
    KeSetTargetProcessorDpcEx((PKDPC)(*(_QWORD *)(v4 + 8) + 200LL), &ProcNumber);
  }
  else
  {
    if ( !v9 )
      *(_WORD *)(*(_QWORD *)(v4 + 8) + 202LL) = 0;
    if ( !FirstEntrySList((PSLIST_HEADER)(v4 + 256)) && !FirstEntrySList((PSLIST_HEADER)(v4 + 272)) )
      goto LABEL_32;
  }
  KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v4 + 8) + 200LL), 0LL, 0LL);
LABEL_32:
  v27 = MEMORY[0xFFFFF78000000324];
  v26 = MEMORY[0xFFFFF78000000320] - v29;
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v29) > *(_DWORD *)(v4 + 4712) )
  {
    *(_DWORD *)(v4 + 4712) = v26;
    *(_DWORD *)(v4 + 4716) = v7;
  }
  if ( v7 > *(_DWORD *)(v4 + 4708) )
    *(_DWORD *)(v4 + 4708) = v7;
  if ( StorEtwLoggingEnabled && (byte_140171463 & 4) != 0 && v7 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v19 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v19.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v19.QuadPart > 0 && v19.QuadPart < v5.QuadPart )
      v23 = v19.QuadPart - v5.QuadPart - 1;
    else
      v23 = v19.QuadPart - v5.QuadPart;
    if ( UseQPCTime )
    {
      LowPart = PerformanceFrequency.LowPart;
      v24 = 0LL;
      if ( PerformanceFrequency.QuadPart && v23 )
      {
        v22.QuadPart = 1000 * (v23 % PerformanceFrequency.QuadPart);
        v20.QuadPart = 10000 * (v22.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                     % PerformanceFrequency.QuadPart;
        v24 = 10000 * (v22.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 10000
            * (1000 * (v23 / PerformanceFrequency.QuadPart)
             + v22.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      v24 = v23;
    }
    v29 = v24;
    if ( (byte_140171463 & 4) != 0 )
    {
      if ( v12 || v9 )
        v6 = 0;
      McTemplateK0pzqqxxtt_EtwWriteTransfer(
        LowPart,
        v20.LowPart,
        v22.LowPart,
        (unsigned int)RaidpAdapterDpcRoutine,
        (__int64)L"RaidpAdapterDpcRoutine",
        *(_DWORD *)(v4 + 56),
        v7,
        v23,
        v29,
        v12,
        v6);
    }
  }
}
