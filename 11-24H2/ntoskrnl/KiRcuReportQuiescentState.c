/*
 * XREFs of KiRcuReportQuiescentState @ 0x14031C844
 * Callers:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiRcuCheckQuiescent @ 0x14032DA60 (KiRcuCheckQuiescent.c)
 *     KiCheckWaitNext @ 0x1403308C0 (KiCheckWaitNext.c)
 *     KiRcuCheckQuiescentForIdle @ 0x1404CE9DC (KiRcuCheckQuiescentForIdle.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404CD170 (KiSrcuCompareGraceSequence.c)
 */

__int64 __fastcall KiRcuReportQuiescentState(unsigned __int64 *a1, signed __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rbx
  signed __int64 *v4; // r15
  unsigned __int64 v5; // r14
  int v6; // r12d
  int v9; // eax
  __int64 v10; // r8
  signed __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // rsi
  signed __int64 v19; // rdi
  unsigned __int64 *v20; // rdx
  signed __int64 v22; // r8

  v2 = 1;
  v3 = a1[1];
  v4 = (signed __int64 *)(a1[2] + 14576);
  v5 = *a1;
  v6 = 1;
  while ( v3 )
  {
    if ( !(unsigned __int8)KxTryToAcquireSpinLock(v3 + 32) )
    {
      if ( !v6 )
      {
        v16 = *(_QWORD *)(v3 + 16);
        _BitScanForward64(&v17, *a1);
        v18 = &a1[-4 * v17];
        v19 = a2 - 1;
        if ( v16 )
        {
          v20 = v18 + 2;
          do
          {
            if ( (v16 & 1) != 0 )
              *(_QWORD *)(*v20 + 14576) = v19;
            v20 += 4;
            v16 >>= 1;
          }
          while ( v16 );
        }
      }
      return 0LL;
    }
    if ( (*(_QWORD *)(v3 + 56) & v5) != 0 )
      goto LABEL_18;
    v9 = KiSrcuCompareGraceSequence(a2, *(_QWORD *)(v3 + 40));
    if ( v9 < 0 )
      goto LABEL_18;
    if ( v10 )
    {
      if ( v9 > 0 )
      {
        a2 = v11;
        *(_QWORD *)(v3 + 64) |= v5 | v10;
      }
    }
    else
    {
      *(_QWORD *)(v3 + 40) = a2;
    }
    *v4 = a2;
    *(_QWORD *)(v3 + 56) |= v5;
    if ( (*(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 56)) != *(_QWORD *)(v3 + 16) )
    {
LABEL_18:
      KxReleaseSpinLock((volatile signed __int64 *)(v3 + 32));
      return 0LL;
    }
    if ( v6 )
    {
      v13 = *(_QWORD *)(v3 + 64);
      if ( v13 )
      {
        _BitScanForward64(&v14, *a1);
        v15 = (__int64)&a1[-4 * (unsigned int)v14 + 2];
        do
        {
          if ( (v13 & 1) != 0 )
            *(_QWORD *)(*(_QWORD *)v15 + 14576LL) = a2;
          v15 += 32LL;
          v13 >>= 1;
        }
        while ( v13 );
      }
    }
    *(_QWORD *)(v3 + 56) = v12;
    *(_QWORD *)(v3 + 64) = v12;
    KxReleaseSpinLock((volatile signed __int64 *)(v3 + 32));
    v5 = *(_QWORD *)v3;
    v4 = (signed __int64 *)(v3 + 48);
    v3 = *(_QWORD *)(v3 + 8);
    v6 = 0;
  }
  while ( (int)KiSrcuCompareGraceSequence(a2, qword_140F205C0) > 0 )
  {
    if ( v22 == _InterlockedCompareExchange64(&qword_140F205C0, a2, v22) )
      return v2;
  }
  return 0;
}
