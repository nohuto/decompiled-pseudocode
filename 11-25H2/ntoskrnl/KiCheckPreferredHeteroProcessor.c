/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x140274F90
 * Callers:
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140330CFC (KiSendHeteroRescheduleIntRequestHelper.c)
 * Callees:
 *     KiFindBiasedProcessorIndex @ 0x14031274C (KiFindBiasedProcessorIndex.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140313444 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiGetProcessorClassForPolicy @ 0x14048092C (KiGetProcessorClassForPolicy.c)
 *     Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline @ 0x1404F0A14 (Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x1404F0A84 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

_BOOL8 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // r10
  unsigned int v7; // ecx
  int v8; // r9d
  unsigned int v9; // eax
  BOOL v10; // r8d
  char v11; // dl
  __int64 v12; // r15
  _WORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdi
  unsigned __int8 v30; // al
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  unsigned __int8 ProcessorClassForPolicy; // al
  __int64 v42; // r11
  unsigned __int8 v43; // r10
  unsigned __int8 v44; // cl
  __int64 v45; // rdx
  __int16 v46; // [rsp+30h] [rbp-59h]
  unsigned int v48; // [rsp+38h] [rbp-51h]
  int v49; // [rsp+3Ch] [rbp-4Dh]
  __int128 v50; // [rsp+40h] [rbp-49h] BYREF
  __int64 v51; // [rsp+50h] [rbp-39h]
  _BOOL8 v52; // [rsp+58h] [rbp-31h]
  _BYTE v53[64]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v54; // [rsp+A0h] [rbp+17h]

  memset_0(v53, 0, sizeof(v53));
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !KeHeteroSystem )
    return 0LL;
  v6 = *(unsigned __int8 *)(a1 + 516);
  v7 = *(_DWORD *)(a1 + 80);
  v8 = *(unsigned __int8 *)(a1 + 517);
  v51 = 0LL;
  v9 = *(_DWORD *)(a1 + 84);
  v50 = 0LL;
  if ( v7 <= v9 )
    v7 = v9;
  LODWORD(v54) = 33752069;
  WORD2(v54) = 6;
  BYTE6(v54) = 1;
  v10 = v7 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  v49 = v6;
  v52 = v7 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  *(_QWORD *)((char *)&v50 + 4) = __PAIR64__(v10, v6);
  LOBYTE(v51) = v8;
  v11 = *(_BYTE *)(a1 + 195);
  v48 = KiDynamicHeteroCpuPolicy[2 * v6 + v52];
  HIDWORD(v50) = v48;
  HIBYTE(v46) = *((_BYTE *)&v54 + v6);
  LOBYTE(v50) = v11;
  if ( (KiHeteroSchedulerOptionsMask & 8) == 0 || (LOBYTE(v46) = v11, (KiHeteroSchedulerOptions & 8) == 0) )
    LOBYTE(v46) = 0;
  v12 = *(_QWORD *)(a2 + 192);
  v13 = *(_WORD **)(a1 + 576);
  WORD1(v51) = v46;
  HIDWORD(v51) = (*(_DWORD *)(a1 + 120) >> 1) & 1;
  v14 = *(unsigned __int16 *)(v12 + 136);
  v15 = (unsigned __int16)v14 >= *v13 ? 0LL : *(_QWORD *)&v13[4 * v14 + 4];
  if ( (v15 & *(_QWORD *)(v12 + 128)) == 0 )
    return 0LL;
  v16 = *(_QWORD *)(v12 + 192);
  v17 = 3LL * (v8 + (unsigned int)*(unsigned __int8 *)(v12 + 185) * (v10 + 2 * (_DWORD)v6));
  v18 = *(_QWORD *)(v16 + 24LL * (v8 + (unsigned int)*(unsigned __int8 *)(v12 + 185) * (v10 + 2 * (_DWORD)v6)) + 16);
  v19 = v18 & *(_QWORD *)(v16 + 8 * v17 + 8);
  v20 = v19 & *(_QWORD *)(v16 + 8 * v17);
  v21 = v15 & v19;
  v22 = v15 & v20;
  v23 = v15 & v18;
  if ( v23 )
  {
    if ( v21 )
    {
      if ( !v22 )
        v22 = v21;
    }
    else
    {
      v21 = v23;
      v22 = v23;
    }
  }
  else
  {
    v23 = v15 & *(_QWORD *)(v12 + 128);
    v21 = v23;
    v22 = v23;
  }
  if ( (v23 & *(_QWORD *)(a2 + 200)) == 0 )
    return 1LL;
  v24 = ((__int64 (*)(void))Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline)();
  v25 = *(_QWORD *)(v12 + 8);
  if ( v24 && !a3 )
    v25 &= CurrentPrcb->GroupSetMember;
  if ( ((KiHeteroSchedulerOptionsMask & 2) == 0 || (KiHeteroSchedulerOptions & 2) != 0)
    && ((v49 - 1) & 0xFFFFFFFA) == 0
    && KeHeteroSystemQos
    && (*(_QWORD *)(v12 + 328) & v25) != 0
    && (*(_QWORD *)(v12 + 328) & *(_QWORD *)(a2 + 200)) == 0LL )
  {
    return 1LL;
  }
  if ( (v22 & *(_QWORD *)(a2 + 200)) != 0 )
    return 0LL;
  if ( (unsigned int)((__int64 (*)(void))Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline)() || a3 )
  {
    v26 = *(_QWORD *)(v12 + 24) & v25;
    v27 = *(_QWORD *)(a2 + 36448);
    v54 = *(_QWORD *)(a2 + 200) | *(_QWORD *)(v12 + 16);
    if ( (v54 & v27) != v27 )
    {
      if ( v26 )
        v25 = v26;
      v26 = v25;
    }
    RtlCopyVolatileMemory(v53, (const void *)(v12 + 576), 0x40uLL);
    v29 = 0LL;
    v30 = 0;
    v31 = 0LL;
    do
    {
      v32 = v30;
      if ( _bittest64(&v26, v30) )
      {
        v32 = *(unsigned __int8 *)(a2 + 209);
        v28 = (unsigned __int8)v53[v31];
        if ( (unsigned __int8)v28 < v53[v32] )
          v29 |= 1LL << v31;
      }
      ++v30;
      ++v31;
    }
    while ( v30 < 0x40u );
    if ( (v29 & v22) != 0 )
      return 1LL;
    if ( !(unsigned int)Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline(v32, v28, v31) || a3 )
    {
      v33 = v21 & v29 & ~v22;
      v34 = 0LL;
      while ( v33 )
      {
        _BitScanReverse64(&v40, v33);
        ProcessorClassForPolicy = KiGetProcessorClassForPolicy(
                                    KiProcessorBlock[*((unsigned int *)qword_140F216A8
                                                     + 64 * *(unsigned __int16 *)(v12 + 136)
                                                     + (unsigned int)v40)],
                                    v48);
        if ( ProcessorClassForPolicy > v43 )
          return 1LL;
        v33 &= ~*(_QWORD *)(v42 + 200);
      }
      if ( !v49
        && v52
        && v48 - 1 <= 1
        && !HIDWORD(v51)
        && !*(_DWORD *)(a2 + 33752)
        && !*(_DWORD *)(*(_QWORD *)(a2 + 36424) + 8LL) )
      {
        v36 = *(_QWORD *)(v12 + 80) & v21 & ~v54;
        if ( (v54 & *(_QWORD *)(a2 + 36448)) == *(_QWORD *)(a2 + 36448) )
        {
          if ( (unsigned int)Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline() )
          {
            RtlCopyVolatileMemory(v53, (const void *)(v12 + 512), 0x40uLL);
            v44 = 0;
            v45 = 0LL;
            do
            {
              if ( _bittest64(&v36, v44) && v53[v45] == 1 )
                v34 |= 1LL << v45;
              ++v44;
              ++v45;
            }
            while ( v44 < 0x40u );
            v36 = v34;
          }
          else
          {
            v36 &= *(_QWORD *)(v12 + 40);
          }
        }
        if ( v36 )
        {
          v37 = *(unsigned int *)(a1 + 588);
          v38 = KiProcessorBlock[v37];
          v39 = (v36 & *(_QWORD *)(v38 + 36416)) != 0
              ? KiProcessorBlock[v37]
              : KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                                 *(unsigned __int8 *)(v38 + 208),
                                                 *(unsigned __int8 *)(v38 + 209),
                                                 v36)];
          if ( KiHeteroScanQueueForPreemptionSwapTarget(*(_QWORD *)(v39 + 36424), v38, a2, v36, (__int64)&v50) )
            return 1LL;
        }
      }
    }
    return 0LL;
  }
  return (v22 & KeGetCurrentPrcb()->GroupSetMember) != 0;
}
