/*
 * XREFs of MiProcessWorkingSets @ 0x140378690
 * Callers:
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 * Callees:
 *     MiDrainZeroLookasides @ 0x14022A040 (MiDrainZeroLookasides.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiComputeSystemTrimCriteria @ 0x1402D04F0 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1402D1414 (MiComputeAgingPercent.c)
 *     MiCheckSystemTrimEndCriteria @ 0x140378D38 (MiCheckSystemTrimEndCriteria.c)
 *     MiTrimOrAgeWorkingSet @ 0x140378F30 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnWsToExpansionList @ 0x1403D9400 (MiReturnWsToExpansionList.c)
 *     MiOrderTrimList @ 0x140433A4C (MiOrderTrimList.c)
 *     MiLogPartitionState @ 0x14046FD24 (MiLogPartitionState.c)
 *     MiLogProcessWorkingSetsStop @ 0x14047C900 (MiLogProcessWorkingSetsStop.c)
 *     MiLogProcessWorkingSetsStart @ 0x14047DFC8 (MiLogProcessWorkingSetsStart.c)
 *     KeRetryOutswapProcess @ 0x140497DD0 (KeRetryOutswapProcess.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140678930 (MiInitializeWorkingSetManagerParameters.c)
 */

__int64 __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r15
  _QWORD *v12; // rbx
  _QWORD *v13; // r8
  KIRQL v14; // r10
  __int64 v15; // r12
  __int16 v16; // dx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // r14
  __int64 *v20; // rax
  int v21; // ecx
  int v22; // eax
  char v23; // r14
  int v24; // eax
  int v25; // ecx
  _QWORD *v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // r8
  KIRQL v34; // al
  __int64 **v35; // rax
  int v36; // eax
  _QWORD *v37; // rcx
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // r9
  __int64 v43; // rax
  __int64 **v44; // rax
  __int64 v45; // rax
  int v46; // [rsp+20h] [rbp-48h]
  int v47; // [rsp+24h] [rbp-44h]
  int v48; // [rsp+28h] [rbp-40h]
  KIRQL v49; // [rsp+70h] [rbp+8h]
  __int16 v50; // [rsp+80h] [rbp+18h]
  int v51; // [rsp+88h] [rbp+20h]
  __int16 v52; // [rsp+88h] [rbp+20h]
  int v53; // [rsp+88h] [rbp+20h]
  int v54; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 17600);
  v3 = 0LL;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v31 = 0LL;
    if ( KeNumberNodes )
    {
      v32 = &unk_140E37600;
      v33 = (unsigned __int16)KeNumberNodes;
      do
      {
        v31 += *v32++;
        --v33;
      }
      while ( v33 );
    }
    if ( *(_QWORD *)(a1 + 18512) <= v31 )
    {
      *(_QWORD *)(v2 + 512) = -1LL;
    }
    else if ( *(_QWORD *)(v2 + 512) != v31 )
    {
      *(_QWORD *)(v2 + 512) = v31;
      v34 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
      *(_BYTE *)(a1 + 12) = 1;
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v34);
    }
  }
  if ( *(_BYTE *)(a1 + 12) )
    MiInitializeWorkingSetManagerParameters(a1);
  MiLogPartitionState(a1);
  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0x10) != 0 )
    return result;
  MiComputeAgingPercent(a1, v6, v7, v8);
  v11 = (unsigned int)MiComputeSystemTrimCriteria((_QWORD *)a1, a2, v10);
  MiLogProcessWorkingSetsStart(a1, a2, v11);
  if ( (v11 & 5) != 0 )
  {
    MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
    *(_BYTE *)(v2 + 52) = 1;
  }
  v48 = 0;
  v47 = 0;
  if ( (v11 & 2) != 0 )
    ++*(_DWORD *)(v2 + 84);
  v12 = 0LL;
  v49 = ExAcquireSpinLockExclusive(&dword_140E373C0);
  v14 = v49;
  if ( (v11 & 0x20) != 0 )
  {
    if ( *(_WORD *)(v2 + 274) > 0xAu )
      *(_WORD *)(v2 + 274) = 10;
    if ( *(_BYTE *)(v2 + 54) )
    {
      v38 = (_QWORD *)(a1 + 17608);
      *(_BYTE *)(v2 + 54) = 0;
      v13 = *(_QWORD **)(a1 + 17608);
      while ( v13 != v38 )
      {
        v39 = v13;
        v40 = v13;
        v13 = (_QWORD *)*v13;
        if ( v39[9] >= *(_QWORD *)(v2 + 56) )
        {
          v41 = *v40;
          if ( *(_QWORD **)(*v40 + 8LL) != v40 )
            goto LABEL_19;
          v42 = (_QWORD *)v40[1];
          if ( (_QWORD *)*v42 != v40 )
            goto LABEL_19;
          *v42 = v41;
          *(_QWORD *)(v41 + 8) = v42;
          v43 = *v38;
          if ( *(_QWORD **)(*v38 + 8LL) != v38 )
            goto LABEL_19;
          *v40 = v43;
          v40[1] = v38;
          *(_QWORD *)(v43 + 8) = v40;
          *v38 = v40;
        }
      }
    }
  }
  *(_BYTE *)(v2 + 53) = 1;
  v15 = a1 + 17608;
  do
  {
LABEL_11:
    v46 = 0;
    if ( (v11 & 1) != 0 )
    {
      v45 = MiOrderTrimList(a1, *((unsigned __int8 *)&MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F)));
      v14 = v49;
      *(_QWORD *)(a2 + 104) = v45;
    }
    v16 = ++*(_WORD *)(v2 + 272);
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 96);
    v50 = v16;
    while ( 1 )
    {
      v17 = *(__int64 **)v15;
      if ( *(_QWORD *)v15 == v15 )
        goto LABEL_34;
      if ( v17[1] != v15 )
        goto LABEL_19;
      v18 = *v17;
      if ( *(__int64 **)(*v17 + 8) != v17 )
        goto LABEL_19;
      *(_QWORD *)v15 = v18;
      v19 = v17 - 3;
      *(_QWORD *)(v18 + 8) = v15;
      if ( *((_WORD *)v17 + 74) == v16 )
        break;
      *v17 = 0LL;
      *((_WORD *)v19 + 86) = v16;
      if ( (v11 & 0x20) != 0 && (unsigned __int64)v19[12] < *(_QWORD *)(v2 + 56) )
      {
        v35 = *(__int64 ***)(a1 + 17616);
        if ( *v35 == (__int64 *)v15 )
        {
          *v17 = v15;
          v17[1] = (__int64)v35;
          *v35 = v17;
          *(_QWORD *)(a1 + 17616) = v17;
          goto LABEL_60;
        }
LABEL_19:
        __fastfail(3u);
      }
      if ( (unsigned __int64)v19[18] > 1 || (v19[23] & 0xF) != 0 )
      {
        v51 = *((_DWORD *)v19 + 46);
        BYTE1(v51) = BYTE1(v51) & 0xF9 | 2;
        *((_WORD *)v19 + 92) = v51;
        if ( *(_BYTE *)(a2 + 2) != 2
          || v19[18] > (unsigned __int64)v19[14] && (unsigned __int64)(v19[18] - v19[14]) >= 0x40000 )
        {
          MiReleaseSpinLockExclusive(&dword_140E373C0, v14);
          v46 = MiTrimOrAgeWorkingSet(v19, a2, (unsigned int)v11);
          if ( v46 && *(_BYTE *)(a2 + 4) == 1 )
            *(_BYTE *)(a2 + 4) = 2;
          v14 = ExAcquireSpinLockExclusive(&dword_140E373C0);
          v49 = v14;
        }
        v21 = *((_DWORD *)v19 + 46);
        LOBYTE(v52) = v21;
        if ( (v11 & 0x20) == 0 || (unsigned __int64)v19[12] < *(_QWORD *)(v2 + 56) || v19[13] )
        {
          HIBYTE(v52) = BYTE1(v21) & 0xF9;
          *((_WORD *)v19 + 92) = v52;
          MiReturnWsToExpansionList(v19, 0LL);
          v14 = v49;
        }
        else
        {
          HIBYTE(v52) = BYTE1(v21) | 6;
          *((_WORD *)v19 + 92) = v52;
          v19[4] = (__int64)v12;
          v12 = v19 + 4;
        }
        if ( v46 )
          goto LABEL_34;
LABEL_28:
        v16 = v50;
      }
      else
      {
        if ( !v19[13] )
        {
          v53 = *((_DWORD *)v19 + 46);
          BYTE1(v53) |= 6u;
          *((_WORD *)v19 + 92) = v53;
          MiReleaseSpinLockExclusive(&dword_140E373C0, v14);
          KeRetryOutswapProcess(v19 - 128);
          v49 = ExAcquireSpinLockExclusive(&dword_140E373C0);
          v54 = *((_DWORD *)v19 + 46);
          BYTE1(v54) &= 0xF9u;
          *((_WORD *)v19 + 92) = v54;
          MiReturnWsToExpansionList(v19, 0LL);
          v14 = v49;
          goto LABEL_28;
        }
        v44 = *(__int64 ***)(a1 + 17616);
        if ( *v44 != (__int64 *)v15 )
          goto LABEL_19;
        *v17 = v15;
        v17[1] = (__int64)v44;
        *v44 = v17;
        *(_QWORD *)(a1 + 17616) = v17;
      }
    }
    v20 = *(__int64 **)v15;
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
      goto LABEL_19;
    *v17 = (__int64)v20;
    v17[1] = v15;
    v20[1] = (__int64)v17;
    *(_QWORD *)v15 = v17;
    if ( (v11 & 1) == 0 )
      break;
    LOBYTE(v13) = v14;
    v22 = MiCheckSystemTrimEndCriteria(a1, a2, v13);
    v14 = v49;
  }
  while ( !v22 );
