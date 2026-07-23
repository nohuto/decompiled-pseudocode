/*
 * XREFs of MiExclusiveInsertPfnChainInList @ 0x1403E2124
 * Callers:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 * Callees:
 *     MiPfnToStandbyLookaside @ 0x140224320 (MiPfnToStandbyLookaside.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiMarkLockedChainAsProtected @ 0x1403E23D8 (MiMarkLockedChainAsProtected.c)
 *     MiSetNextStandbyPageSecondaryNoLockAsserts @ 0x1403E2780 (MiSetNextStandbyPageSecondaryNoLockAsserts.c)
 *     MiSetPfnNodeBlinkLow @ 0x1403E2820 (MiSetPfnNodeBlinkLow.c)
 */

signed __int64 __fastcall MiExclusiveInsertPfnChainInList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  unsigned __int64 *v6; // r13
  __int64 v7; // r14
  signed __int64 result; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG_PTR v13; // rcx
  unsigned __int64 v14; // rdi
  volatile signed __int64 *v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+30h] [rbp-48h]
  __int128 v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 88);
  v5 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
  v6 = (unsigned __int64 *)(48LL * *(_QWORD *)(a1 + 24) - 0x220000000000LL);
  if ( v3 )
  {
    MiMarkLockedChainAsProtected(a1, a2, a3, a2);
    v7 = 0x3FFFFFFFFFLL;
    v10 = *(_QWORD *)(v3 + 16);
    v11 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - v9) >> 4);
    if ( qword_140E2DCC0 && (v10 & 0x10) == 0 )
      v10 &= ~qword_140E2DCC0;
    v12 = *(_QWORD *)(v3 + 40);
    *v6 = v11 ^ (v11 ^ *v6) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(v5 + 24) = v12 ^ (v12 ^ *(_QWORD *)(v5 + 24)) & 0xFFFFFF0000000000uLL;
    if ( ((v10 >> 12) & 0xFFFFFFFFFFLL) == v11 )
      *(_QWORD *)(v3 + 16) = MiMakeTransitionPte(*(_QWORD *)(a1 + 16), 4);
    else
      *(_QWORD *)(v9 + 48 * (v12 & 0xFFFFFFFFFFLL)) = *(_QWORD *)(a1 + 16) ^ (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(v9 + 48 * (v12 & 0xFFFFFFFFFFLL))) & 0xFFFFFF0000000000uLL;
    result = MiSetPfnContainingFrame(v3, *(_QWORD *)(a1 + 24));
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    if ( v7 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
    else
      *(_QWORD *)(48 * v7 - 0x220000000000LL) = *(_QWORD *)(a1 + 16) ^ (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(48 * v7 - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a2 + 24) = result;
  }
  if ( *(_DWORD *)(a1 + 12) == 2 )
  {
    v13 = *(_QWORD *)(a1 + 16);
    v19 = 9;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    MiPfnToStandbyLookaside(v13, &v19, v3, (__int64 *)&v16);
    v14 = *(_QWORD *)(v17 + 24);
    if ( v14 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(v17 + 16) = *(_QWORD *)(a1 + 16);
    else
      MiSetNextStandbyPageSecondaryNoLockAsserts(48 * v14 - 0x220000000000LL, *(_QWORD *)(a1 + 16));
    MiSetPfnNodeBlinkLow(v5, v14);
    *(_DWORD *)(v5 + 36) ^= (*(_DWORD *)(v5 + 36) ^ (v14 >> 19)) & 0x1FFFFF;
    v15 = (volatile signed __int64 *)v17;
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(a1 + 24);
    result = *(_QWORD *)a1;
    _InterlockedAdd64(v15, *(_QWORD *)a1);
  }
  if ( !v3 )
  {
    *v6 = *v6 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    result = v7 ^ (v7 ^ *(_QWORD *)(v5 + 24)) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(v5 + 24) = result;
  }
  return result;
}
