/*
 * XREFs of MiProcessWorkingSets @ 0x1402F2D10
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnWsToExpansionList @ 0x1402F26D0 (MiReturnWsToExpansionList.c)
 *     MiLogProcessWorkingSetsStop @ 0x1402F2C7C (MiLogProcessWorkingSetsStop.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1402F33B8 (MiCheckSystemTrimEndCriteria.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 *     MiLogPartitionState @ 0x1402F3958 (MiLogPartitionState.c)
 *     MiLogProcessWorkingSetsStart @ 0x1402F3A90 (MiLogProcessWorkingSetsStart.c)
 *     MiComputeAgingPercent @ 0x1402F3B30 (MiComputeAgingPercent.c)
 *     MiComputeSystemTrimCriteria @ 0x1402F3C60 (MiComputeSystemTrimCriteria.c)
 *     MiDrainZeroLookasides @ 0x1402FD2B0 (MiDrainZeroLookasides.c)
 *     MiOrderTrimList @ 0x140425554 (MiOrderTrimList.c)
 *     KeRetryOutswapProcess @ 0x1404928E0 (KeRetryOutswapProcess.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140679B10 (MiInitializeWorkingSetManagerParameters.c)
 */

void __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // r8
  KIRQL v9; // r10
  __int64 v10; // r12
  __int16 v11; // dx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // rax
  int v16; // ecx
  int v17; // eax
  char v18; // r14
  int v19; // eax
  int v20; // ecx
  _QWORD *v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // r8
  KIRQL v29; // al
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // r9
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-48h]
  int v42; // [rsp+24h] [rbp-44h]
  int v43; // [rsp+28h] [rbp-40h]
  KIRQL v44; // [rsp+70h] [rbp+8h]
  __int16 v45; // [rsp+80h] [rbp+18h]
  int v46; // [rsp+88h] [rbp+20h]
  __int16 v47; // [rsp+88h] [rbp+20h]
  int v48; // [rsp+88h] [rbp+20h]
  int v49; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 17600);
  v3 = 0LL;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v26 = 0LL;
    if ( KeNumberNodes )
    {
      v27 = &unk_140E37740;
      v28 = (unsigned __int16)KeNumberNodes;
      do
      {
        v26 += *v27++;
        --v28;
      }
      while ( v28 );
    }
    if ( *(_QWORD *)(a1 + 18512) <= v26 )
    {
      *(_QWORD *)(v2 + 512) = -1LL;
    }
    else if ( *(_QWORD *)(v2 + 512) != v26 )
    {
      *(_QWORD *)(v2 + 512) = v26;
      v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
      *(_BYTE *)(a1 + 12) = 1;
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v29);
    }
  }
  if ( *(_BYTE *)(a1 + 12) )
    MiInitializeWorkingSetManagerParameters(a1);
  MiLogPartitionState(a1);
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    return;
  MiComputeAgingPercent(a1);
  v6 = (unsigned int)MiComputeSystemTrimCriteria(a1, a2);
  MiLogProcessWorkingSetsStart(a1, a2, v6);
  if ( (v6 & 5) != 0 )
  {
    MiDrainZeroLookasides(a1, 0LL, 0LL, 0LL);
    *(_BYTE *)(v2 + 52) = 1;
  }
  v43 = 0;
  v42 = 0;
  if ( (v6 & 2) != 0 )
    ++*(_DWORD *)(v2 + 84);
  v7 = 0LL;
  v44 = ExAcquireSpinLockExclusive(&SpinLock);
  v9 = v44;
  if ( (v6 & 0x20) != 0 )
  {
    if ( *(_WORD *)(v2 + 274) > 0xAu )
      *(_WORD *)(v2 + 274) = 10;
    if ( *(_BYTE *)(v2 + 54) )
    {
      v33 = (_QWORD *)(a1 + 17608);
      *(_BYTE *)(v2 + 54) = 0;
      v8 = *(_QWORD **)(a1 + 17608);
      while ( v8 != v33 )
      {
        v34 = v8;
        v35 = v8;
        v8 = (_QWORD *)*v8;
        if ( v34[9] >= *(_QWORD *)(v2 + 56) )
        {
          v36 = *v35;
          if ( *(_QWORD **)(*v35 + 8LL) != v35 )
            goto LABEL_19;
          v37 = (_QWORD *)v35[1];
          if ( (_QWORD *)*v37 != v35 )
            goto LABEL_19;
          *v37 = v36;
          *(_QWORD *)(v36 + 8) = v37;
          v38 = *v33;
          if ( *(_QWORD **)(*v33 + 8LL) != v33 )
            goto LABEL_19;
          *v35 = v38;
          v35[1] = v33;
          *(_QWORD *)(v38 + 8) = v35;
          *v33 = v35;
        }
      }
    }
  }
  *(_BYTE *)(v2 + 53) = 1;
  v10 = a1 + 17608;
  do
  {
LABEL_11:
    v41 = 0;
    if ( (v6 & 1) != 0 )
    {
      v40 = MiOrderTrimList(a1, *((unsigned __int8 *)&MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F)));
      v9 = v44;
      *(_QWORD *)(a2 + 104) = v40;
    }
    v11 = ++*(_WORD *)(v2 + 272);
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 96);
    v45 = v11;
    while ( 1 )
    {
      v12 = *(_QWORD **)v10;
      if ( *(_QWORD *)v10 == v10 )
        goto LABEL_34;
      if ( v12[1] != v10 )
        goto LABEL_19;
      v13 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 )
        goto LABEL_19;
      *(_QWORD *)v10 = v13;
      v14 = (__int64)(v12 - 3);
      *(_QWORD *)(v13 + 8) = v10;
      if ( *((_WORD *)v12 + 74) == v11 )
        break;
      *v12 = 0LL;
      *(_WORD *)(v14 + 172) = v11;
      if ( (v6 & 0x20) != 0 && *(_QWORD *)(v14 + 96) < *(_QWORD *)(v2 + 56) )
      {
        v30 = *(_QWORD **)(a1 + 17616);
        if ( *v30 == v10 )
        {
          *v12 = v10;
          v12[1] = v30;
          *v30 = v12;
          *(_QWORD *)(a1 + 17616) = v12;
          goto LABEL_60;
        }
LABEL_19:
        __fastfail(3u);
      }
      if ( *(_QWORD *)(v14 + 144) > 1uLL || (*(_DWORD *)(v14 + 184) & 0xF) != 0 )
      {
        v46 = *(_DWORD *)(v14 + 184);
        BYTE1(v46) = BYTE1(v46) & 0xF9 | 2;
        *(_WORD *)(v14 + 184) = v46;
        if ( *(_BYTE *)(a2 + 2) != 2
          || *(_QWORD *)(v14 + 144) > *(_QWORD *)(v14 + 112)
          && *(_QWORD *)(v14 + 144) - *(_QWORD *)(v14 + 112) >= 0x40000uLL )
        {
          MiReleaseSpinLockExclusive(&SpinLock, v9);
          v41 = MiTrimOrAgeWorkingSet(v14, a2, (unsigned int)v6);
          if ( v41 && *(_BYTE *)(a2 + 4) == 1 )
            *(_BYTE *)(a2 + 4) = 2;
          v9 = ExAcquireSpinLockExclusive(&SpinLock);
          v44 = v9;
        }
        v16 = *(_DWORD *)(v14 + 184);
        LOBYTE(v47) = v16;
        if ( (v6 & 0x20) == 0 || *(_QWORD *)(v14 + 96) < *(_QWORD *)(v2 + 56) || *(_QWORD *)(v14 + 104) )
        {
          HIBYTE(v47) = BYTE1(v16) & 0xF9;
          *(_WORD *)(v14 + 184) = v47;
          MiReturnWsToExpansionList(v14, 0);
          v9 = v44;
        }
        else
        {
          HIBYTE(v47) = BYTE1(v16) | 6;
          *(_WORD *)(v14 + 184) = v47;
          *(_QWORD *)(v14 + 32) = v7;
          v7 = v14 + 32;
        }
        if ( v41 )
          goto LABEL_34;
LABEL_28:
        v11 = v45;
      }
      else
      {
        if ( !*(_QWORD *)(v14 + 104) )
        {
          v48 = *(_DWORD *)(v14 + 184);
          BYTE1(v48) |= 6u;
          *(_WORD *)(v14 + 184) = v48;
          MiReleaseSpinLockExclusive(&SpinLock, v9);
          KeRetryOutswapProcess(v14 - 1024);
          v44 = ExAcquireSpinLockExclusive(&SpinLock);
          v49 = *(_DWORD *)(v14 + 184);
          BYTE1(v49) &= 0xF9u;
          *(_WORD *)(v14 + 184) = v49;
          MiReturnWsToExpansionList(v14, 0);
          v9 = v44;
          goto LABEL_28;
        }
        v39 = *(_QWORD **)(a1 + 17616);
        if ( *v39 != v10 )
          goto LABEL_19;
        *v12 = v10;
        v12[1] = v39;
        *v39 = v12;
        *(_QWORD *)(a1 + 17616) = v12;
      }
    }
    v15 = *(_QWORD **)v10;
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
      goto LABEL_19;
    *v12 = v15;
    v12[1] = v10;
    v15[1] = v12;
    *(_QWORD *)v10 = v12;
    if ( (v6 & 1) == 0 )
      break;
    LOBYTE(v8) = v9;
    v17 = MiCheckSystemTrimEndCriteria(a1, a2, v8);
    v9 = v44;
  }
  while ( !v17 );
