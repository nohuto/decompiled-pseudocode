/*
 * XREFs of MiReservePageFileSpace @ 0x1402471FC
 * Callers:
 *     MiCheckReservePageFileSpace @ 0x1402480F0 (MiCheckReservePageFileSpace.c)
 *     MiFillNoReservationCluster @ 0x14040D3B0 (MiFillNoReservationCluster.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiDecrementModifiedWriteCount @ 0x14035A754 (MiDecrementModifiedWriteCount.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiFindFreePageFileSpace @ 0x1403D9AC0 (MiFindFreePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14040EC84 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiGetPageFileSectionForReservation @ 0x140492424 (MiGetPageFileSectionForReservation.c)
 */

char __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
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
  __int64 v31; // r8
  unsigned __int64 v32; // r9
  int FreePageFileSpace; // edx
  unsigned __int64 v34; // rsi
  unsigned int v35; // edi
  unsigned __int64 i; // r13
  int v37; // eax
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rdx
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
  _QWORD *updated; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v52; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-38h] BYREF
  __int128 v54; // [rsp+40h] [rbp-30h] BYREF
  __int128 v55; // [rsp+50h] [rbp-20h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  unsigned int v59; // [rsp+C8h] [rbp+58h]

  LOBYTE(v3) = a1;
  v5 = a2;
  v56 = 0LL;
  v54 = 0LL;
  v6 = *(_DWORD *)(a1 + 920);
  v7 = v6 & 0x3FF;
  LODWORD(updated) = v6;
  v55 = 0LL;
  if ( v7 < 0x10 )
    return (char)v3;
  v50 = 0;
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
        return (char)v3;
      v14 = *(_DWORD *)(v8 + 48);
      LOBYTE(v3) = (v14 & 0x200004) == 0x200000;
      if ( (((v14 & 0x70) == 0) & (unsigned __int8)v3) == 0
        || (v14 & 0x200000) != 0 && ((v14 & 0x800000) != 0 || (v14 & 0x180000u) >= 0x100000) )
      {
        return (char)v3;
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
    LODWORD(v3) = MiGetPageFileSectionForReservation(a2, &v54, 1LL);
    if ( !(_DWORD)v3 )
      return (char)v3;
    v9 = *((_QWORD *)&v55 + 1);
    v50 = 1;
    v10 = v55;
  }
  v18 = ((__int64)(v9 - v10) >> 3) + 1;
  if ( v18 > v7 )
  {
    v41 = (__int64)(v9 - v5) >> 3;
    v42 = (__int64)(v5 - v10) >> 3;
    v43 = v18 - v7;
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
  v19 = a3 != 0 ? 129 : 1;
  if ( v8 && (*(_DWORD *)(v8 + 48) & 0x2000000) != 0 )
    v19 |= (*(_DWORD *)(v8 + 48) & 0xF80 | 0x40u) >> 5;
  v20 = 0LL;
  v21 = v5 - 8;
  v59 = 0;
  v52 = 0LL;
  if ( v5 - 8 >= v10 )
  {
    v22 = 0;
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v21, v19, &v52) )
        break;
      ++v22;
      v21 -= 8LL;
    }
    while ( v21 >= v10 );
    v20 = v52;
    v5 = a2;
    v59 = v22;
    v6 = (int)updated;
  }
  v23 = 0LL;
  v24 = v5 + 8;
  v25 = 0LL;
  v53 = 0LL;
  if ( v5 + 8 <= v9 )
  {
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v24, v19, &v53) )
        break;
      v25 = (unsigned int)(v25 + 1);
      v24 += 8LL;
    }
    while ( v24 <= v9 );
    v23 = v53;
    v5 = a2;
  }
  v26 = 0;
  v27 = v25 + v59 + 1;
  if ( v20 )
  {
    v28 = v20;
    if ( qword_140E2D940 && (v20 & 0x10) == 0 )
      v28 = v20 & ~qword_140E2D940;
    v23 = v20;
    v29 = HIDWORD(v28) + 1;
LABEL_34:
    updated = (_QWORD *)MiUpdatePageFileHighInPte(v23, v29);
    goto LABEL_35;
  }
  if ( v23 )
  {
    v45 = v23;
    v46 = v23;
    if ( qword_140E2D940 && (v23 & 0x10) == 0 )
      v45 = v23 & ~qword_140E2D940;
    if ( v27 < HIDWORD(v45) )
    {
      if ( qword_140E2D940 && (v23 & 0x10) == 0 )
        v46 = ~qword_140E2D940 & v23;
      v29 = HIDWORD(v46) - v27;
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
  FreePageFileSpace = MiFindFreePageFileSpace(a1, &updated, v27, v26 | 1u);
  if ( FreePageFileSpace != v27 )
  {
    LOBYTE(v3) = _InterlockedCompareExchange(
                   (volatile signed __int32 *)(a1 + 920),
                   FreePageFileSpace ^ (FreePageFileSpace ^ v6) & 0xFFFFFC00,
                   v6);
    if ( !FreePageFileSpace )
      goto LABEL_48;
    v40 = v27 - FreePageFileSpace;
    if ( (unsigned int)v25 < v40 )
    {
      v48 = v40 - v25;
      v25 = 0LL;
      v59 -= v48;
    }
    else
    {
      v25 = (unsigned int)v25 - v40;
    }
  }
  v34 = v5 + 8 * v25;
  v3 = (_QWORD *)(8LL * v59);
  v35 = v19 & 0xFFFFFFFE;
  for ( i = v5 - (_QWORD)v3; i <= v34; i += 8LL )
  {
    v37 = MiReservePageFileSpaceForPage(v30, i, v35, &updated);
    v38 = (unsigned __int64)updated;
    if ( !v37 )
      MiReleasePageFileInfo(a1, (unsigned __int64)updated, 1);
    v39 = v38;
    if ( qword_140E2D940 && (v38 & 0x10) == 0 )
      v39 = v38 & ~qword_140E2D940;
    v3 = (_QWORD *)MiUpdatePageFileHighInPte(v38, HIDWORD(v39) + 1);
    v30 = a1;
    updated = v3;
  }
LABEL_48:
  if ( v50 )
  {
    if ( *((_QWORD *)&v54 + 1) )
      MiUnlockProtoPoolPage(*((ULONG_PTR *)&v54 + 1), v56, v31, v32);
    v3 = (_QWORD *)MiDecrementModifiedWriteCount(v54, 0LL);
    if ( v3 )
      LOBYTE(v3) = (unsigned __int8)MiReleaseControlAreaWaiters(v3);
  }
  return (char)v3;
}
