/*
 * XREFs of KiProcessThreadWaitList @ 0x1402C75B0
 * Callers:
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402D8290 (KiPriQueueThreadPriorityChanged.c)
 *     KiProcessExpiredTimerList @ 0x140315CC0 (KiProcessExpiredTimerList.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 *     KiExpireTimer2 @ 0x1403AF650 (KiExpireTimer2.c)
 *     KiTimer2Expiration @ 0x1403AFFE0 (KiTimer2Expiration.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     EtwTraceReadyThread @ 0x1402C9340 (EtwTraceReadyThread.c)
 *     KiInswapAndReadyThread @ 0x1402DE624 (KiInswapAndReadyThread.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiProcessThreadWaitList(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v7; // r13
  _QWORD *v8; // r13
  __int64 *v9; // rsi
  __int64 *v10; // r14
  int v11; // eax
  _QWORD *v12; // r15
  int v13; // r12d
  volatile signed __int32 *v14; // r12
  unsigned int v15; // r15d
  __int64 *v16; // rcx
  __int64 **v17; // rax
  __int64 result; // rax
  bool v19; // zf
  unsigned int v20; // ebx
  __int64 v21; // rdx
  int v22; // ecx
  char v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // [rsp+28h] [rbp-70h] BYREF
  _QWORD *v27; // [rsp+30h] [rbp-68h]
  __int64 v28; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v29[12]; // [rsp+40h] [rbp-58h]
  int v30; // [rsp+A0h] [rbp+8h]

  v4 = *(_QWORD **)(a1 + 11528);
  v30 = 0;
  v5 = 0LL;
  v26 = 0LL;
  *(_QWORD *)(a1 + 11528) = 0LL;
  while ( v4 )
  {
    v7 = v4;
    v27 = v4;
    v4 = (_QWORD *)*v4;
    v8 = v7 - 27;
    v9 = (__int64 *)v8[26];
    v10 = &v9[6 * *((unsigned __int8 *)v8 + 587)];
    do
    {
      if ( *((_BYTE *)v9 + 17) < 5u )
      {
        v14 = (volatile signed __int32 *)v9[4];
        v15 = 0;
        if ( _interlockedbittestandset(v14, 7u) )
        {
          do
          {
            if ( (++v15 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v15);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( (*v14 & 0x80u) != 0 || _interlockedbittestandset(v14, 7u) );
        }
        if ( *((_BYTE *)v9 + 17) == 4 )
        {
          v16 = (__int64 *)*v9;
          v17 = (__int64 **)v9[1];
          if ( *(__int64 **)(*v9 + 8) != v9 || *v17 != v9 )
            __fastfail(3u);
          *v17 = v16;
          v16[1] = (__int64)v17;
        }
        _InterlockedAnd(v14, 0xFFFFFF7F);
      }
      v9 += 6;
    }
    while ( v9 != v10 );
    *((_BYTE *)v8 + 566) = a2;
    *((_BYTE *)v8 + 567) = a3;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v8, a2, a3, a4);
    v11 = *((_DWORD *)v8 + 30);
    if ( (v11 & 0x20000) == 0 || (v11 & 0x100000) != 0 )
    {
      v24 = v27;
      *v27 = v5;
      v5 = v24;
    }
    else
    {
      v12 = v27;
      v13 = v30;
      *v27 = v26;
      do
      {
        KiDeferredReadySingleThread(a1, v12 - 27, &v26, 0LL);
        v12 = v26;
        ++v13;
        if ( v26 )
          v26 = (_QWORD *)*v26;
        if ( (v13 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(a1 + 13784);
      }
      while ( v12 );
      v30 = v13;
    }
  }
  result = *(unsigned __int8 *)(a1 + 13785);
  if ( !(_BYTE)result )
    goto LABEL_35;
  v19 = (_BYTE)result == 1;
  result = (__int64)KeGetCurrentPrcb();
  if ( v19 )
  {
    v22 = *(_DWORD *)(a1 + 13788);
    v23 = *(_BYTE *)(a1 + 13784);
    ++*(_DWORD *)(result + 36564);
    *(_QWORD *)&v29[4] = 0LL;
    *(_DWORD *)v29 = v22;
    v21 = 31LL;
    v28 = 6LL;
    if ( v23 != 1 )
      v21 = 47LL;
  }
  else
  {
    v19 = *(_BYTE *)(a1 + 13784) == 1;
    v20 = 31;
    HIDWORD(v28) = 0;
    *(_DWORD *)&v29[8] = 0;
    if ( !v19 )
      v20 = 47;
    ++*(_DWORD *)(result + 36564);
    if ( a1 == -13792 )
      goto LABEL_32;
    result = KeIsEmptyAffinityEx(a1 + 13792);
    if ( (_DWORD)result )
      goto LABEL_32;
    LODWORD(v28) = 2;
    v21 = v20;
    *(_QWORD *)v29 = a1 + 13792;
  }
  result = HalpInterruptSendIpi(&v28, v21);
LABEL_32:
  if ( *(_BYTE *)(a1 + 13785) == 2 )
  {
    *(_QWORD *)(a1 + 13792) = 2097153LL;
    result = (__int64)memset_0((void *)(a1 + 13800), 0, 0x100uLL);
  }
  *(_BYTE *)(a1 + 13785) = 0;
  *(_DWORD *)(a1 + 13788) = 0xFFFF;
LABEL_35:
  while ( v5 )
  {
    v25 = v5;
    v5 = (_QWORD *)*v5;
    result = KiInswapAndReadyThread(a1, v25 - 27, 0LL);
  }
  return result;
}
