/*
 * XREFs of KiRestoreThreadIptState @ 0x1405B62E0
 * Callers:
 *     SwapContext @ 0x1406B3AE0 (SwapContext.c)
 * Callees:
 *     KiRestoreIptState @ 0x1404B3A68 (KiRestoreIptState.c)
 *     KiInitIptState @ 0x1405B616C (KiInitIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState(*(unsigned __int64 **)(a1 + 1112));
  else
    return KiInitIptState();
}
