/*
 * XREFs of KiHeteroScanQueueForPreemptionSwapTarget @ 0x1403293B4
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1402AC3E0 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14041592C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 * Callees:
 *     KiHeteroComputeThreadImportance @ 0x140329820 (KiHeteroComputeThreadImportance.c)
 *     KiHeteroIsSwapBeneficialForPerformance @ 0x14032988C (KiHeteroIsSwapBeneficialForPerformance.c)
 *     KiFindBiasedProcessorIndex @ 0x14032AD94 (KiFindBiasedProcessorIndex.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall KiHeteroScanQueueForPreemptionSwapTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r12
  unsigned int v15; // r10d
  __int64 v16; // r8
  _BYTE *v17; // r15
  unsigned int v18; // ebp
  __int64 v19; // rdi
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int64 v23; // r9
  _BYTE *v24; // r8
  char v25; // dl
  int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r10
  __int16 v29; // ax
  __int64 v30; // r9
  __int16 v31; // r11
  unsigned int v32; // [rsp+20h] [rbp-F8h]
  int v33; // [rsp+24h] [rbp-F4h]
  _BYTE v37[128]; // [rsp+40h] [rbp-D8h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 705);
  v7 = v5;
  v8 = *(unsigned __int8 *)(a1 + 704);
  v9 = a4 & *(_QWORD *)(a1 + 712);
  v33 = *(unsigned __int8 *)(a1 + 705);
  memmove(&v37[v5 + 64], (const void *)(a1 + 576), *(unsigned __int8 *)(a1 + 704));
  memmove(&v37[v5], (const void *)(a1 + 640), v8);
  v11 = v5 + v8;
  v12 = 0LL;
  v32 = v5 + v8;
  v13 = 0xFFFFLL;
  v14 = 0LL;
  v15 = v5;
  if ( (unsigned int)v5 < (unsigned int)v5 + v8 )
  {
    do
    {
      if ( (v9 & (1LL << v15)) != 0 )
      {
        v10 = (unsigned __int8)v37[v7 + 64];
        if ( (v10 & 0x80u) == 0LL && (v10 & 0x7F) <= *(char *)a5 )
        {
          v21 = v37[v7] & 7;
          if ( (unsigned int)(v21 - 5) <= 1 || (unsigned int)v21 <= 2 )
          {
            LOBYTE(v10) = v10 & 0x7F;
            v22 = KiHeteroComputeThreadImportance(v21, v10, v13);
            if ( v22 <= *(_WORD *)(a5 + 18) )
            {
              v14 |= v23;
              if ( v22 < (unsigned __int16)v13 )
                LOWORD(v13) = v22;
            }
          }
        }
      }
      ++v15;
      ++v7;
    }
    while ( v15 < v11 );
    if ( v14 )
    {
      if ( (_WORD)v13 == *(_WORD *)(a5 + 18) )
      {
        if ( !KiHgsPlusEnabled )
          return v12;
        v16 = a3;
        v17 = &v37[v5];
        v18 = v5;
        v19 = 0LL;
        do
        {
          if ( (v14 & (1LL << v18)) != 0 )
          {
            LOBYTE(v10) = (*v17 >> 3) & 7;
            if ( (_BYTE)v10 != *(_BYTE *)(a5 + 16) )
            {
              if ( (unsigned int)KiHeteroIsSwapBeneficialForPerformance(
                                   KiProcessorBlock[*((unsigned int *)qword_140F22998
                                                    + 64 * *(unsigned __int16 *)(a1 + 710)
                                                    + v18)],
                                   v10,
                                   v16) )
                v19 |= 1LL << v18;
            }
          }
          v11 = v32;
          ++v18;
          ++v17;
        }
        while ( v18 < v32 );
        LODWORD(v5) = v33;
      }
      else
      {
        v19 = 0LL;
        v27 = (unsigned int)v5;
        v28 = v5;
        do
        {
          if ( (v14 & (1LL << v27)) != 0 )
          {
            LOBYTE(v10) = v37[v28 + 64] & 0x7F;
            v29 = KiHeteroComputeThreadImportance(v37[v28] & 7, v10, v27);
            if ( v29 != v31 )
              v19 |= v30;
          }
          v27 = (unsigned int)(v27 + 1);
          ++v28;
        }
        while ( (unsigned int)v27 < v11 );
      }
      if ( v19 )
      {
        v24 = &v37[(unsigned int)v5 + 64];
        v25 = 63;
        do
        {
          if ( (v19 & (1LL << v5)) != 0 )
          {
            v26 = *v24 & 0x7F;
            if ( v26 >= v25 )
            {
              if ( v26 == v25 )
                v12 |= 1LL << v5;
            }
            else
            {
              v12 = 1LL << v5;
              v25 = *v24 & 0x7F;
            }
          }
          LODWORD(v5) = v5 + 1;
          ++v24;
        }
        while ( (unsigned int)v5 < v11 );
        return KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                                *(unsigned __int16 *)(a1 + 710),
                                                *(unsigned __int8 *)(a2 + 209),
                                                v12)];
      }
    }
  }
  return v12;
}
