/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x1403A35A0
 * Callers:
 *     PpmParkReportMask @ 0x1403A3480 (PpmParkReportMask.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x14048B680 (KiModifySystemAllowedCpuSetsWithLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8 (KiUpdateGlobalCpuSetConfiguration.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

char __fastcall KeCpuSetReportParkedProcessors(_QWORD *a1)
{
  unsigned int v1; // r12d
  unsigned __int16 v2; // bx
  int v3; // eax
  unsigned __int16 v4; // si
  int v5; // edi
  unsigned __int64 v6; // r14
  __int64 v7; // r10
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  int v22; // edi
  __int64 v23; // rcx
  unsigned __int64 v24; // r8
  __int64 v25; // r8
  unsigned __int64 v26; // r8
  __int64 v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r11
  int v30; // [rsp+20h] [rbp-E0h]
  unsigned int v31; // [rsp+24h] [rbp-DCh]
  _QWORD *v32; // [rsp+28h] [rbp-D8h] BYREF
  int v33; // [rsp+30h] [rbp-D0h]
  int v34; // [rsp+34h] [rbp-CCh]
  int v35; // [rsp+38h] [rbp-C8h]
  __int64 v36; // [rsp+40h] [rbp-C0h]
  _QWORD v37[32]; // [rsp+50h] [rbp-B0h]

  v1 = (unsigned __int16)KiActiveGroups;
  v31 = (unsigned __int16)KiActiveGroups;
  v32 = a1;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  v2 = 0;
  if ( a1 )
  {
    KxAcquireSpinLock(&KiCpuSetLock);
    a1 = v32;
  }
  v30 = 0;
  v3 = 0;
  v4 = 0;
  if ( v1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = KeActiveProcessors.Bitmap[v4];
      if ( a1 )
      {
        if ( v4 >= *(_WORD *)a1 )
          v7 = 0LL;
        else
          v7 = a1[v4 + 1];
        v8 = v6 ^ v7;
        v37[v4] = v8;
        if ( KiNonParkedCpuSets[v4] == v8 )
          goto LABEL_31;
      }
      else
      {
        v8 = KiNonParkedCpuSets[v4];
        v37[v4] = v8;
      }
      v30 = 1;
      v9 = v6 & v8;
      v3 = 1;
      v10 = v6 ^ v6 & v8;
      if ( (v6 & v8) != 0 )
      {
        do
        {
          _BitScanForward64(&v15, v9);
          v33 = v15;
          v9 ^= 1LL << v15;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v5 << 6) + v15)) = 1LL << v15;
        }
        while ( v9 );
        v1 = v31;
        v3 = 1;
      }
      if ( !v10 )
        goto LABEL_11;
      v16 = *((_QWORD *)&unk_140FC8868 + 4 * v4);
      v17 = v16 & -(__int64)((v8 & (v6 ^ v16)) != 0 && (v8 & v16) != 0);
      v18 = (v6 ^ v16) & -(__int64)((v8 & (v6 ^ v16)) != 0 && (v8 & v16) != 0);
      v36 = v18;
      v19 = KiSystemAllowedCpuSets[2 * v4] ^ v6;
      v20 = v19 & v8;
      if ( !v19 || !v20 )
        break;
      v26 = v10 & v19;
      v10 ^= v26;
      if ( v26 )
      {
        v27 = v36;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v28, v26);
          v29 = v20;
          v26 &= ~(1LL << v28);
          v34 = v28;
          if ( _bittest64(&v17, (unsigned int)v28) )
          {
            if ( (v20 & v17) != 0 )
              v29 = v20 & v17;
          }
          else if ( (v20 & v27) != 0 )
          {
            v29 = v20 & v27;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v5 << 6) + v28)) = v29;
        }
        while ( v26 );
        v1 = v31;
        v18 = v36;
      }
      if ( v10 )
        break;
LABEL_31:
      v3 = v30;
LABEL_11:
      a1 = v32;
      v5 = ++v4;
      if ( v4 >= v1 )
        goto LABEL_12;
    }
    v21 = v6 & ~v20;
    if ( (v8 & v21) == 0 )
      v21 = v6;
    v22 = v5 << 6;
    while ( 1 )
    {
      _BitScanForward64((unsigned __int64 *)&v23, v10);
      v24 = v21;
      v10 &= ~(1LL << v23);
      v35 = v23;
      if ( _bittest64(&v17, (unsigned int)v23) )
        break;
      if ( (v8 & v18 & v21) != 0 )
      {
        v25 = v18;
LABEL_29:
        v24 = v21 & v25;
      }
LABEL_30:
      *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v22 + v23)) = v24;
      if ( !v10 )
        goto LABEL_31;
    }
    if ( (v8 & v17 & v21) == 0 )
      goto LABEL_30;
    v25 = v17;
    goto LABEL_29;
  }
LABEL_12:
  v32 = 0LL;
  if ( !v3 )
    goto LABEL_19;
  _m_prefetchw(&KiCpuSetSequence);
  v11 = KiCpuSetSequence;
  while ( (v11 & 1) != 0 )
  {
    v11 = KiCpuSetSequence;
LABEL_33:
    _mm_pause();
  }
  v12 = v11;
  v11 = _InterlockedCompareExchange64(&KiCpuSetSequence, v11 + 1, v11);
  if ( v12 != v11 )
    goto LABEL_33;
  if ( v1 )
  {
    do
    {
      v13 = v2++;
      KiNonParkedCpuSets[v13] = v37[v13];
    }
    while ( v2 < v1 );
  }
  memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
  ++KiCpuSetSequence;
  KiUpdateGlobalCpuSetConfiguration(&v32);
LABEL_19:
  KxReleaseSpinLock((volatile signed __int64 *)&KiCpuSetLock);
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v32, 2u);
}
