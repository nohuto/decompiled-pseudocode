/*
 * XREFs of KiProcessThreadWaitList @ 0x1402874A0
 * Callers:
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402A1FC8 (KiPriQueueThreadPriorityChanged.c)
 *     KiProcessExpiredTimerList @ 0x1402EE890 (KiProcessExpiredTimerList.c)
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiExpireTimer2 @ 0x140370160 (KiExpireTimer2.c)
 *     KiTimer2Expiration @ 0x140372250 (KiTimer2Expiration.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     EtwTraceReadyThread @ 0x140288F70 (EtwTraceReadyThread.c)
 *     KiInswapAndReadyThread @ 0x1402F1104 (KiInswapAndReadyThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiProcessThreadWaitList(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  __int64 *v6; // rbp
  _QWORD *v7; // r13
  _QWORD *v8; // r13
  __int64 *v9; // rsi
  __int64 *v10; // r14
  int v11; // eax
  _QWORD *v12; // r15
  int v13; // r12d
  volatile signed __int32 *v14; // r12
  unsigned int v15; // r15d
  __int64 **v16; // rax
  __int64 result; // rax
  bool v18; // zf
  unsigned int v19; // ebx
  __int64 v20; // rdx
  int v21; // ecx
  char v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // [rsp+28h] [rbp-70h] BYREF
  _QWORD *v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v28[12]; // [rsp+40h] [rbp-58h]
  int v29; // [rsp+A0h] [rbp+8h]

  v4 = (_QWORD *)a1[1441];
  v29 = 0;
  v5 = 0LL;
  v25 = 0LL;
  v6 = a1;
  a1[1441] = 0LL;
  while ( v4 )
  {
    v7 = v4;
    v26 = v4;
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
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
          a1 = (__int64 *)*v9;
          v16 = (__int64 **)v9[1];
          if ( *(__int64 **)(*v9 + 8) != v9 || *v16 != v9 )
            __fastfail(3u);
          *v16 = a1;
          a1[1] = (__int64)v16;
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
      v23 = v26;
      *v26 = v5;
      v5 = v23;
    }
    else
    {
      v12 = v26;
      v13 = v29;
      *v26 = v25;
      do
      {
        KiDeferredReadySingleThread(v6, v12 - 27, &v25, 0LL);
        v12 = v25;
        ++v13;
        if ( v25 )
          v25 = (_QWORD *)*v25;
        if ( (v13 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(v6 + 1723);
      }
      while ( v12 );
      v29 = v13;
    }
  }
  result = *((unsigned __int8 *)v6 + 13785);
  if ( !(_BYTE)result )
    goto LABEL_35;
  v18 = (_BYTE)result == 1;
  result = (__int64)KeGetCurrentPrcb();
  if ( v18 )
  {
    v21 = *((_DWORD *)v6 + 3447);
    v22 = *((_BYTE *)v6 + 13784);
    ++*(_DWORD *)(result + 36564);
    *(_QWORD *)&v28[4] = 0LL;
    *(_DWORD *)v28 = v21;
    v20 = 31LL;
    v27 = 6LL;
    if ( v22 != 1 )
      v20 = 47LL;
  }
  else
  {
    v18 = *((_BYTE *)v6 + 13784) == 1;
    v19 = 31;
    HIDWORD(v27) = 0;
    *(_DWORD *)&v28[8] = 0;
    if ( !v18 )
      v19 = 47;
    ++*(_DWORD *)(result + 36564);
    if ( v6 == (__int64 *)-13792LL )
      goto LABEL_32;
    result = KeIsEmptyAffinityEx(v6 + 1724);
    if ( (_DWORD)result )
      goto LABEL_32;
    LODWORD(v27) = 2;
    v20 = v19;
    *(_QWORD *)v28 = v6 + 1724;
  }
  result = HalpInterruptSendIpi(&v27, v20);
LABEL_32:
  if ( *((_BYTE *)v6 + 13785) == 2 )
  {
    v6[1724] = 2097153LL;
    result = (__int64)memset_0(v6 + 1725, 0, 0x100uLL);
  }
  *((_BYTE *)v6 + 13785) = 0;
  *((_DWORD *)v6 + 3447) = 0xFFFF;
LABEL_35:
  while ( v5 )
  {
    v24 = v5;
    v5 = (_QWORD *)*v5;
    result = KiInswapAndReadyThread(v6, v24 - 27, 0LL);
  }
  return result;
}
