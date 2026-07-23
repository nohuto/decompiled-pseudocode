/*
 * XREFs of MiCanPageMove @ 0x14033FB90
 * Callers:
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiTradeTransitionPage @ 0x14033F5E8 (MiTradeTransitionPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
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
    if ( qword_140E2DCC0 && (v1 & 0x10) == 0 )
      v1 &= ~qword_140E2DCC0;
    v2 = v1 >> 16;
    v3 = *(_QWORD *)v2;
    if ( v2 != *(_QWORD *)v2 + 128LL && (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
      return (*(_DWORD *)(v3 + 92) & 0x20000) == 0;
    return 1LL;
  }
  return 0LL;
}
