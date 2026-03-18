/*
 * XREFs of MiReservePageFileSpace @ 0x140368314
 * Callers:
 *     MiCheckReservePageFileSpace @ 0x140286830 (MiCheckReservePageFileSpace.c)
 *     MiFillNoReservationCluster @ 0x14036A7DC (MiFillNoReservationCluster.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiFindFreePageFileSpace @ 0x140367D88 (MiFindFreePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14036C05C (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 *     MiGetPageFileSectionForReservation @ 0x14049161C (MiGetPageFileSectionForReservation.c)
 */

char __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  signed __int32 v6; // esi
  unsigned int v7; // edi
  struct _LIST_ENTRY *Address; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // r14
  int Flink; // edx
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r12
  unsigned int v20; // esi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r12
  __int64 v23; // r15
  int v24; // r12d
  unsigned int v25; // r14d
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // rsi
  unsigned int v32; // edi
  unsigned __int64 i; // r13
  int v34; // eax
  __int64 v35; // r8
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned int v40; // r14d
  __int64 v41; // r14
  __int64 v42; // rcx
  unsigned int v43; // eax
  __int64 v44; // r14
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  int v47; // eax
  int v48; // r14d
  int v50; // [rsp+20h] [rbp-50h]
  __int64 updated; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v52; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-38h] BYREF
  __int128 v54; // [rsp+40h] [rbp-30h] BYREF
  __int128 v55; // [rsp+50h] [rbp-20h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  unsigned int v59; // [rsp+C8h] [rbp+58h]

  LOBYTE(v3) = a1;
  v4 = a3;
  v5 = a2;
  v56 = 0LL;
  v54 = 0LL;
  v6 = *(_DWORD *)(a1 + 920);
  v7 = v6 & 0x3FF;
  LODWORD(updated) = v6;
  v55 = 0LL;
  if ( v7 < 0x10 )
    return v3;
  v50 = 0;
  Address = 0LL;
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
      MiLockVadTree(1, a2, a3);
      Address = MiLocateAddress(v5 << 25 >> 16);
      LOBYTE(v3) = MiUnlockVadTree(1, 0x11u);
      if ( !Address )
        return v3;
      Flink = (int)Address[3].Flink;
      LOBYTE(v3) = (Flink & 0x200004) == 0x200000;
      if ( (((Flink & 0x70) == 0) & (unsigned __int8)v3) == 0
        || (Flink & 0x200000) != 0 && ((Flink & 0x800000) != 0 || (Flink & 0x180000u) >= 0x100000) )
      {
        return v3;
      }
      v13 = v11 & 0xFFFFFFFFFFE00000uLL;
      a3 = 0x7FFFFFFFF8LL;
      if ( v13 >= (LODWORD(Address[1].Blink) | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32)) << 12 )
        v14 = (v13 >> 9) & 0x7FFFFFFFF8LL;
      else
        v14 = 8 * ((LODWORD(Address[1].Blink) | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32)) & 0xFFFFFFFFFLL);
      v10 = v14 - 0x98000000000LL;
      v15 = v13 + 2093056;
      if ( v15 > (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) << 12 )
        v9 = 8 * ((HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) & 0xFFFFFFFFFLL)
           - 0x98000000000LL;
      else
        v9 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
  }
  else
  {
    LODWORD(v3) = MiGetPageFileSectionForReservation(a2, &v54, 1LL);
    if ( !(_DWORD)v3 )
      return v3;
    v9 = *((_QWORD *)&v55 + 1);
    v50 = 1;
    v10 = v55;
  }
  v16 = ((__int64)(v9 - v10) >> 3) + 1;
  if ( v16 > v7 )
  {
    v41 = (__int64)(v9 - v5) >> 3;
    v42 = (__int64)(v5 - v10) >> 3;
    v43 = v16 - v7;
    if ( (unsigned int)v41 < v43 )
    {
      v47 = v43 - v41;
      v44 = 0LL;
      LODWORD(v42) = v42 - v47;
    }
    else
    {
      v44 = (unsigned int)v41 - v43;
    }
    v10 = v5 - 8LL * (unsigned int)v42;
    v9 = v5 + 8 * v44;
  }
  v17 = v4 != 0 ? 129 : 1;
  if ( Address && ((__int64)Address[3].Flink & 0x2000000) != 0 )
    v17 |= (unsigned __int64)((__int64)Address[3].Flink & 0xF80 | 0x40u) >> 5;
  v18 = 0LL;
  v19 = v5 - 8;
  v59 = 0;
  v52 = 0LL;
  if ( v5 - 8 >= v10 )
  {
    v20 = 0;
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v19, v17, &v52) )
        break;
      ++v20;
      v19 -= 8LL;
    }
    while ( v19 >= v10 );
    v18 = v52;
    v5 = a2;
    v59 = v20;
    v6 = updated;
  }
  v21 = 0LL;
  v22 = v5 + 8;
  v23 = 0LL;
  v53 = 0LL;
  if ( v5 + 8 <= v9 )
  {
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v22, v17, &v53) )
        break;
      v23 = (unsigned int)(v23 + 1);
      v22 += 8LL;
    }
    while ( v22 <= v9 );
    v21 = v53;
    v5 = a2;
  }
  v24 = 0;
  v25 = v23 + v59 + 1;
  if ( v18 )
  {
    v26 = v18;
    if ( qword_140E2DB80 && (v18 & 0x10) == 0 )
      v26 = v18 & ~qword_140E2DB80;
    v21 = v18;
    v27 = HIDWORD(v26) + 1;
LABEL_34:
    updated = MiUpdatePageFileHighInPte(v21, v27, a3);
    goto LABEL_35;
  }
  if ( v21 )
  {
    a3 = qword_140E2DB80;
    v45 = v21;
    v46 = v21;
    if ( qword_140E2DB80 && (v21 & 0x10) == 0 )
      v45 = v21 & ~qword_140E2DB80;
    if ( v25 < HIDWORD(v45) )
    {
      if ( qword_140E2DB80 && (v21 & 0x10) == 0 )
      {
        a3 = ~qword_140E2DB80;
        v46 = ~qword_140E2DB80 & v21;
      }
      v27 = HIDWORD(v46) - v25;
      goto LABEL_34;
    }
  }
  updated = 0LL;
  v24 = 16;
