/*
 * XREFs of KiRcuReportQuiescentState @ 0x14027BF9C
 * Callers:
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KiRcuCheckQuiescent @ 0x14027DA00 (KiRcuCheckQuiescent.c)
 *     KiCheckWaitNext @ 0x14027DB60 (KiCheckWaitNext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiRcuCheckQuiescentForIdle @ 0x1404D5EA8 (KiRcuCheckQuiescentForIdle.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140464068 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404DAA50 (KiSrcuCompareGraceSequence.c)
 */

__int64 __fastcall KiRcuReportQuiescentState(unsigned __int64 *a1, signed __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 *v3; // rbx
  signed __int64 *v4; // r15
  unsigned __int64 v5; // r14
  int v6; // r12d
  int v9; // eax
  __int64 v10; // r8
  signed __int64 v11; // r9
  unsigned __int64 v12; // r10
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
  v3 = (unsigned __int64 *)a1[1];
  v4 = (signed __int64 *)(a1[2] + 14576);
  v5 = *a1;
  v6 = 1;
  while ( v3 )
  {
    if ( !(unsigned __int8)KxTryToAcquireSpinLock(v3 + 4) )
    {
      if ( !v6 )
      {
        v16 = v3[2];
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
    if ( (v3[7] & v5) != 0 )
      goto LABEL_18;
    v9 = KiSrcuCompareGraceSequence(a2, v3[5]);
    if ( v9 < 0 )
      goto LABEL_18;
    if ( v10 )
    {
      if ( v9 > 0 )
      {
        a2 = v11;
        v3[8] |= v5 | v10;
      }
    }
    else
    {
      v3[5] = a2;
    }
    *v4 = a2;
    v3[7] |= v5;
    if ( (v3[3] | v3[7]) != v3[2] )
    {
LABEL_18:
      KxReleaseSpinLock(v3 + 4);
      return 0LL;
    }
    if ( v6 )
    {
      v13 = v3[8];
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
    v3[7] = v12;
    v3[8] = v12;
    KxReleaseSpinLock(v3 + 4);
    v5 = *v3;
    v4 = (signed __int64 *)(v3 + 6);
    v3 = (unsigned __int64 *)v3[1];
    v6 = 0;
  }
  while ( (int)KiSrcuCompareGraceSequence(a2, qword_140F204A0) > 0 )
  {
    if ( v22 == _InterlockedCompareExchange64(&qword_140F204A0, a2, v22) )
      return v2;
  }
  return 0;
}
