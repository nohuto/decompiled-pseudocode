/*
 * XREFs of MiReservePageFileSpace @ 0x140202948
 * Callers:
 *     MiCheckReservePageFileSpace @ 0x140201420 (MiCheckReservePageFileSpace.c)
 *     MiFillNoReservationCluster @ 0x1402EC57C (MiFillNoReservationCluster.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiDecrementModifiedWriteCount @ 0x140259314 (MiDecrementModifiedWriteCount.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402EDDFC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiGetPageFileSectionForReservation @ 0x14048C2E0 (MiGetPageFileSectionForReservation.c)
 */

char __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r13
  signed __int32 v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // r14
  __int64 Address; // rax
  __int64 v13; // rdx
  int v14; // edx
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  unsigned int v18; // eax
  unsigned int v19; // edi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r12
  unsigned int v22; // esi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r12
  __int64 v25; // r15
  int v26; // r12d
  unsigned int v27; // r14d
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  unsigned int v33; // edi
  unsigned __int64 i; // r13
  int v35; // eax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  unsigned int v38; // r14d
  __int64 v39; // r14
  __int64 v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // r14
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  int v45; // eax
  int v46; // r14d
  int v48; // [rsp+20h] [rbp-50h]
  __int64 updated; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v51; // [rsp+38h] [rbp-38h] BYREF
  __int128 v52; // [rsp+40h] [rbp-30h] BYREF
  __int128 v53; // [rsp+50h] [rbp-20h]
  __int64 v54; // [rsp+60h] [rbp-10h]
  unsigned int v57; // [rsp+C8h] [rbp+58h]

  LOBYTE(v3) = a1;
  v5 = a2;
  v54 = 0LL;
  v52 = 0LL;
  v6 = *(_DWORD *)(a1 + 920);
  v7 = v6 & 0x3FF;
  LODWORD(updated) = v6;
  v53 = 0LL;
  if ( v7 < 0x10 )
    return v3;
  v48 = 0;
  v8 = 0LL;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 184) & 0xF) != 0 )
    {
      v10 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v9 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    }
    else
    {
      v11 = a2 << 25 >> 16;
      MiLockVadTree(1LL);
      Address = MiLocateAddress(v5 << 25 >> 16);
      LOBYTE(v13) = 17;
      v8 = Address;
      LOBYTE(v3) = MiUnlockVadTree(1LL, v13);
      if ( !v8 )
        return v3;
      v14 = *(_DWORD *)(v8 + 48);
      LOBYTE(v3) = (v14 & 0x200004) == 0x200000;
      if ( (((v14 & 0x70) == 0) & (unsigned __int8)v3) == 0
        || (v14 & 0x200000) != 0 && ((v14 & 0x800000) != 0 || (v14 & 0x180000u) >= 0x100000) )
      {
        return v3;
      }
      v15 = v11 & 0xFFFFFFFFFFE00000uLL;
      if ( v15 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12 )
        v16 = (v15 >> 9) & 0x7FFFFFFFF8LL;
      else
        v16 = 8
            * ((*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) & 0xFFFFFFFFFLL);
      v10 = v16 - 0x98000000000LL;
      v17 = v15 + 2093056;
      if ( v17 > (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) << 12 )
        v9 = 8
           * ((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) & 0xFFFFFFFFFLL)
           - 0x98000000000LL;
      else
        v9 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
  }
  else
  {
    LODWORD(v3) = MiGetPageFileSectionForReservation(a2, &v52, 1LL);
    if ( !(_DWORD)v3 )
      return v3;
    v9 = *((_QWORD *)&v53 + 1);
    v48 = 1;
    v10 = v53;
  }
  v18 = ((__int64)(v9 - v10) >> 3) + 1;
  if ( v18 > v7 )
  {
    v39 = (__int64)(v9 - v5) >> 3;
    v40 = (__int64)(v5 - v10) >> 3;
    v41 = v18 - v7;
    if ( (unsigned int)v39 < v41 )
    {
      v45 = v41 - v39;
      v42 = 0LL;
      LODWORD(v40) = v40 - v45;
    }
    else
    {
      v42 = (unsigned int)v39 - v41;
    }
    v10 = v5 - 8LL * (unsigned int)v40;
    v9 = v5 + 8 * v42;
  }
  v19 = a3 != 0 ? 129 : 1;
  if ( v8 && (*(_DWORD *)(v8 + 48) & 0x2000000) != 0 )
    v19 |= (*(_DWORD *)(v8 + 48) & 0xF80 | 0x40u) >> 5;
  v20 = 0LL;
  v21 = v5 - 8;
  v57 = 0;
  v50 = 0LL;
  if ( v5 - 8 >= v10 )
  {
    v22 = 0;
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v21, v19, &v50) )
        break;
      ++v22;
      v21 -= 8LL;
    }
    while ( v21 >= v10 );
    v20 = v50;
    v5 = a2;
    v57 = v22;
    v6 = updated;
  }
  v23 = 0LL;
  v24 = v5 + 8;
  v25 = 0LL;
  v51 = 0LL;
  if ( v5 + 8 <= v9 )
  {
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v24, v19, &v51) )
        break;
      v25 = (unsigned int)(v25 + 1);
      v24 += 8LL;
    }
    while ( v24 <= v9 );
    v23 = v51;
    v5 = a2;
  }
  v26 = 0;
  v27 = v25 + v57 + 1;
  if ( v20 )
  {
    v28 = v20;
    if ( qword_140E2DCC0 && (v20 & 0x10) == 0 )
      v28 = v20 & ~qword_140E2DCC0;
    v23 = v20;
    v29 = HIDWORD(v28) + 1;
LABEL_34:
    updated = MiUpdatePageFileHighInPte(v23, v29);
    goto LABEL_35;
  }
  if ( v23 )
  {
    v43 = v23;
    v44 = v23;
    if ( qword_140E2DCC0 && (v23 & 0x10) == 0 )
      v43 = v23 & ~qword_140E2DCC0;
    if ( v27 < HIDWORD(v43) )
    {
      if ( qword_140E2DCC0 && (v23 & 0x10) == 0 )
        v44 = ~qword_140E2DCC0 & v23;
      v29 = HIDWORD(v44) - v27;
      goto LABEL_34;
    }
  }
  updated = 0LL;
  v26 = 16;
