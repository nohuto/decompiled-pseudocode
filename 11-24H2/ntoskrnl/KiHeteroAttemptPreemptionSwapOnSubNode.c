/*
 * XREFs of KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14041592C
 * Callers:
 *     KiHeteroAttemptPreemptionSwap @ 0x14041576C (KiHeteroAttemptPreemptionSwap.c)
 * Callees:
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402A2C70 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x1403293B4 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiEvaluatePreemptionSwapTarget @ 0x1403296A0 (KiEvaluatePreemptionSwapTarget.c)
 *     KiGenerateHeteroSets @ 0x14032A750 (KiGenerateHeteroSets.c)
 *     KiFindBiasedProcessorIndex @ 0x14032AD94 (KiFindBiasedProcessorIndex.c)
 *     KiReduceAffinityToRankListValuesEqualTo @ 0x140457418 (KiReduceAffinityToRankListValuesEqualTo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiHeteroAttemptPreemptionSwapOnSubNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  char v17; // cl
  __int64 v19; // [rsp+30h] [rbp-61h] BYREF
  __int128 v20; // [rsp+38h] [rbp-59h] BYREF
  __int64 v21; // [rsp+48h] [rbp-49h]
  _BYTE v22[64]; // [rsp+50h] [rbp-41h] BYREF

  v7 = 0;
  v21 = 0LL;
  v8 = *(unsigned __int16 *)(a1 + 136);
  v20 = 0LL;
  v19 = 0LL;
  if ( (unsigned __int16)v8 >= *a4 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)&a4[4 * v8 + 4];
  if ( (v12 & *(_QWORD *)(a1 + 128)) != 0 )
  {
    KiGenerateHeteroSets(a1, v12, *(_BYTE *)(a5 + 16), *(_DWORD *)(a5 + 4), *(_DWORD *)(a5 + 8), (__int64)&v20);
    v13 = *((_QWORD *)&v20 + 1) & ~*(_QWORD *)(a1 + 16);
    if ( a6 > 0 )
    {
      memset_0(v22, 0, sizeof(v22));
      RtlCopyVolatileMemory(v22, (const void *)(a1 + 512), 0x40uLL);
      v13 = KiReduceAffinityToRankListValuesEqualTo(v13, v22);
    }
    if ( v13 )
    {
      v14 = *(_QWORD *)(a2 + 192) == a1 && (v13 & *(_QWORD *)(a2 + 36416)) != 0
          ? a2
          : KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                             *(unsigned __int16 *)(a1 + 136),
                                             *(unsigned __int8 *)(a2 + 209),
                                             v13)];
      v15 = KiHeteroScanQueueForPreemptionSwapTarget(*(_QWORD *)(v14 + 36424), a2, a3, v13, a5);
      v16 = v15;
      if ( v15 )
      {
        KiAcquirePrcbLocksForPreemptionAttempt(v15, *(unsigned int *)(a5 + 20), (unsigned __int64 *)&v19);
        if ( KiEvaluatePreemptionSwapTarget(v16, a3, (char *)a5) )
        {
          *(_QWORD *)a7 = v19;
          v17 = ~*(_BYTE *)(v16 + 35);
          *(_DWORD *)(a7 + 12) = 1;
          *(_DWORD *)(a7 + 8) = v17 & 1;
          return v7;
        }
        KiReleasePrcbLocksForIsolationUnit(&v19);
      }
    }
  }
  return (unsigned int)-1073741823;
}
