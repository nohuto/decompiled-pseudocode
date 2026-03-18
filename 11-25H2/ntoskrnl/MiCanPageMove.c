/*
 * XREFs of MiCanPageMove @ 0x14022A690
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiTradeTransitionPage @ 0x14022A82C (MiTradeTransitionPage.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( *(__int64 *)(a1 + 40) >= 0 )
    return 1LL;
  v1 = *(_QWORD *)(a1 + 16);
  if ( (v1 & 0x400) == 0 )
    return 1LL;
  if ( !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
  {
    if ( qword_140E2D940 && (v1 & 0x10) == 0 )
      v1 &= ~qword_140E2D940;
    v2 = v1 >> 16;
    v3 = *(_QWORD *)v2;
    if ( v2 != *(_QWORD *)v2 + 128LL && (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
      return (*(_DWORD *)(v3 + 92) & 0x20000) == 0;
    return 1LL;
  }
  return 0LL;
}