LABEL_35:
  v30 = a1;
  LODWORD(v3) = MI_IS_PTE_IN_WS_SWAP_SET(a1, &updated);
  if ( (_DWORD)v3 )
  {
    updated = 0LL;
    v26 = 16;
  }
  if ( v27 == 1 )
  {
    if ( v26 )
      goto LABEL_48;
    v26 = 64;
  }
  LODWORD(v3) = MiFindFreePageFileSpace(a1, &updated, v27, v26 | 1u);
  v31 = (unsigned int)v3;
  if ( (_DWORD)v3 != v27 )
  {
    LOBYTE(v3) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 920), v3 ^ (v3 ^ v6) & 0xFFFFFC00, v6);
    if ( !(_DWORD)v31 )
      goto LABEL_48;
    v38 = v27 - v31;
    if ( (unsigned int)v25 < v38 )
    {
      v46 = v38 - v25;
      v25 = 0LL;
      v57 -= v46;
    }
    else
    {
      v25 = (unsigned int)v25 - v38;
    }
  }
  v32 = v5 + 8 * v25;
  v3 = 8LL * v57;
  v33 = v19 & 0xFFFFFFFE;
  for ( i = v5 - v3; i <= v32; i += 8LL )
  {
    v35 = MiReservePageFileSpaceForPage(v30, i, v33, &updated);
    v36 = updated;
    if ( !v35 )
      MiReleasePageFileInfo(a1, updated, 1LL);
    v37 = v36;
    if ( qword_140E2DCC0 && (v36 & 0x10) == 0 )
      v37 = v36 & ~qword_140E2DCC0;
    v3 = MiUpdatePageFileHighInPte(v36, HIDWORD(v37) + 1);
    v30 = a1;
    updated = v3;
  }
LABEL_48:
  if ( v48 )
  {
    if ( *((_QWORD *)&v52 + 1) )
    {
      LOBYTE(v31) = v54;
      MiUnlockProtoPoolPage(*((_QWORD *)&v52 + 1), v31);
    }
    v3 = MiDecrementModifiedWriteCount(v52, 0LL);
    if ( v3 )
      LOBYTE(v3) = MiReleaseControlAreaWaiters(v3);
  }
  return v3;
}
