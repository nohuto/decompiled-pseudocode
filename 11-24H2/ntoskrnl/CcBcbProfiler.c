/*
 * XREFs of CcBcbProfiler @ 0x140507CE0
 * Callers:
 *     <none>
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x14046029C (KeExitRetpoline.c)
 *     VslVerifyPage @ 0x14058EA00 (VslVerifyPage.c)
 *     CcAdjustBcbDepth @ 0x1406B5A60 (CcAdjustBcbDepth.c)
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
  unsigned int v18; // r8d
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rax
  __int64 v22; // rdi
  int v23; // edx
  unsigned __int8 *v24; // r10
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned int v27; // eax
  int v28; // r13d
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r14
  int v32; // eax
  unsigned __int64 v33; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  char *ExceptionStack; // rbx
  char *DpcStack; // r8
  _KTHREAD *CurrentThread; // r9
  char v38; // [rsp+40h] [rbp-38h] BYREF
  __int64 v39; // [rsp+48h] [rbp-30h]
  __int64 v40; // [rsp+88h] [rbp+10h]

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
    v40 = v4;
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
      v39 = (v17 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v7 = ((unsigned __int8)(v39 ^ v17) ^ (unsigned __int8)v7) & 0x3F;
      if ( !v7 )
        LOBYTE(v7) = 1;
    }
    v18 = v4 & 0x7F;
    if ( v18 >= 8 )
    {
      v19 = (unsigned __int64)v18 >> 3;
      do
      {
        i = __ROL8__(*v9++ ^ i, v7);
        v18 -= 8;
        --v19;
      }
      while ( v19 );
    }
    for ( ; v18; --v18 )
    {
      v20 = *(unsigned __int8 *)v9;
      v9 = (_QWORD *)((char *)v9 + 1);
      i = __ROL8__(v20 ^ i, v7);
    }
    v21 = (const char *)v3;
    if ( v3 < (_QWORD *)((char *)v3 + 12) )
    {
      do
      {
        _mm_prefetch(v21, 0);
        v21 += 64;
      }
      while ( v21 < (const char *)v3 + 12 );
    }
    v22 = __ROL8__(*v3 ^ i, v5);
    v23 = 4;
    v24 = (unsigned __int8 *)(v3 + 1);
    do
    {
      v25 = *v24++;
      v22 = __ROL8__(v25 ^ v22, v5);
      --v23;
    }
    while ( v23 );
    v26 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
    v27 = ExGenRandom(1);
    KeSetCoalescableTimer((PKTIMER)(a2 + 64), (LARGE_INTEGER)v26, 0, v27 % 0x2710, (PKDPC)a2);
    if ( v22 != *(_QWORD *)(a2 + 152) )
    {
      if ( *(_DWORD *)(a2 + 176) )
      {
        v28 = *(_DWORD *)(a2 + 172);
        if ( v40 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v30 = v8 & 0xFFFFFFFFFFFFF000uLL;
          v31 = (v8 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v32 = VslVerifyPage(v30, 0LL);
            if ( v32 == -1073741267 )
              break;
LABEL_30:
            if ( v32 < 0 )
            {
              __writecr8(CurrentIrql);
              goto LABEL_35;
            }
LABEL_31:
            v30 += 4096LL;
            v31 += 4096LL;
            if ( v31 == ((v8 + v40 - 1) | 0xFFF) )
            {
              __writecr8(CurrentIrql);
              return;
            }
          }
          v33 = CurrentIrql;
          while ( v28 )
          {
            if ( CurrentIrql > 1u )
              goto LABEL_31;
            v33 = CurrentIrql;
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v32 = VslVerifyPage(v30, 0LL);
            if ( v32 != -1073741267 )
              goto LABEL_30;
          }
          __writecr8(v33);
        }
      }
LABEL_35:
      _disable();
      CurrentPrcb = KeGetCurrentPrcb();
      ExceptionStack = (char *)CurrentPrcb->ExceptionStack;
      DpcStack = (char *)CurrentPrcb->DpcStack;
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( &v38 > ExceptionStack || &v38 < &ExceptionStack[-(unsigned int)KeExceptionStackSize] )
      {
        if ( CurrentPrcb->DpcRoutineActive && &v38 <= DpcStack && &v38 >= &DpcStack[-KeDpcStackSize] )
          ExceptionStack = (char *)CurrentPrcb->DpcStack;
        else
          ExceptionStack = (char *)CurrentThread->InitialStack;
      }
      CurrentThread[1].QuantumTarget = 0LL;
      CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
      ExTryAcquireSpinLockExclusiveAtDpcLevel();
      CcAdjustBcbDepth(
        __ROL4__(277872640, 140),
        __ROR8__(0x7EB1239169D1474LL, 141),
        0,
        v8,
        (unsigned int)__ROR4__(17170432, 144),
        (__int64)KeBugCheckEx,
        (__int64)(ExceptionStack - 8));
      JUMPOUT(0x1405080C0LL);
    }
  }
}