LABEL_34:
  if ( (v11 & 0x20) != 0 )
  {
LABEL_60:
    while ( v12 )
    {
      v36 = *((_DWORD *)v12 + 38);
      v37 = v12 - 4;
      v12 = (_QWORD *)*v12;
      *((_WORD *)v37 + 92) = v36 & 0xF9FF;
      MiReturnWsToExpansionList(v37, 1LL);
    }
  }
  v23 = v11 | v47;
  v47 |= v11;
  if ( v46 )
  {
    *(_BYTE *)(v2 + 53) = 0;
    if ( (v23 & 5) != 0 )
      *(_BYTE *)(v2 + 52) = 0;
  }
  else
  {
    v24 = *(_DWORD *)(v2 + 40);
    v25 = v11 & 0xFFFFFF9C | v48;
    v48 = v25;
    if ( v25 != v24 )
    {
      LODWORD(v11) = v24 ^ v25;
      if ( (((unsigned __int8)v24 ^ (unsigned __int8)v25) & 5) != 0 )
        *(_BYTE *)(v2 + 52) = 1;
      v14 = v49;
      *(_BYTE *)(a2 + 2) = 6;
      goto LABEL_11;
    }
    *(_BYTE *)(v2 + 53) = 0;
    if ( (v23 & 5) != 0 )
      *(_BYTE *)(v2 + 52) = 0;
    if ( *(_DWORD *)(v2 + 40) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v2 + 40), 0);
      KeSetEvent((PRKEVENT)v2, 0, 0);
    }
    if ( (v23 & 0x43) != 0 )
    {
      v26 = (_QWORD *)(v2 + 344);
      v27 = a2 - v2;
      v28 = 8LL;
      do
      {
        *v26 = *(_QWORD *)((char *)v26 + v27 - 336);
        ++v26;
        --v28;
      }
      while ( v28 );
      v29 = (_QWORD *)(v2 + 392);
      v30 = 2LL;
      do
      {
        v3 += *v29++;
        --v30;
      }
      while ( v30 );
      *(_QWORD *)(v2 + 336) = v3;
    }
  }
  MiReleaseSpinLockExclusive(&dword_140E373C0, v49);
  return MiLogProcessWorkingSetsStop(a1);
}
