/*
 * XREFs of KiRestoreThreadIptState @ 0x1405B8CA0
 * Callers:
 *     SwapContext @ 0x1406B2B40 (SwapContext.c)
 * Callees:
 *     KiRestoreIptState @ 0x1404B8DAC (KiRestoreIptState.c)
 *     KiInitIptState @ 0x1405B8B2C (KiInitIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState(*(unsigned __int64 **)(a1 + 1112));
  else
    return KiInitIptState();
}
