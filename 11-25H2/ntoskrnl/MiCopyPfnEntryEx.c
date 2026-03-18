/*
 * XREFs of MiCopyPfnEntryEx @ 0x1402C7CF0
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiSwapHardFaultPage @ 0x1402D11D4 (MiSwapHardFaultPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPageNoDpc @ 0x1403DBFD8 (MiSwapStackPageNoDpc.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiReplacePageTablePage @ 0x14040B438 (MiReplacePageTablePage.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiSwitchKstackPages @ 0x140669B04 (MiSwitchKstackPages.c)
 *     MiTradeBootImagePage @ 0x140C4A804 (MiTradeBootImagePage.c)
 * Callees:
 *     MiPfnIsActivePageTable @ 0x1402C7F24 (MiPfnIsActivePageTable.c)
 *     MiSetNonResidentPteHeat @ 0x1402C7FD0 (MiSetNonResidentPteHeat.c)
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 */

__int128 *__fastcall MiCopyPfnEntryEx(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int128 *result; // rax
  unsigned int IsFreeZeroPfnCold; // eax
  __int64 v16; // rdx
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  __int64 v19; // rax
  __int128 v20; // [rsp+20h] [rbp-39h] BYREF
  __int128 v21; // [rsp+30h] [rbp-29h] BYREF
  __int128 v22; // [rsp+40h] [rbp-19h] BYREF
  __int64 v23; // [rsp+50h] [rbp-9h]
  __int128 v24; // [rsp+58h] [rbp-1h]
  __int128 v25; // [rsp+68h] [rbp+Fh]
  signed __int64 v26; // [rsp+78h] [rbp+1Fh]
  __int128 v27; // [rsp+80h] [rbp+27h]
  __int128 v28; // [rsp+90h] [rbp+37h]
  __int128 v29; // [rsp+A0h] [rbp+47h]
  int v30; // [rsp+D0h] [rbp+77h]

  v3 = 6LL;
  v20 = 0LL;
  v5 = (_QWORD *)a2;
  v6 = 6LL;
  v21 = 0LL;
  v22 = 0LL;
  do
  {
    *(_QWORD *)((char *)v5 + (_QWORD)&v20 - a2) = *v5;
    ++v5;
    --v6;
  }
  while ( v6 );
  BYTE3(v22) = BYTE3(v22) & 0x3F | HIBYTE(*(_DWORD *)(a1 + 32)) & 0x40;
  if ( ((*((_QWORD *)&v22 + 1) >> 60) & 7) == 3 )
  {
    v16 = *((_QWORD *)&v22 + 1);
    v23 = 0LL;
    v26 = *((_QWORD *)&v22 + 1);
    v5 = (_QWORD *)0x8FFFFFFFFFFFFFFFLL;
    v24 = 0LL;
    v25 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v17 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)&v22 + 1,
            *((_QWORD *)&v22 + 1) & 0x8FFFFFFFFFFFFFFFuLL,
            *((signed __int64 *)&v22 + 1));
    *((_QWORD *)&v29 + 1) = v17;
    if ( v16 != v17 )
    {
      do
      {
        v26 = v17;
        v18 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)&v22 + 1, v17 & 0x8FFFFFFFFFFFFFFFuLL, v17);
        *((_QWORD *)&v29 + 1) = v17;
      }
      while ( v18 != v17 );
    }
  }
  v30 = v22;
  BYTE2(v30) = HIWORD(*(_DWORD *)(a1 + 32)) ^ (HIWORD(*(_DWORD *)(a1 + 32)) ^ BYTE2(v22)) & 0x3F;
  LODWORD(v22) = v30;
  v7 = (unsigned __int64)(unsigned __int16)(*(_QWORD *)(a1 + 40) >> 43) << 43;
  v8 = v7 ^ (v7 ^ *((_QWORD *)&v22 + 1)) & 0xFFE007FFFFFFFFFFuLL;
  v9 = 1023LL;
  *((_QWORD *)&v22 + 1) = v8;
  if ( (((unsigned __int16)(*(_QWORD *)(a1 + 40) >> 43) ^ (unsigned __int16)(*(_QWORD *)(a2 + 40) >> 43)) & 0x3FF) != 0
    && (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
    && (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
    && (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
  {
    *(_QWORD *)&v21 = MiUpdatePageFileHighInPte(v21, 0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  }
  if ( (BYTE2(v22) & 7) != 6 )
  {
    v9 = 0xC7FFFFFFFFFFFFFFuLL;
    *((_QWORD *)&v21 + 1) = (*(_QWORD *)(a1 + 24) >> 59 << 59) ^ ((*(_QWORD *)(a1 + 24) >> 59 << 59) ^ *((_QWORD *)&v21 + 1)) & 0xC7FFFFFFFFFFFFFFuLL;
  }
  if ( !(unsigned int)MiPfnIsActivePageTable(&v20, v9, v5) )
  {
    if ( (*(_BYTE *)(a1 + 34) & 2) != 0 || (*(_BYTE *)(a1 + 34) & 7) == 4 )
    {
      v19 = *(_QWORD *)(a1 + 16) >> 3;
      if ( (*(_QWORD *)(a1 + 16) & 0x400LL) != 0 )
        LOBYTE(v19) = *(_QWORD *)(a1 + 16) >> 11;
      IsFreeZeroPfnCold = v19 & 1;
    }
    else
    {
      IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1, v10, v11, v12);
    }
    MiSetNonResidentPteHeat(&v21, IsFreeZeroPfnCold);
  }
  v13 = a1 - (_QWORD)&v20;
  result = &v20;
  do
  {
    *(_QWORD *)((char *)result + v13) = *(_QWORD *)result;
    result = (__int128 *)((char *)result + 8);
    --v3;
  }
  while ( v3 );
  return result;
}