LABEL_34:
  if ( (v6 & 0x20) != 0 )
  {
LABEL_60:
    while ( v7 )
    {
      v31 = *(_DWORD *)(v7 + 152);
      v32 = v7 - 32;
      v7 = *(_QWORD *)v7;
      *(_WORD *)(v32 + 184) = v31 & 0xF9FF;
      MiReturnWsToExpansionList(v32, 1);
    }
  }
  v18 = v6 | v42;
  v42 |= v6;
  if ( v41 )
  {
    *(_BYTE *)(v2 + 53) = 0;
    if ( (v18 & 5) != 0 )
      *(_BYTE *)(v2 + 52) = 0;
  }
  else
  {
    v19 = *(_DWORD *)(v2 + 40);
    v20 = v6 & 0xFFFFFF9C | v43;
    v43 = v20;
    if ( v20 != v19 )
    {
      LODWORD(v6) = v19 ^ v20;
      if ( (((unsigned __int8)v19 ^ (unsigned __int8)v20) & 5) != 0 )
        *(_BYTE *)(v2 + 52) = 1;
      v9 = v44;
      *(_BYTE *)(a2 + 2) = 6;
      goto LABEL_11;
    }
    *(_BYTE *)(v2 + 53) = 0;
    if ( (v18 & 5) != 0 )
      *(_BYTE *)(v2 + 52) = 0;
    if ( *(_DWORD *)(v2 + 40) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v2 + 40), 0);
      KeSetEvent((PRKEVENT)v2, 0, 0);
    }
    if ( (v18 & 0x43) != 0 )
    {
      v21 = (_QWORD *)(v2 + 344);
      v22 = a2 - v2;
      v23 = 8LL;
      do
      {
        *v21 = *(_QWORD *)((char *)v21 + v22 - 336);
        ++v21;
        --v23;
      }
      while ( v23 );
      v24 = (_QWORD *)(v2 + 392);
      v25 = 2LL;
      do
      {
        v3 += *v24++;
        --v25;
      }
      while ( v25 );
      *(_QWORD *)(v2 + 336) = v3;
    }
  }
  MiReleaseSpinLockExclusive(&SpinLock, v44);
  MiLogProcessWorkingSetsStop((_QWORD *)a1);
}
