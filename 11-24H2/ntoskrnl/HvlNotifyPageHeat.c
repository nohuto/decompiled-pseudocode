/*
 * XREFs of HvlNotifyPageHeat @ 0x1406A2140
 * Callers:
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiEpfDrainCompletionQueue @ 0x1405C0A9C (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1405C0B44 (KiEpfStart.c)
 */

__int64 __fastcall HvlNotifyPageHeat(int a1, char a2, unsigned int a3, __int64 a4)
{
  int v4; // r12d
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // r15
  _QWORD *v10; // r14
  int v11; // ebx
  _QWORD *v12; // rax
  unsigned int v13; // edx
  _QWORD *v14; // rcx
  unsigned int v15; // r9d
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int16 v25; // di
  _QWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // edx
  unsigned int v30; // r14d
  unsigned __int64 *v31; // rdi
  unsigned __int64 v32; // r15
  unsigned __int8 CurrentIrql; // bl
  __int16 v34; // [rsp+2Ch] [rbp-54h]
  _QWORD *v35; // [rsp+30h] [rbp-50h]
  __int128 v36; // [rsp+38h] [rbp-48h] BYREF
  __int128 v37; // [rsp+48h] [rbp-38h]
  __int128 v38; // [rsp+58h] [rbp-28h] BYREF
  __int64 v39; // [rsp+68h] [rbp-18h]
  __int64 v40; // [rsp+70h] [rbp-10h]

  v4 = 0;
  v39 = 0LL;
  LODWORD(v40) = 0;
  *(_QWORD *)&v37 = 0LL;
  DWORD2(v37) = 0;
  v38 = 0LL;
  v36 = 0LL;
  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221225485LL;
    if ( _bittest(&HvlEnlightenments, 0x15u) )
    {
      v7 = 1LL;
      goto LABEL_8;
    }
    return 3221225659LL;
  }
  if ( (HvlEnlightenments & 0x400000) == 0 )
    return 3221225659LL;
  v7 = 0LL;
LABEL_8:
  v8 = 0;
  if ( a2 && _bittest((const signed __int32 *)&HvlpFlags, 0x15u) )
  {
    v9 = a4;
    v10 = HvlpAcquireHypercallPage((__int64)&v36, 2, 0LL, 0LL);
    v11 = 32774;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    v36 = 0LL;
    v11 = 32771;
    v37 = 0LL;
  }
  v12 = HvlpAcquireHypercallPage((__int64)&v38, 1, 0LL, 0LL);
  v13 = a3;
  v14 = v12;
  v35 = v12;
  *v12 = v7;
  do
  {
    v15 = 0;
    if ( v13 >= 0x1FF )
      v13 = 511;
    if ( v13 )
    {
      v16 = v14 + 1;
      while ( 1 )
      {
        v17 = v15 + v4;
        *v16 = 0LL;
        v18 = *(_QWORD *)(a4 + 8 * v17) & 0x3FFLL;
        v19 = (unsigned int)v17;
        *v16 = v18;
        v20 = *(_QWORD *)(a4 + 8 * v17);
        if ( (v20 & 0xC00) == 0 )
          break;
        v22 = v18 | 0x800;
        *v16 = v22;
        v23 = v22 | *(_QWORD *)(a4 + 8 * v19) & 0xFFFFFFFFFFE00000uLL;
        *v16 = v23;
        if ( (*(_QWORD *)(a4 + 8 * v19) & 0xC00LL) == 0x800 )
        {
          v21 = v23 | 0x1000;
          goto LABEL_21;
        }
LABEL_22:
        ++v15;
        ++v16;
        if ( v15 >= v13 )
          goto LABEL_23;
      }
      v21 = v18 | v20 & 0xFFFFFFFFFFFFF000uLL;
LABEL_21:
      *v16 = v21;
      goto LABEL_22;
    }
LABEL_23:
    v24 = HvcallInitiateHypercall(v11);
    v34 = WORD2(v24);
    v25 = v24;
    if ( (_WORD)v24 )
      break;
    if ( v10 && (v24 & 0xFFF00000000LL) != 0 )
    {
      v26 = v10;
      v27 = WORD2(v24) & 0xFFF;
      do
      {
        if ( *v26 )
        {
          v28 = v8++;
          *(_QWORD *)(v9 + 8 * v28) = *v26;
        }
        ++v26;
        --v27;
      }
      while ( v27 );
    }
    v14 = v35;
    v4 += v34 & 0xFFF;
    v13 = a3 - v4;
  }
  while ( a3 != v4 );
  HvlpReleaseHypercallPage((unsigned int *)&v38);
  if ( v10 )
    HvlpReleaseHypercallPage((unsigned int *)&v36);
  if ( v25 )
    v30 = HvlpHvToNtStatus(v25);
  else
    v30 = 0;
  if ( v8 )
  {
    v31 = (unsigned __int64 *)(v9 + 8LL * v8);
    do
    {
      --v31;
      --v8;
      v32 = *v31;
      ++dword_140F102BC;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v29) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v29);
      }
      KiEpfDrainCompletionQueue();
      KiEpfStart(v32);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    while ( v8 );
  }
  return v30;
}
