/*
 * XREFs of KiHeteroScanQueueForPreemptionSwapTarget @ 0x140313444
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140274F90 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14031280C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 * Callees:
 *     KiHeteroComputeThreadImportance @ 0x140312690 (KiHeteroComputeThreadImportance.c)
 *     KiHeteroIsSwapBeneficialForPerformance @ 0x1403126FC (KiHeteroIsSwapBeneficialForPerformance.c)
 *     KiFindBiasedProcessorIndex @ 0x14031274C (KiFindBiasedProcessorIndex.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall KiHeteroScanQueueForPreemptionSwapTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // r15
  unsigned int v10; // r14d
  unsigned __int64 v11; // rbx
  unsigned __int16 v12; // r8
  __int64 v13; // r12
  unsigned int v14; // r10d
  __int64 v15; // r8
  _BYTE *v16; // r15
  unsigned int v17; // ebp
  __int64 v18; // rdi
  char v20; // dl
  unsigned int v21; // ecx
  unsigned __int16 v22; // ax
  __int64 v23; // r9
  unsigned __int8 v24; // r9
  unsigned __int8 v25; // dl
  unsigned int v26; // r8d
  __int64 v27; // r10
  __int16 v28; // ax
  __int64 v29; // r9
  __int16 v30; // r11
  _BYTE *v31; // r8
  char v32; // dl
  int v33; // ecx
  unsigned int v34; // [rsp+20h] [rbp-F8h]
  int v35; // [rsp+24h] [rbp-F4h]
  _BYTE v39[128]; // [rsp+40h] [rbp-D8h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 705);
  v7 = v5;
  v8 = *(unsigned __int8 *)(a1 + 704);
  v9 = a4 & *(_QWORD *)(a1 + 712);
  v35 = *(unsigned __int8 *)(a1 + 705);
  memmove(&v39[v5 + 64], (const void *)(a1 + 576), *(unsigned __int8 *)(a1 + 704));
  memmove(&v39[v5], (const void *)(a1 + 640), v8);
  v10 = v5 + v8;
  v11 = 0LL;
  v34 = v5 + v8;
  v12 = -1;
  v13 = 0LL;
  v14 = v5;
  if ( (unsigned int)v5 < (unsigned int)v5 + v8 )
  {
    do
    {
      if ( (v9 & (1LL << v14)) != 0 )
      {
        v20 = v39[v7 + 64];
        if ( v20 >= 0 && (v20 & 0x7F) <= *(char *)a5 )
        {
          v21 = v39[v7] & 7;
          if ( v21 - 5 <= 1 || v21 <= 2 )
          {
            v22 = KiHeteroComputeThreadImportance(v21, v20 & 0x7F);
            if ( v22 <= *(_WORD *)(a5 + 18) )
            {
              v13 |= v23;
              if ( v22 < v12 )
                v12 = v22;
            }
          }
        }
      }
      ++v14;
      ++v7;
    }
    while ( v14 < v10 );
    if ( v13 )
    {
      if ( v12 == *(_WORD *)(a5 + 18) )
      {
        if ( !KiHgsPlusEnabled )
          return v11;
        v15 = a3;
        v16 = &v39[v5];
        v17 = v5;
        v18 = 0LL;
        do
        {
          if ( (v13 & (1LL << v17)) != 0 )
          {
            v24 = *(_BYTE *)(a5 + 16);
            v25 = (*v16 >> 3) & 7;
            if ( v25 != v24
              && KiHeteroIsSwapBeneficialForPerformance(
                   KiProcessorBlock[*((unsigned int *)qword_140F216A8 + 64 * *(unsigned __int16 *)(a1 + 710) + v17)],
                   v25,
                   v15,
                   v24) )
            {
              v18 |= 1LL << v17;
            }
          }
          v10 = v34;
          ++v17;
          ++v16;
        }
        while ( v17 < v34 );
        LODWORD(v5) = v35;
      }
      else
      {
        v18 = 0LL;
        v26 = v5;
        v27 = v5;
        do
        {
          if ( (v13 & (1LL << v26)) != 0 )
          {
            v28 = KiHeteroComputeThreadImportance(v39[v27] & 7, v39[v27 + 64] & 0x7F);
            if ( v28 != v30 )
              v18 |= v29;
          }
          ++v26;
          ++v27;
        }
        while ( v26 < v10 );
      }
      if ( v18 )
      {
        v31 = &v39[(unsigned int)v5 + 64];
        v32 = 63;
        do
        {
          if ( (v18 & (1LL << v5)) != 0 )
          {
            v33 = *v31 & 0x7F;
            if ( v33 >= v32 )
            {
              if ( v33 == v32 )
                v11 |= 1LL << v5;
            }
            else
            {
              v11 = 1LL << v5;
              v32 = *v31 & 0x7F;
            }
          }
          LODWORD(v5) = v5 + 1;
          ++v31;
        }
        while ( (unsigned int)v5 < v10 );
        return KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                                *(unsigned __int16 *)(a1 + 710),
                                                *(unsigned __int8 *)(a2 + 209),
                                                v11)];
      }
    }
  }
  return v11;
}
