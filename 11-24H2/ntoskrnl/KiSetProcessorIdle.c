/*
 * XREFs of KiSetProcessorIdle @ 0x1404E10A8
 * Callers:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInterlockedDecrementRankListMembersNoFence @ 0x1404118E0 (KiInterlockedDecrementRankListMembersNoFence.c)
 *     KiInterlockedIncrementRankListMembersNoFence @ 0x140414C40 (KiInterlockedIncrementRankListMembersNoFence.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall KiSetProcessorIdle(__int64 a1, int a2, char a3)
{
  __int64 v3; // r14
  volatile signed __int64 *v5; // rdi
  char v6; // al
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // al
  char *v12; // rcx
  signed __int64 v13; // rdx
  __int64 v14; // r10
  signed __int64 v15; // r9
  __int128 v16; // rt0
  unsigned __int8 v17; // tt
  unsigned __int64 v18; // rdx
  char v19; // al
  unsigned __int64 v20; // rdx

  v3 = *(unsigned __int8 *)(a1 + 209);
  v5 = *(volatile signed __int64 **)(a1 + 192);
  v6 = *(_BYTE *)(a1 + 35);
  v8 = *(_QWORD *)(a1 + 36448);
  v9 = 1LL << *(_BYTE *)(a1 + 209);
  if ( a2 )
  {
    v10 = *(_QWORD *)(a1 + 36536);
    if ( v10 )
      *(_BYTE *)(v10 + 16) = 1;
    *(_BYTE *)(a1 + 14523) = a3;
    if ( (v6 & 1) != 0 )
    {
      v11 = v6 & 0xFE;
      *(_BYTE *)(a1 + 35) = v11;
      if ( (v11 & 0x10) == 0 )
        _InterlockedOr64(v5 + 1, v9);
      if ( v8 == v9 )
      {
        _InterlockedOr64(v5 + 2, v9);
        _InterlockedOr64(v5 + 3, v9);
        v12 = (char *)v5 + v3;
        *((_BYTE *)v5 + v3 + 512) = 0;
      }
      else
      {
        v13 = *((_QWORD *)v5 + 3);
        v14 = *((_QWORD *)v5 + 2);
        while ( 1 )
        {
          v15 = v13;
          if ( (v8 & (v9 | v14)) == v8 )
            v15 = v8 | v13;
          *(_QWORD *)&v16 = v14;
          *((_QWORD *)&v16 + 1) = v13;
          v17 = _InterlockedCompareExchange128(v5 + 2, v15, v9 | v14, (signed __int64 *)&v16);
          v13 = *((_QWORD *)&v16 + 1);
          v14 = v16;
          if ( v17 )
            break;
          _mm_pause();
        }
        KiInterlockedDecrementRankListMembersNoFence((__int64)(v5 + 64), *(_QWORD *)(a1 + 36448));
        v12 = (char *)v5 + v3;
      }
      v18 = *(_QWORD *)(a1 + 36472);
      if ( v18 == v9 )
        v12[576] = 0;
      else
        KiInterlockedDecrementRankListMembersNoFence((__int64)(v5 + 72), v18);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 14523) = 0;
    if ( (v6 & 1) != 0 )
      __fastfail(0x21u);
    v19 = v6 | 1;
    *(_BYTE *)(a1 + 35) = v19;
    if ( (v19 & 0x10) == 0 )
      _InterlockedAnd64(v5 + 1, ~v9);
    _InterlockedAnd64(v5 + 2, ~v9);
    _InterlockedAnd64(v5 + 3, ~v8);
    if ( v9 == v8 )
      *((_BYTE *)v5 + v3 + 512) = 1;
    else
      KiInterlockedIncrementRankListMembersNoFence((__int64)(v5 + 64), v8);
    v20 = *(_QWORD *)(a1 + 36472);
    if ( v9 == v20 )
      *((_BYTE *)v5 + v3 + 576) = 1;
    else
      KiInterlockedIncrementRankListMembersNoFence((__int64)(v5 + 72), v20);
  }
}
