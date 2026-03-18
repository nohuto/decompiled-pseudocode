/*
 * XREFs of MiProcessWorkingSets @ 0x1403C24F0
 * Callers:
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MiReturnWsToExpansionList @ 0x14027FC50 (MiReturnWsToExpansionList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiComputeSystemTrimCriteria @ 0x1403C15C4 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1403C1EA4 (MiComputeAgingPercent.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1403C2B98 (MiCheckSystemTrimEndCriteria.c)
 *     MiTrimOrAgeWorkingSet @ 0x1403C2D90 (MiTrimOrAgeWorkingSet.c)
 *     MiLogPartitionState @ 0x1403C3BC4 (MiLogPartitionState.c)
 *     MiLogProcessWorkingSetsStart @ 0x1403C3CFC (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x1403C3EF8 (MiLogProcessWorkingSetsStop.c)
 *     MiOrderTrimList @ 0x14043CA00 (MiOrderTrimList.c)
 *     MiDrainZeroLookasides @ 0x140448904 (MiDrainZeroLookasides.c)
 *     KeRetryOutswapProcess @ 0x1404983B0 (KeRetryOutswapProcess.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14066D024 (MiInitializeWorkingSetManagerParameters.c)
 */

__int64 __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  _QWORD *v9; // r8
  KIRQL v10; // r10
  __int64 v11; // r12
  __int16 v12; // dx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 *v16; // rax
  int v17; // ecx
  int v18; // eax
  char v19; // r14
  int v20; // eax
  int v21; // ecx
  _QWORD *v22; // rcx
  __int64 v23; // r13
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // r8
  KIRQL v30; // al
  __int64 **v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // r9
  __int64 v39; // rax
  __int64 **v40; // rax
  __int64 v41; // rax
  int v42; // [rsp+20h] [rbp-48h]
  int v43; // [rsp+24h] [rbp-44h]
  int v44; // [rsp+28h] [rbp-40h]
  KIRQL v45; // [rsp+70h] [rbp+8h]
  __int16 v46; // [rsp+80h] [rbp+18h]
  int v47; // [rsp+88h] [rbp+20h]
  __int16 v48; // [rsp+88h] [rbp+20h]
  int v49; // [rsp+88h] [rbp+20h]
  int v50; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 17600);
  v3 = 0LL;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v27 = 0LL;
    if ( KeNumberNodes )
    {
      v28 = qword_140E373C0;
      v29 = (unsigned __int16)KeNumberNodes;
      do
      {
        v27 += *v28++;
        --v29;
      }
      while ( v29 );
    }
    if ( *(_QWORD *)(a1 + 18512) <= v27 )
    {
      *(_QWORD *)(v2 + 512) = -1LL;
    }
    else if ( *(_QWORD *)(v2 + 512) != v27 )
    {
      *(_QWORD *)(v2 + 512) = v27;
      v30 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
      *(_BYTE *)(a1 + 12) = 1;
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v30);
    }
  }
  if ( *(_BYTE *)(a1 + 12) )
    MiInitializeWorkingSetManagerParameters(a1);
  MiLogPartitionState(a1);
  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0x10) != 0 )
    return result;
  MiComputeAgingPercent(a1);
  v7 = (unsigned int)MiComputeSystemTrimCriteria((_QWORD *)a1, a2);
  MiLogProcessWorkingSetsStart(a1, a2, v7);
  if ( (v7 & 5) != 0 )
  {
    MiDrainZeroLookasides(a1, 0LL, 0LL, 0LL);
    *(_BYTE *)(v2 + 52) = 1;
  }
  v44 = 0;
  v43 = 0;
  if ( (v7 & 2) != 0 )
    ++*(_DWORD *)(v2 + 84);
  v8 = 0LL;
  v45 = ExAcquireSpinLockExclusive(&dword_140E37180);
  v10 = v45;
  if ( (v7 & 0x20) != 0 )
  {
    if ( *(_WORD *)(v2 + 274) > 0xAu )
      *(_WORD *)(v2 + 274) = 10;
    if ( *(_BYTE *)(v2 + 54) )
    {
      v34 = (_QWORD *)(a1 + 17608);
      *(_BYTE *)(v2 + 54) = 0;
      v9 = *(_QWORD **)(a1 + 17608);
      while ( v9 != v34 )
      {
        v35 = v9;
        v36 = v9;
        v9 = (_QWORD *)*v9;
        if ( v35[9] >= *(_QWORD *)(v2 + 56) )
        {
          v37 = *v36;
          if ( *(_QWORD **)(*v36 + 8LL) != v36 )
            goto LABEL_19;
          v38 = (_QWORD *)v36[1];
          if ( (_QWORD *)*v38 != v36 )
            goto LABEL_19;
          *v38 = v37;
          *(_QWORD *)(v37 + 8) = v38;
          v39 = *v34;
          if ( *(_QWORD **)(*v34 + 8LL) != v34 )
            goto LABEL_19;
          *v36 = v39;
          v36[1] = v34;
          *(_QWORD *)(v39 + 8) = v36;
          *v34 = v36;
        }
      }
    }
  }
  *(_BYTE *)(v2 + 53) = 1;
  v11 = a1 + 17608;
  do
  {
LABEL_11:
    v42 = 0;
    if ( (v7 & 1) != 0 )
    {
      v41 = MiOrderTrimList(a1, *((unsigned __int8 *)&MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F)));
      v10 = v45;
      *(_QWORD *)(a2 + 104) = v41;
    }
    v12 = ++*(_WORD *)(v2 + 272);
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 96);
    v46 = v12;
    while ( 1 )
    {
      v13 = *(__int64 **)v11;
      if ( *(_QWORD *)v11 == v11 )
        goto LABEL_34;
      if ( v13[1] != v11 )
        goto LABEL_19;
      v14 = *v13;
      if ( *(__int64 **)(*v13 + 8) != v13 )
        goto LABEL_19;
      *(_QWORD *)v11 = v14;
      v15 = (__int64)(v13 - 3);
      *(_QWORD *)(v14 + 8) = v11;
      if ( *((_WORD *)v13 + 74) == v12 )
        break;
      *v13 = 0LL;
      *(_WORD *)(v15 + 172) = v12;
      if ( (v7 & 0x20) != 0 && *(_QWORD *)(v15 + 96) < *(_QWORD *)(v2 + 56) )
      {
        v31 = *(__int64 ***)(a1 + 17616);
        if ( *v31 == (__int64 *)v11 )
        {
          *v13 = v11;
          v13[1] = (__int64)v31;
          *v31 = v13;
          *(_QWORD *)(a1 + 17616) = v13;
          goto LABEL_60;
        }
LABEL_19:
        __fastfail(3u);
      }
      if ( *(_QWORD *)(v15 + 144) > 1uLL || (*(_DWORD *)(v15 + 184) & 0xF) != 0 )
      {
        v47 = *(_DWORD *)(v15 + 184);
        BYTE1(v47) = BYTE1(v47) & 0xF9 | 2;
        *(_WORD *)(v15 + 184) = v47;
        if ( *(_BYTE *)(a2 + 2) != 2
          || *(_QWORD *)(v15 + 144) > *(_QWORD *)(v15 + 112)
          && *(_QWORD *)(v15 + 144) - *(_QWORD *)(v15 + 112) >= 0x40000uLL )
        {
          MiReleaseSpinLockExclusive(&dword_140E37180, v10);
          v42 = MiTrimOrAgeWorkingSet(v15, a2, (unsigned int)v7);
          if ( v42 && *(_BYTE *)(a2 + 4) == 1 )
            *(_BYTE *)(a2 + 4) = 2;
          v10 = ExAcquireSpinLockExclusive(&dword_140E37180);
          v45 = v10;
        }
        v17 = *(_DWORD *)(v15 + 184);
        LOBYTE(v48) = v17;
        if ( (v7 & 0x20) == 0 || *(_QWORD *)(v15 + 96) < *(_QWORD *)(v2 + 56) || *(_QWORD *)(v15 + 104) )
        {
          HIBYTE(v48) = BYTE1(v17) & 0xF9;
          *(_WORD *)(v15 + 184) = v48;
          MiReturnWsToExpansionList(v15, 0);
          v10 = v45;
        }
        else
        {
          HIBYTE(v48) = BYTE1(v17) | 6;
          *(_WORD *)(v15 + 184) = v48;
          *(_QWORD *)(v15 + 32) = v8;
          v8 = v15 + 32;
        }
        if ( v42 )
          goto LABEL_34;
LABEL_28:
        v12 = v46;
      }
      else
      {
        if ( !*(_QWORD *)(v15 + 104) )
        {
          v49 = *(_DWORD *)(v15 + 184);
          BYTE1(v49) |= 6u;
          *(_WORD *)(v15 + 184) = v49;
          MiReleaseSpinLockExclusive(&dword_140E37180, v10);
          KeRetryOutswapProcess(v15 - 1024);
          v45 = ExAcquireSpinLockExclusive(&dword_140E37180);
          v50 = *(_DWORD *)(v15 + 184);
          BYTE1(v50) &= 0xF9u;
          *(_WORD *)(v15 + 184) = v50;
          MiReturnWsToExpansionList(v15, 0);
          v10 = v45;
          goto LABEL_28;
        }
        v40 = *(__int64 ***)(a1 + 17616);
        if ( *v40 != (__int64 *)v11 )
          goto LABEL_19;
        *v13 = v11;
        v13[1] = (__int64)v40;
        *v40 = v13;
        *(_QWORD *)(a1 + 17616) = v13;
      }
    }
    v16 = *(__int64 **)v11;
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_19;
    *v13 = (__int64)v16;
    v13[1] = v11;
    v16[1] = (__int64)v13;
    *(_QWORD *)v11 = v13;
    if ( (v7 & 1) == 0 )
      break;
    LOBYTE(v9) = v10;
    v18 = MiCheckSystemTrimEndCriteria(a1, a2, v9);
    v10 = v45;
  }
  while ( !v18 );
