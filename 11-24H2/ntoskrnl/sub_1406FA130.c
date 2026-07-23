/*
 * XREFs of sub_1406FA130 @ 0x1406FA130
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x14045517C (KeExitRetpoline.c)
 *     VslVerifyPage @ 0x14058BA20 (VslVerifyPage.c)
 *     CcAdjustBcbDepth @ 0x1406B6A00 (CcAdjustBcbDepth.c)
 */

BOOLEAN __fastcall sub_1406FA130(PKDPC Dpc, __int64 a2)
{
  __int64 ProcessorHistory_low; // r8
  _QWORD *v4; // r10
  char SystemArgument1; // r14
  int v6; // ebx
  __int64 v7; // rbp
  _QWORD *v8; // r9
  const char *v9; // rax
  unsigned __int64 v10; // r13
  unsigned int v11; // r11d
  unsigned __int64 i; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  _QWORD *v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // zf
  const char *v22; // rax
  PKDEFERRED_ROUTINE v23; // rdi
  __int64 v24; // rdx
  unsigned __int8 *v25; // r10
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // eax
  BOOLEAN result; // al
  int SystemArgument1_high; // r12d
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r14
  int v37; // eax
  unsigned __int64 v38; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  char *ExceptionStack; // rbx
  char *DpcStack; // r8
  _KTHREAD *CurrentThread; // r9
  _BYTE v43[72]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v44; // [rsp+90h] [rbp+8h]

  KeExitRetpoline(Dpc, a2);
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  v4 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  LOBYTE(v6) = SystemArgument1;
  v44 = ProcessorHistory_low;
  v7 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v4;
  v8 = (_QWORD *)v7;
  v9 = (const char *)v7;
  v10 = ProcessorHistory_low + v7;
  if ( v7 < (unsigned __int64)(ProcessorHistory_low + v7) )
  {
    do
    {
      _mm_prefetch(v9, 0);
      v9 += 64;
    }
    while ( (unsigned __int64)v9 < v10 );
  }
  v11 = (unsigned int)ProcessorHistory_low >> 7;
  for ( i = (unsigned __int64)Dpc[2].DeferredContext; v11; --v11 )
  {
    v13 = 8LL;
    do
    {
      v14 = *v8 ^ i;
      v15 = v8 + 1;
      v16 = *v15 ^ __ROL8__(v14, v6);
      v8 = v15 + 1;
      i = __ROL8__(v16, v6);
      --v13;
    }
    while ( v13 );
    v17 = __ROL8__((unsigned __int64)Dpc[2].DeferredContext ^ ((unsigned __int64)v8 - v7), 17) ^ (unsigned __int64)Dpc[2].DeferredContext ^ ((unsigned __int64)v8 - v7);
    v6 = ((unsigned __int8)((((unsigned __int64)v17 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v17) ^ (unsigned __int8)v6) & 0x3F;
    if ( !v6 )
      LOBYTE(v6) = 1;
  }
  v18 = ProcessorHistory_low & 0x7F;
  if ( (unsigned int)v18 >= 8 )
  {
    v19 = (unsigned __int64)(unsigned int)v18 >> 3;
    do
    {
      i = __ROL8__(*v8++ ^ i, v6);
      v18 = (unsigned int)(v18 - 8);
      --v19;
    }
    while ( v19 );
  }
  if ( (_DWORD)v18 )
  {
    do
    {
      v20 = *(unsigned __int8 *)v8;
      v8 = (_QWORD *)((char *)v8 + 1);
      i = __ROL8__(v20 ^ i, v6);
      v21 = (_DWORD)v18 == 1;
      v18 = (unsigned int)(v18 - 1);
    }
    while ( !v21 );
  }
  v22 = *(const char **)&Dpc[2].TargetInfoAsUlong;
  if ( v4 < (_QWORD *)((char *)v4 + 12) )
  {
    do
    {
      _mm_prefetch(v22, 0);
      v22 += 64;
    }
    while ( v22 < (const char *)v4 + 12 );
  }
  v23 = (PKDEFERRED_ROUTINE)__ROL8__(*v4 ^ i, SystemArgument1);
  LODWORD(v24) = 4;
  v25 = (unsigned __int8 *)(v4 + 1);
  do
  {
    v26 = *v25++;
    v23 = (PKDEFERRED_ROUTINE)__ROL8__(v26 ^ (unsigned __int64)v23, SystemArgument1);
    v21 = (_DWORD)v24 == 1;
    v24 = (unsigned int)(v24 - 1);
  }
  while ( !v21 );
  v27 = ExGenRandom((int)v24 + 1, v24, v18, (__int64)v8);
  v28 = -1200000000LL - v27 % 0x5F5E100uLL;
  v31 = ExGenRandom(1, v27 / 0x5F5E100uLL, v29, v30);
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v28, 0, v31 % 0x2710, Dpc);
  if ( v23 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1);
      if ( v44 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v35 = v7 & 0xFFFFFFFFFFFFF000uLL;
        v36 = (v7 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v37 = VslVerifyPage(v35, 0);
          if ( v37 == -1073741267 )
            break;
LABEL_27:
          if ( v37 < 0 )
          {
            __writecr8(CurrentIrql);
            goto LABEL_33;
          }
LABEL_28:
          v35 += 4096LL;
          v36 += 4096LL;
          if ( v36 == ((v10 - 1) | 0xFFF) )
          {
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            return result;
          }
        }
        v38 = CurrentIrql;
        while ( SystemArgument1_high )
        {
          if ( CurrentIrql > 1u )
            goto LABEL_28;
          v38 = CurrentIrql;
          __writecr8(CurrentIrql);
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v37 = VslVerifyPage(v35, 0);
          if ( v37 != -1073741267 )
            goto LABEL_27;
        }
        __writecr8(v38);
      }
    }
LABEL_33:
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    ExceptionStack = (char *)CurrentPrcb->ExceptionStack;
    DpcStack = (char *)CurrentPrcb->DpcStack;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( v43 > ExceptionStack || v43 < &ExceptionStack[-(unsigned int)KeExceptionStackSize] )
    {
      if ( CurrentPrcb->DpcRoutineActive && v43 <= DpcStack && v43 >= &DpcStack[-KeDpcStackSize] )
        ExceptionStack = (char *)CurrentPrcb->DpcStack;
      else
        ExceptionStack = (char *)CurrentThread->InitialStack;
    }
    CurrentThread[1].QuantumTarget = 0LL;
    CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
    CcAdjustBcbDepth(
      (unsigned int)__ROL4__(277872640, 140),
      __ROR8__(0x7EB1239169D1474LL, 141),
      0LL,
      v7,
      (unsigned int)__ROR4__(17170432, 144),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      (_QWORD *)ExceptionStack - 1);
    JUMPOUT(0x1406FA4E7LL);
  }
  return result;
}
