/*
 * XREFs of KiSetProcessorIdle_WithLock @ 0x1405C3754
 * Callers:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiSetProcessorIdle @ 0x140447AB0 (KiSetProcessorIdle.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiDecrementRankListMembersUnderLock @ 0x14041DC10 (KiDecrementRankListMembersUnderLock.c)
 *     KiIncrementRankListMembersUnderLock @ 0x14041DCD0 (KiIncrementRankListMembersUnderLock.c)
 */

char __fastcall KiSetProcessorIdle_WithLock(__int64 a1, int a2, char a3)
{
  char v3; // r14
  __int64 v5; // rdi
  char v6; // bl
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rax
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // bl
  __int64 v15; // rdx
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a1 + 209);
  v5 = *(_QWORD *)(a1 + 192);
  v6 = *(_BYTE *)(a1 + 35);
  v7 = *(_QWORD *)(a1 + 36448);
  v8 = 1LL << v3;
  if ( !a2 )
  {
    *(_BYTE *)(a1 + 14523) = 0;
    if ( (v6 & 1) != 0 )
      __fastfail(0x21u);
    v14 = v6 | 1;
    v17 = 0;
    *(_BYTE *)(a1 + 35) = v14;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(_QWORD *)v5 );
    }
    if ( (v14 & 0x10) == 0 )
      *(_QWORD *)(v5 + 8) &= ~(1LL << v3);
    *(_QWORD *)(v5 + 16) &= ~(1LL << v3);
    *(_QWORD *)(v5 + 24) &= ~v7;
    v15 = ~v7 & *(_QWORD *)(v5 + 40);
    if ( (v7 & ~*(_QWORD *)(v5 + 16)) == v8 )
      v15 |= v8;
    *(_QWORD *)(v5 + 40) = v15;
    *(_QWORD *)(v5 + 32) &= ~*(_QWORD *)(a1 + 36472);
    LOBYTE(v9) = KiIncrementRankListMembersUnderLock((_BYTE *)(v5 + 576), *(_QWORD *)(a1 + 36472));
    goto LABEL_29;
  }
  v9 = *(_QWORD *)(a1 + 36536);
  if ( v9 )
    *(_BYTE *)(v9 + 16) = 1;
  *(_BYTE *)(a1 + 14523) = a3;
  if ( (v6 & 1) != 0 )
  {
    v10 = v6 & 0xFE;
    v18 = 0;
    *(_BYTE *)(a1 + 35) = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)v5 );
    }
    if ( (v10 & 0x10) == 0 )
      *(_QWORD *)(v5 + 8) |= 1LL << v3;
    v11 = *(_QWORD *)(v5 + 16) | (1LL << v3);
    *(_QWORD *)(v5 + 16) = v11;
    if ( (v7 & v11) == v7 )
    {
      *(_QWORD *)(v5 + 24) |= v7;
    }
    else
    {
      v12 = v7 & ~v11;
      if ( ((v12 - 1) & v12) == 0 )
        *(_QWORD *)(v5 + 40) |= v12;
    }
    *(_QWORD *)(v5 + 40) &= ~(1LL << v3);
    v13 = *(_QWORD *)(a1 + 36472);
    if ( (*(_QWORD *)(v5 + 16) & v13) == v13 )
      *(_QWORD *)(v5 + 32) |= v13;
    LOBYTE(v9) = KiDecrementRankListMembersUnderLock((_BYTE *)(v5 + 576), *(_QWORD *)(a1 + 36472));
LABEL_29:
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  }
  return v9;
}
