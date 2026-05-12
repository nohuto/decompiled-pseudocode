/*
 * XREFs of RaDsmLedStatusToNtStatus @ 0x140089E40
 * Callers:
 *     NvmeDsmGetSupportedLedState @ 0x140087E18 (NvmeDsmGetSupportedLedState.c)
 *     RaidDsmGetLedState @ 0x14008BC30 (RaidDsmGetLedState.c)
 *     RaidDsmGetSupportedLedState @ 0x14008BCE8 (RaidDsmGetSupportedLedState.c)
 *     RaidDsmSetLedState @ 0x14008BE68 (RaidDsmSetLedState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaDsmLedStatusToNtStatus(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 0LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 3221225659LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 3221225485LL;
  v3 = v2 - 1;
  if ( v3 && (unsigned int)(v3 - 1) >= 2 )
    return 3221225473LL;
  else
    return 3221225860LL;
}