LABEL_35:
  v28 = a1;
  LODWORD(v3) = MI_IS_PTE_IN_WS_SWAP_SET(a1, &updated);
  if ( (_DWORD)v3 )
  {
    updated = 0LL;
    v24 = 16;
  }
  if ( v25 == 1 )
  {
    if ( v24 )
      goto LABEL_48;
    LOBYTE(v24) = 64;
  }
  LODWORD(v3) = MiFindFreePageFileSpace(a1, (unsigned __int64 *)&updated, v25, v24 | 1u);
  v29 = (unsigned int)v3;
  if ( (_DWORD)v3 != v25 )
  {
    LOBYTE(v3) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 920), v3 ^ (v3 ^ v6) & 0xFFFFFC00, v6);
    if ( !(_DWORD)v29 )
      goto LABEL_48;
    v40 = v25 - v29;
    if ( (unsigned int)v23 < v40 )
    {
      v48 = v40 - v23;
      v23 = 0LL;
      v59 -= v48;
    }
    else
    {
      v23 = (unsigned int)v23 - v40;
    }
  }
  v31 = v5 + 8 * v23;
  v3 = 8LL * v59;
  v32 = v17 & 0xFFFFFFFE;
  for ( i = v5 - v3; i <= v31; i += 8LL )
  {
    v34 = MiReservePageFileSpaceForPage(v28, i, v32, &updated);
    v36 = updated;
    if ( !v34 )
      MiReleasePageFileInfo(a1, updated, 1LL);
    v37 = v36;
    if ( qword_140E2DB80 && (v36 & 0x10) == 0 )
      v37 = v36 & ~qword_140E2DB80;
    v3 = MiUpdatePageFileHighInPte(v36, HIDWORD(v37) + 1, v35);
    v28 = a1;
    updated = v3;
  }
LABEL_48:
  if ( v50 )
  {
    if ( *((_QWORD *)&v54 + 1) )
    {
      LOBYTE(v29) = v56;
      MiUnlockProtoPoolPage(*((ULONG_PTR *)&v54 + 1), v29, v30);
    }
    v3 = MiDecrementModifiedWriteCount(v54, 0LL);
    if ( v3 )
      LOBYTE(v3) = (unsigned __int8)MiReleaseControlAreaWaiters((_QWORD *)v3, v38, v39);
  }
  return v3;
}
