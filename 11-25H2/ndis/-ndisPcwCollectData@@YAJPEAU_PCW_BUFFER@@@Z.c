/*
 * XREFs of ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x140166850
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x1401667E0 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x140062270 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     NdisGroupActiveProcessorCount @ 0x1400884F0 (NdisGroupActiveProcessorCount.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisSumDataBlock@@YAXPEA_K0@Z @ 0x140166BD0 (-ndisSumDataBlock@@YAXPEA_K0@Z.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140166C90 (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPcwCollectData(PPCW_BUFFER Buffer)
{
  NTSTATUS v2; // edi
  ULONG active; // ebp
  PVOID i; // rsi
  int v5; // ebx
  struct _NDIS_PCW_PER_CPU_DATA_BLOCK *PerCpuDataForProcessor; // r9
  int v7; // r8d
  signed __int64 v8; // rdx
  unsigned __int64 *v9; // rax
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  unsigned __int64 *v15; // rcx
  __int64 v16; // r8
  ULONG v17; // r8d
  struct _NDIS_MINIPORT_BLOCK *v18; // rcx
  ULONG v19; // r8d
  struct _NDIS_MINIPORT_BLOCK *v21; // rbx
  struct _PCW_DATA v23; // [rsp+30h] [rbp-2A8h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-298h] BYREF
  unsigned __int64 v25[38]; // [rsp+50h] [rbp-288h] BYREF
  unsigned __int64 v26[38]; // [rsp+180h] [rbp-158h] BYREF

  v2 = 0;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  memset(v26, 0, sizeof(v26));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
LABEL_2:
  for ( i = ndisPcwDataBlockList; ; i = (PVOID)*((_QWORD *)i + 20) )
  {
    if ( !i )
    {
      if ( v2 >= 0 )
      {
        v23.Size = 304;
        v23.Data = v26;
        v2 = PcwAddInstance(Buffer, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE, 1u, &v23);
      }
      goto LABEL_19;
    }
    if ( v2 < 0 )
      goto LABEL_19;
    memset(v25, 0, sizeof(v25));
    v5 = 0;
    if ( active )
      break;
LABEL_14:
    v18 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)i + 22);
    if ( v18 )
    {
      if ( (v18->PcwDatapathEventMask & 0x2000000) != 0 )
      {
        if ( (unsigned __int8)ndisReferenceMiniport(v18, 0x5Eu) )
        {
          ++*((_DWORD *)i + 42);
          v21 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)i + 22);
          ExReleasePushLockExclusiveEx(&ndisPcwMutex, 0LL);
          KeLeaveCriticalRegion();
          v25[37] = ndisPcwQueryPcfMatchCount(v21);
          ndisDereferenceMiniport(v21, 0x5Eu);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
          if ( (*((_DWORD *)i + 42))-- == 1 )
          {
            ExFreePoolWithTag(i, 0);
            goto LABEL_2;
          }
        }
      }
    }
    v19 = *((_DWORD *)i + 46);
    v23.Data = v25;
    v23.Size = 304;
    v2 = PcwAddInstance(Buffer, (PCUNICODE_STRING)i + 12, v19, 1u, &v23);
    if ( v2 < 0 )
      goto LABEL_19;
    ndisSumDataBlock(v26, v25);
  }
  while ( 1 )
  {
    PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)i, v5);
    v7 = 0;
    if ( v25 > (unsigned __int64 *)PerCpuDataForProcessor + 37 || &v25[37] < (unsigned __int64 *)PerCpuDataForProcessor )
    {
      v8 = PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)&v25[2];
      v9 = &v25[2];
      v10 = 4LL;
      v7 = 32;
      do
      {
        v11 = _mm_loadu_si128((const __m128i *)v9 - 1);
        v12 = _mm_loadu_si128((const __m128i *)((char *)v9 + v8));
        v13 = _mm_loadu_si128((const __m128i *)((char *)v9 + v8 + 16));
        v9 += 8;
        *((__m128i *)v9 - 5) = _mm_add_epi64(v12, v11);
        v14 = _mm_loadu_si128((const __m128i *)((char *)v9 + v8 - 32));
        *((__m128i *)v9 - 4) = _mm_add_epi64(v13, _mm_loadu_si128((const __m128i *)v9 - 4));
        *((__m128i *)v9 - 3) = _mm_add_epi64(v14, _mm_loadu_si128((const __m128i *)v9 - 3));
        *((__m128i *)v9 - 2) = _mm_add_epi64(
                                 _mm_loadu_si128((const __m128i *)((char *)v9 + v8 - 16)),
                                 _mm_loadu_si128((const __m128i *)v9 - 2));
        --v10;
      }
      while ( v10 );
    }
    v15 = &v25[v7];
    v16 = (unsigned int)(38 - v7);
    do
    {
      *v15 += *(unsigned __int64 *)((char *)v15 + PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)v25);
      ++v15;
      --v16;
    }
    while ( v16 );
    v17 = *((_DWORD *)PerCpuDataForProcessor + 102);
    Data.Data = PerCpuDataForProcessor;
    Data.Size = 304;
    v2 = PcwAddInstance(Buffer, (PCUNICODE_STRING)PerCpuDataForProcessor + 26, v17, 1u, &Data);
    if ( v2 < 0 )
      break;
    if ( ++v5 >= active )
      goto LABEL_14;
  }
LABEL_19:
  ExReleasePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
