/*
 * XREFs of BiSetBootEntryOrder @ 0x140A258D0
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140804F9C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140805A60 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x140AADFBC (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x14069E400 (ZwSetBootEntryOrder.c)
 *     BiReleasePrivilege @ 0x140A26700 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140A26758 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 */

__int64 __fastcall BiSetBootEntryOrder(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(22LL, &v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootEntryOrder(a1, a2);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot entry order. Status: %x", (unsigned int)v5);
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v4;
}