LABEL_34:
  if ( (v7 & 0x20) != 0 )
  {
LABEL_60:
    while ( v8 )
    {
      v32 = *(_DWORD *)(v8 + 152);
      v33 = v8 - 32;
      v8 = *(_QWORD *)v8;
      *(_WORD *)(v33 + 184) = v32 & 0xF9FF;
      MiReturnWsToExpansionList(v33, 1);
    }
  }
  v19 = v7 | v43;
  v43 |= v7;
  if ( v42 )
  {
    *(_BYTE *)(v2 + 53) = 0;
    if ( (v19 & 5) != 0 )
      *(_BYTE *)(v2 + 52) = 0;
  }
  else
  {
    v20 = *(_DWORD *)(v2 + 40);
    v21 = v7 & 0xFFFFFF9C | v44;
    v44 = v21;
    if ( v21 != v20 )
    {
      LODWORD(v7) = v20 ^ v21;
      if ( (((unsigned __int8)v20 ^ (unsigned __int8)v21) & 5) != 0 )
        *(_BYTE *)(v2 + 52) = 1;
      v10 = v45;
      *(_BYTE *)(a2 + 2) = 6;
      goto LABEL_11;
    }
    *(_BYTE *)(v2 + 53) = 0;
    if ( (v19 & 5) != 0 )
      *(_BYTE *)(v2 + 52) = 0;
    if ( *(_DWORD *)(v2 + 40) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v2 + 40), 0);
      KeSetEvent((PRKEVENT)v2, 0, 0);
    }
    if ( (v19 & 0x43) != 0 )
    {
      v22 = (_QWORD *)(v2 + 344);
      v23 = a2 - v2;
      v24 = 8LL;
      do
      {
        *v22 = *(_QWORD *)((char *)v22 + v23 - 336);
        ++v22;
        --v24;
      }
      while ( v24 );
      v25 = (_QWORD *)(v2 + 392);
      v26 = 2LL;
      do
      {
        v3 += *v25++;
        --v26;
      }
      while ( v26 );
      *(_QWORD *)(v2 + 336) = v3;
    }
  }
  MiReleaseSpinLockExclusive(&dword_140E37180, v45);
  return MiLogProcessWorkingSetsStop(a1);
}
