/*
 * XREFs of BiSetBootEntryOrder @ 0x1409C1968
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140814B14 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408155D8 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x140AB305C (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x1406A96D0 (ZwSetBootEntryOrder.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409C0C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409C0C90 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiSetBootEntryOrder(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v4 >= 0 )
  {
    v4 = ZwSetBootEntryOrder(a1, a2);
    if ( v4 < 0 )
      BiLogMessage();
    BiReleasePrivilege((unsigned int *)&v6);
  }
  return (unsigned int)v4;
}
