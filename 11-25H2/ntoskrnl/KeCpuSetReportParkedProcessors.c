/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x14026BC00
 * Callers:
 *     PpmParkReportMask @ 0x14026BAE0 (PpmParkReportMask.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x140491940 (KiModifySystemAllowedCpuSetsWithLock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1)
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
  __int64 v14; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  int v23; // edi
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // r8
  unsigned __int64 v27; // r8
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // r11
  int v31; // [rsp+20h] [rbp-E0h]
  unsigned int v32; // [rsp+24h] [rbp-DCh]
  unsigned __int16 *v33; // [rsp+28h] [rbp-D8h] BYREF
  int v34; // [rsp+30h] [rbp-D0h]
  int v35; // [rsp+34h] [rbp-CCh]
  int v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-C0h]
  _QWORD v38[32]; // [rsp+50h] [rbp-B0h]

  v1 = (unsigned __int16)KiActiveGroups;
  v32 = (unsigned __int16)KiActiveGroups;
  v33 = a1;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  v2 = 0;
  if ( a1 )
  {
    KxAcquireSpinLock(&KiCpuSetLock);
    a1 = v33;
  }
  v31 = 0;
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
        if ( v4 >= *a1 )
          v7 = 0LL;
        else
          v7 = *(_QWORD *)&a1[4 * v4 + 4];
        v8 = v6 ^ v7;
        v38[v4] = v8;
        if ( KiNonParkedCpuSets[v4] == v8 )
          goto LABEL_31;
      }
      else
      {
        v8 = KiNonParkedCpuSets[v4];
        v38[v4] = v8;
      }
      v31 = 1;
      v9 = v6 & v8;
      v3 = 1;
      v10 = v6 ^ v6 & v8;
      if ( (v6 & v8) != 0 )
      {
        do
        {
          _BitScanForward64(&v16, v9);
          v34 = v16;
          v9 ^= 1LL << v16;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v5 << 6) + v16)) = 1LL << v16;
        }
        while ( v9 );
        v1 = v32;
        v3 = 1;
      }
      if ( !v10 )
        goto LABEL_11;
      v17 = *((_QWORD *)&unk_140FC7828 + 4 * v4);
      v18 = v17 & -(__int64)((v8 & (v6 ^ v17)) != 0 && (v8 & v17) != 0);
      v19 = (v6 ^ v17) & -(__int64)((v8 & (v6 ^ v17)) != 0 && (v8 & v17) != 0);
      v37 = v19;
      v20 = KiSystemAllowedCpuSets[2 * v4] ^ v6;
      v21 = v20 & v8;
      if ( !v20 || !v21 )
        break;
      v27 = v10 & v20;
      v10 ^= v27;
      if ( v27 )
      {
        v28 = v37;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v29, v27);
          v30 = v21;
          v27 &= ~(1LL << v29);
          v35 = v29;
          if ( _bittest64(&v18, (unsigned int)v29) )
          {
            if ( (v21 & v18) != 0 )
              v30 = v21 & v18;
          }
          else if ( (v21 & v28) != 0 )
          {
            v30 = v21 & v28;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v5 << 6) + v29)) = v30;
        }
        while ( v27 );
        v1 = v32;
        v19 = v37;
      }
      if ( v10 )
        break;
LABEL_31:
      v3 = v31;
LABEL_11:
      a1 = v33;
      v5 = ++v4;
      if ( v4 >= v1 )
        goto LABEL_12;
    }
    v22 = v6 & ~v21;
    if ( (v8 & v22) == 0 )
      v22 = v6;
    v23 = v5 << 6;
    while ( 1 )
    {
      _BitScanForward64((unsigned __int64 *)&v24, v10);
      v25 = v22;
      v10 &= ~(1LL << v24);
      v36 = v24;
      if ( _bittest64(&v18, (unsigned int)v24) )
        break;
      if ( (v8 & v19 & v22) != 0 )
      {
        v26 = v19;
LABEL_29:
        v25 = v22 & v26;
      }
LABEL_30:
      *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v23 + v24)) = v25;
      if ( !v10 )
        goto LABEL_31;
    }
    if ( (v8 & v18 & v22) == 0 )
      goto LABEL_30;
    v26 = v18;
    goto LABEL_29;
  }
LABEL_12:
  v33 = 0LL;
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
      KiNonParkedCpuSets[v13] = v38[v13];
    }
    while ( v2 < v1 );
  }
  memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
  ++KiCpuSetSequence;
  KiUpdateGlobalCpuSetConfiguration(&v33);
LABEL_19:
  KxReleaseSpinLock(&KiCpuSetLock);
  LOBYTE(v14) = 2;
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v33, v14);
}
