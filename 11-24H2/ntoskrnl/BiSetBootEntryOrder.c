/*
 * XREFs of BiSetBootEntryOrder @ 0x1409A7FB8
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140815254 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140815D18 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x140AADFCC (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x1406AA670 (ZwSetBootEntryOrder.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409A7288 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409A72E0 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  NTSTATUS v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v4 >= 0 )
  {
    v4 = ZwSetBootEntryOrder(Ids, Count);
    if ( v4 < 0 )
      BiLogMessage();
    BiReleasePrivilege((unsigned int *)&v6);
  }
  return (unsigned int)v4;
}
