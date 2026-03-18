/*
 * XREFs of KiRestoreThreadIptState @ 0x1405B4EE0
 * Callers:
 *     SwapContext @ 0x1406A7870 (SwapContext.c)
 * Callees:
 *     KiRestoreIptState @ 0x1404B9AF8 (KiRestoreIptState.c)
 *     KiInitIptState @ 0x1405B4D6C (KiInitIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState(*(unsigned __int64 **)(a1 + 1112));
  else
    return KiInitIptState();
}
