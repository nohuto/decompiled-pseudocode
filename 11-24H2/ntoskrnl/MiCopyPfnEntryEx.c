/*
 * XREFs of MiCopyPfnEntryEx @ 0x140251B90
 * Callers:
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiSwapHardFaultPage @ 0x14038DB8C (MiSwapHardFaultPage.c)
 *     MiReplacePageTablePage @ 0x1403F2DE8 (MiReplacePageTablePage.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPageNoDpc @ 0x1404221A4 (MiSwapStackPageNoDpc.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiSwitchKstackPages @ 0x140676734 (MiSwitchKstackPages.c)
 *     MiTradeBootImagePage @ 0x140C5DD20 (MiTradeBootImagePage.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     MiPfnIsActivePageTable @ 0x140251DBC (MiPfnIsActivePageTable.c)
 *     MiSetNonResidentPteHeat @ 0x140251DF0 (MiSetNonResidentPteHeat.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 */

__int128 *__fastcall MiCopyPfnEntryEx(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  __int128 *result; // rax
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rdx
  unsigned int IsFreeZeroPfnCold; // eax
  __int64 v16; // rax
  __int128 v17; // [rsp+20h] [rbp-39h] BYREF
  __int128 v18; // [rsp+30h] [rbp-29h] BYREF
  __int128 v19; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20; // [rsp+50h] [rbp-9h]
  __int128 v21; // [rsp+58h] [rbp-1h]
  __int128 v22; // [rsp+68h] [rbp+Fh]
  signed __int64 v23; // [rsp+78h] [rbp+1Fh]
  __int128 v24; // [rsp+80h] [rbp+27h]
  __int128 v25; // [rsp+90h] [rbp+37h]
  __int128 v26; // [rsp+A0h] [rbp+47h]
  int v27; // [rsp+D0h] [rbp+77h]

  v3 = 6LL;
  v17 = 0LL;
  v5 = (_QWORD *)a2;
  v6 = 6LL;
  v18 = 0LL;
  v19 = 0LL;
  do
  {
    *(_QWORD *)((char *)v5 + (_QWORD)&v17 - a2) = *v5;
    ++v5;
    --v6;
  }
  while ( v6 );
  BYTE3(v19) = BYTE3(v19) & 0x3F | HIBYTE(*(_DWORD *)(a1 + 32)) & 0x40;
  if ( ((*((_QWORD *)&v19 + 1) >> 60) & 7) == 3 )
  {
    v12 = *((_QWORD *)&v19 + 1);
    v20 = 0LL;
    v23 = *((_QWORD *)&v19 + 1);
    v5 = (_QWORD *)0x8FFFFFFFFFFFFFFFLL;
    v21 = 0LL;
    v22 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v13 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)&v19 + 1,
            *((_QWORD *)&v19 + 1) & 0x8FFFFFFFFFFFFFFFuLL,
            *((signed __int64 *)&v19 + 1));
    *((_QWORD *)&v26 + 1) = v13;
    if ( v12 != v13 )
    {
      do
      {
        v23 = v13;
        v14 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&v19 + 1, v13 & 0x8FFFFFFFFFFFFFFFuLL, v13);
        *((_QWORD *)&v26 + 1) = v13;
      }
      while ( v14 != v13 );
    }
  }
  v27 = v19;
  BYTE2(v27) = HIWORD(*(_DWORD *)(a1 + 32)) ^ (HIWORD(*(_DWORD *)(a1 + 32)) ^ BYTE2(v19)) & 0x3F;
  LODWORD(v19) = v27;
  v7 = (unsigned __int64)(unsigned __int16)(*(_QWORD *)(a1 + 40) >> 43) << 43;
  v8 = v7 ^ (v7 ^ *((_QWORD *)&v19 + 1)) & 0xFFE007FFFFFFFFFFuLL;
  v9 = 1023LL;
  *((_QWORD *)&v19 + 1) = v8;
  if ( (((unsigned __int16)(*(_QWORD *)(a1 + 40) >> 43) ^ (unsigned __int16)(*(_QWORD *)(a2 + 40) >> 43)) & 0x3FF) != 0
    && (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
    && (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
    && (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
  {
    *(_QWORD *)&v18 = MiUpdatePageFileHighInPte(v18, 0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  }
  if ( (BYTE2(v19) & 7) != 6 )
  {
    v9 = 0xC7FFFFFFFFFFFFFFuLL;
    *((_QWORD *)&v18 + 1) = (*(_QWORD *)(a1 + 24) >> 59 << 59) ^ ((*(_QWORD *)(a1 + 24) >> 59 << 59) ^ *((_QWORD *)&v18 + 1)) & 0xC7FFFFFFFFFFFFFFuLL;
  }
  if ( !(unsigned int)MiPfnIsActivePageTable(&v17, v9, v5) )
  {
    if ( (*(_BYTE *)(a1 + 34) & 2) != 0 || (*(_BYTE *)(a1 + 34) & 7) == 4 )
    {
      v16 = *(_QWORD *)(a1 + 16) >> 3;
      if ( (*(_QWORD *)(a1 + 16) & 0x400LL) != 0 )
        LOBYTE(v16) = *(_QWORD *)(a1 + 16) >> 11;
      IsFreeZeroPfnCold = v16 & 1;
    }
    else
    {
      IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1);
    }
    MiSetNonResidentPteHeat(&v18, IsFreeZeroPfnCold);
  }
  v10 = a1 - (_QWORD)&v17;
  result = &v17;
  do
  {
    *(_QWORD *)((char *)result + v10) = *(_QWORD *)result;
    result = (__int128 *)((char *)result + 8);
    --v3;
  }
  while ( v3 );
  return result;
}
