/*
 * XREFs of KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14031280C
 * Callers:
 *     KiHeteroAttemptPreemptionSwap @ 0x140311FF4 (KiHeteroAttemptPreemptionSwap.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiEvaluatePreemptionSwapTarget @ 0x140312514 (KiEvaluatePreemptionSwapTarget.c)
 *     KiFindBiasedProcessorIndex @ 0x14031274C (KiFindBiasedProcessorIndex.c)
 *     KiGenerateHeteroSets @ 0x140313310 (KiGenerateHeteroSets.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140313444 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x14032DDB0 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline @ 0x1404F0A14 (Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v9; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // dl
  __int64 v20; // r8
  char v21; // cl
  __int64 v22; // [rsp+30h] [rbp-61h] BYREF
  __int128 v23; // [rsp+38h] [rbp-59h] BYREF
  __int64 v24; // [rsp+48h] [rbp-49h]
  _BYTE v25[64]; // [rsp+50h] [rbp-41h] BYREF

  v7 = 0;
  v24 = 0LL;
  v8 = *(unsigned __int16 *)(a1 + 136);
  v9 = a3;
  v23 = 0LL;
  v22 = 0LL;
  if ( (unsigned __int16)v8 >= *a4 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)&a4[4 * v8 + 4];
  if ( (v12 & *(_QWORD *)(a1 + 128)) != 0 )
  {
    LOBYTE(a3) = *(_BYTE *)(a5 + 16);
    KiGenerateHeteroSets(a1, v12, a3, *(_DWORD *)(a5 + 4), *(_DWORD *)(a5 + 8), (__int64)&v23);
    v13 = *((_QWORD *)&v23 + 1) & ~*(_QWORD *)(a1 + 16);
    if ( a6 > 0 )
    {
      if ( (unsigned int)Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline() )
      {
        memset_0(v25, 0, sizeof(v25));
        RtlCopyVolatileMemory(v25, (const void *)(a1 + 512), 0x40uLL);
        v18 = 0LL;
        v19 = 0;
        v20 = 0LL;
        do
        {
          if ( _bittest64((const __int64 *)&v13, v19) && v25[v20] == 1 )
            v18 |= 1LL << v20;
          ++v19;
          ++v20;
        }
        while ( v19 < 0x40u );
        v13 = v18;
      }
      else
      {
        v13 &= *(_QWORD *)(a1 + 40);
      }
    }
    if ( v13 )
    {
      v14 = *(_QWORD *)(a2 + 192) == a1 && (v13 & *(_QWORD *)(a2 + 36416)) != 0
          ? a2
          : KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                             *(unsigned __int16 *)(a1 + 136),
                                             *(unsigned __int8 *)(a2 + 209),
                                             v13)];
      v15 = KiHeteroScanQueueForPreemptionSwapTarget(*(_QWORD *)(v14 + 36424), a2, v9, v13, a5);
      v16 = v15;
      if ( v15 )
      {
        KiAcquirePrcbLocksForPreemptionAttempt(v15, *(unsigned int *)(a5 + 20), &v22);
        if ( KiEvaluatePreemptionSwapTarget(v16, v9, (char *)a5) )
        {
          *(_QWORD *)a7 = v22;
          v21 = ~*(_BYTE *)(v16 + 35);
          *(_DWORD *)(a7 + 12) = 1;
          *(_DWORD *)(a7 + 8) = v21 & 1;
          return v7;
        }
        KiReleasePrcbLocksForIsolationUnit(&v22);
      }
    }
  }
  return (unsigned int)-1073741823;
}
