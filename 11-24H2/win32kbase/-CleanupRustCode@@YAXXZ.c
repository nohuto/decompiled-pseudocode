/*
 * XREFs of ?CleanupRustCode@@YAXXZ @ 0x14019F210
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 * Callees:
 *     <none>
 */

void CleanupRustCode(void)
{
  if ( !(unsigned int)PsGetCurrentProcessSessionId() )
  {
    if ( WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      ExFreePoolWithTag(WPP_MAIN_CB.Dpc.SystemArgument2, 0);
      WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
    }
    WPP_MAIN_CB.Dpc.SystemArgument1 = 0LL;
  }
}
