/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x1402AC3E0
 * Callers:
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402A5F4C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 * Callees:
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x1403293B4 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiGenerateHeteroSets @ 0x14032A750 (KiGenerateHeteroSets.c)
 *     KiFindBiasedProcessorIndex @ 0x14032AD94 (KiFindBiasedProcessorIndex.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x14042B1C0 (KiHeteroComputeThreadWorkloadProperties.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x14043D9A0 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 *     KiGetProcessorClassForPolicy @ 0x140475D94 (KiGetProcessorClassForPolicy.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r11
  _WORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // r10d
  unsigned __int8 ProcessorClassForPolicy; // r11
  unsigned __int64 i; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  __int64 v31; // rdi
  unsigned __int8 v32; // cl
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rcx
  __int128 v37; // [rsp+30h] [rbp-69h] BYREF
  int v38; // [rsp+40h] [rbp-59h]
  int v39; // [rsp+44h] [rbp-55h]
  __int128 v40; // [rsp+48h] [rbp-51h] BYREF
  __int64 v41; // [rsp+58h] [rbp-41h]
  __int64 v42; // [rsp+68h] [rbp-31h]
  _OWORD v43[4]; // [rsp+70h] [rbp-29h] BYREF

  v42 = a1;
  memset(v43, 0, sizeof(v43));
  v41 = 0LL;
  v38 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v40 = 0LL;
  LOBYTE(v39) = 0;
  v37 = 0LL;
  if ( KeHeteroSystem )
  {
    KiHeteroComputeThreadWorkloadProperties(a1, &v37);
    v6 = *(_QWORD *)(a2 + 192);
    v7 = 0LL;
    v9 = *(_WORD **)(v8 + 576);
    v10 = *(unsigned __int16 *)(v6 + 136);
    v11 = (unsigned __int16)v10 >= *v9 ? 0LL : *(_QWORD *)&v9[4 * v10 + 4];
    if ( (v11 & *(_QWORD *)(v6 + 128)) != 0 )
    {
      KiGenerateHeteroSets(*(_QWORD *)(a2 + 192), v11, (unsigned __int8)v38, DWORD1(v37), DWORD2(v37), (__int64)&v40);
      if ( (*(_QWORD *)(a2 + 200) & v41) == 0 )
        return 1LL;
      v12 = ((__int64 (*)(void))Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline)();
      v13 = *(_QWORD *)(v6 + 8);
      if ( v12 && !a3 )
        v13 &= CurrentPrcb->GroupSetMember;
      if ( ((KiHeteroSchedulerOptionsMask & 2) == 0 || (KiHeteroSchedulerOptions & 2) != 0)
        && ((DWORD1(v37) - 1) & 0xFFFFFFFA) == 0 )
      {
        if ( KeHeteroSystemQos )
        {
          v14 = *(_QWORD *)(v6 + 328);
          if ( (v14 & v13) != 0 && (v14 & *(_QWORD *)(a2 + 200)) == 0 )
            return 1LL;
        }
      }
      if ( (*(_QWORD *)(a2 + 200) & (unsigned __int64)v40) == 0 )
      {
        if ( !(unsigned int)((__int64 (*)(void))Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline)()
          && !a3 )
        {
          LOBYTE(v7) = (KeGetCurrentPrcb()->GroupSetMember & (unsigned __int64)v40) != 0;
          return (unsigned int)v7;
        }
        v16 = *(_QWORD *)(v6 + 24) & v13;
        v17 = *(_QWORD *)(a2 + 200) | *(_QWORD *)(v6 + 16);
        if ( (v17 & *(_QWORD *)(a2 + 36448)) != *(_QWORD *)(a2 + 36448) )
        {
          if ( v16 )
            v13 &= *(_QWORD *)(v6 + 24);
          v16 = v13;
        }
        RtlCopyVolatileMemory(v43, (const void *)(v6 + 576), 0x40uLL);
        LOBYTE(v19) = 0;
        v20 = 0LL;
        v21 = 0LL;
        do
        {
          if ( _bittest64(&v16, (unsigned __int8)v19) )
          {
            v18 = *((unsigned __int8 *)v43 + v20);
            if ( (unsigned __int8)v18 < *((_BYTE *)v43 + *(unsigned __int8 *)(a2 + 209)) )
              v21 |= 1LL << v20;
          }
          LOBYTE(v19) = v19 + 1;
          ++v20;
        }
        while ( (unsigned __int8)v19 < 0x40u );
        v22 = v40;
        if ( (v21 & (unsigned __int64)v40) != 0 )
          return 1LL;
        if ( !(unsigned int)Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline(v18, v19, v20) || a3 )
        {
          ProcessorClassForPolicy = KiGetProcessorClassForPolicy(a2, HIDWORD(v37), (unsigned __int8)v38);
          for ( i = *((_QWORD *)&v40 + 1) & v21 & ~v22; i; i &= ~*(_QWORD *)(v27 + 200) )
          {
            _BitScanReverse64(&v26, i);
            v27 = KiProcessorBlock[*((unsigned int *)qword_140F22998
                                   + 64 * *(unsigned __int16 *)(v6 + 136)
                                   + (unsigned int)v26)];
            v28 = *(_QWORD *)(v27 + 35408);
            if ( v28 )
            {
              v29 = v28 + 4LL * (unsigned __int8)v38;
              v30 = (unsigned int)(v23 - 3) <= 1 ? *(_BYTE *)(v29 + 5) : *(_BYTE *)(v29 + 4);
            }
            else
            {
              v30 = (unsigned int)(v23 - 3) <= 1 ? *(_BYTE *)(v27 + 35338) : *(_BYTE *)(v27 + 35337);
              v23 = HIDWORD(v37);
            }
            if ( v30 > ProcessorClassForPolicy )
              return 1LL;
          }
          if ( *(_QWORD *)((char *)&v37 + 4) == 0x100000000LL
            && (unsigned int)(v23 - 1) <= 1
            && !v39
            && !*(_DWORD *)(a2 + 33752)
            && !*(_DWORD *)(*(_QWORD *)(a2 + 36424) + 8LL) )
          {
            v31 = *(_QWORD *)(v6 + 80) & *((_QWORD *)&v40 + 1) & ~v17;
            if ( (v17 & *(_QWORD *)(a2 + 36448)) == *(_QWORD *)(a2 + 36448) )
            {
              RtlCopyVolatileMemory(v43, (const void *)(v6 + 512), 0x40uLL);
              v32 = 0;
              v33 = 0LL;
              do
              {
                if ( _bittest64(&v31, v32) && *((_BYTE *)v43 + v33) == 1 )
                  v7 |= 1LL << v33;
                ++v32;
                ++v33;
              }
              while ( v32 < 0x40u );
              v31 = v7;
            }
            if ( v31 )
            {
              v34 = *(unsigned int *)(v42 + 588);
              v35 = KiProcessorBlock[v34];
              v36 = (v31 & *(_QWORD *)(v35 + 36416)) != 0
                  ? KiProcessorBlock[v34]
                  : KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                                     *(unsigned __int8 *)(v35 + 208),
                                                     *(unsigned __int8 *)(v35 + 209),
                                                     v31)];
              if ( KiHeteroScanQueueForPreemptionSwapTarget(*(_QWORD *)(v36 + 36424), v35, a2, v31, (__int64)&v37) )
                return 1LL;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
