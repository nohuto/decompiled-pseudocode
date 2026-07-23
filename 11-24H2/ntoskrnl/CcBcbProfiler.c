/*
 * XREFs of CcBcbProfiler @ 0x1405055A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x14045517C (KeExitRetpoline.c)
 *     VslVerifyPage @ 0x14058BA20 (VslVerifyPage.c)
 *     CcAdjustBcbDepth @ 0x1406B6A00 (CcAdjustBcbDepth.c)
 */

void __fastcall CcBcbProfiler(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r10
  unsigned int v4; // r8d
  char v5; // r14
  __int64 v6; // r12
  int v7; // ebx
  unsigned __int64 v8; // r15
  _QWORD *v9; // r9
  const char *v10; // rax
  unsigned int v11; // r11d
  __int64 i; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // r9
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // zf
  const char *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  unsigned __int8 *v25; // r10
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // eax
  int v32; // r13d
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // r14
  int v36; // eax
  unsigned __int64 v37; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  char *ExceptionStack; // rbx
  char *DpcStack; // r8
  _KTHREAD *CurrentThread; // r9
  char v42; // [rsp+40h] [rbp-38h] BYREF
  __int64 v43; // [rsp+48h] [rbp-30h]
  __int64 v44; // [rsp+88h] [rbp+10h]

  KeExitRetpoline();
  if ( *(_DWORD *)(a2 + 172) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 184), DelayedWorkQueue);
  }
  else
  {
    v3 = *(_QWORD **)(a2 + 128);
    v4 = *(_DWORD *)(a2 + 144);
    v5 = *(_BYTE *)(a2 + 168);
    v6 = *(_QWORD *)(a2 + 160);
    LOBYTE(v7) = v5;
    v8 = *(_QWORD *)(a2 + 136) + *(unsigned int *)v3;
    v44 = v4;
    v9 = (_QWORD *)v8;
    v10 = (const char *)v8;
    if ( v8 < v8 + v4 )
    {
      do
      {
        _mm_prefetch(v10, 0);
        v10 += 64;
      }
      while ( (unsigned __int64)v10 < v8 + v4 );
    }
    v11 = v4 >> 7;
    for ( i = *(_QWORD *)(a2 + 160); v11; --v11 )
    {
      v13 = 8LL;
      do
      {
        v14 = *v9 ^ i;
        v15 = v9 + 1;
        v16 = *v15 ^ __ROL8__(v14, v7);
        v9 = v15 + 1;
        i = __ROL8__(v16, v7);
        --v13;
      }
      while ( v13 );
      v17 = __ROL8__(v6 ^ ((unsigned __int64)v9 - v8), 17) ^ v6 ^ ((unsigned __int64)v9 - v8);
      v43 = (v17 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v7 = ((unsigned __int8)(v43 ^ v17) ^ (unsigned __int8)v7) & 0x3F;
      if ( !v7 )
        LOBYTE(v7) = 1;
    }
    v18 = v4 & 0x7F;
    if ( (unsigned int)v18 >= 8 )
    {
      v19 = (unsigned __int64)(unsigned int)v18 >> 3;
      do
      {
        i = __ROL8__(*v9++ ^ i, v7);
        v18 = (unsigned int)(v18 - 8);
        --v19;
      }
      while ( v19 );
    }
    if ( (_DWORD)v18 )
    {
      do
      {
        v20 = *(unsigned __int8 *)v9;
        v9 = (_QWORD *)((char *)v9 + 1);
        i = __ROL8__(v20 ^ i, v7);
        v21 = (_DWORD)v18 == 1;
        v18 = (unsigned int)(v18 - 1);
      }
      while ( !v21 );
    }
    v22 = (const char *)v3;
    if ( v3 < (_QWORD *)((char *)v3 + 12) )
    {
      do
      {
        _mm_prefetch(v22, 0);
        v22 += 64;
      }
      while ( v22 < (const char *)v3 + 12 );
    }
    v23 = __ROL8__(*v3 ^ i, v5);
    LODWORD(v24) = 4;
    v25 = (unsigned __int8 *)(v3 + 1);
    do
    {
      v26 = *v25++;
      v23 = __ROL8__(v26 ^ v23, v5);
      v21 = (_DWORD)v24 == 1;
      v24 = (unsigned int)(v24 - 1);
    }
    while ( !v21 );
    v27 = ExGenRandom(1, v24, v18, (__int64)v9);
    v28 = -1200000000LL - v27 % 0x5F5E100uLL;
    v31 = ExGenRandom(1, v27 / 0x5F5E100uLL, v29, v30);
    KeSetCoalescableTimer((PKTIMER)(a2 + 64), (LARGE_INTEGER)v28, 0, v31 % 0x2710, (PKDPC)a2);
    if ( v23 != *(_QWORD *)(a2 + 152) )
    {
      if ( *(_DWORD *)(a2 + 176) )
      {
        v32 = *(_DWORD *)(a2 + 172);
        if ( v44 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v34 = v8 & 0xFFFFFFFFFFFFF000uLL;
          v35 = (v8 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v36 = VslVerifyPage(v34, 0LL);
            if ( v36 == -1073741267 )
              break;
LABEL_30:
            if ( v36 < 0 )
            {
              __writecr8(CurrentIrql);
              goto LABEL_35;
            }
LABEL_31:
            v34 += 4096LL;
            v35 += 4096LL;
            if ( v35 == ((v8 + v44 - 1) | 0xFFF) )
            {
              __writecr8(CurrentIrql);
              return;
            }
          }
          v37 = CurrentIrql;
          while ( v32 )
          {
            if ( CurrentIrql > 1u )
              goto LABEL_31;
            v37 = CurrentIrql;
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v36 = VslVerifyPage(v34, 0LL);
            if ( v36 != -1073741267 )
              goto LABEL_30;
          }
          __writecr8(v37);
        }
      }
LABEL_35:
      _disable();
      CurrentPrcb = KeGetCurrentPrcb();
      ExceptionStack = (char *)CurrentPrcb->ExceptionStack;
      DpcStack = (char *)CurrentPrcb->DpcStack;
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( &v42 > ExceptionStack || &v42 < &ExceptionStack[-(unsigned int)KeExceptionStackSize] )
      {
        if ( CurrentPrcb->DpcRoutineActive && &v42 <= DpcStack && &v42 >= &DpcStack[-KeDpcStackSize] )
          ExceptionStack = (char *)CurrentPrcb->DpcStack;
        else
          ExceptionStack = (char *)CurrentThread->InitialStack;
      }
      CurrentThread[1].QuantumTarget = 0LL;
      CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
      ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
      CcAdjustBcbDepth(
        __ROL4__(277872640, 140),
        __ROR8__(0x7EB1239169D1474LL, 141),
        0,
        v8,
        (unsigned int)__ROR4__(17170432, 144),
        (__int64)KeBugCheckEx,
        (__int64)(ExceptionStack - 8));
      JUMPOUT(0x140505980LL);
    }
  }
}
