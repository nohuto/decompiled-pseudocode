/*
 * XREFs of BiDeleteBootEntry @ 0x1408158DC
 * Callers:
 *     BiExportBcdObjects @ 0x14081595C (BiExportBcdObjects.c)
 *     BiBindEfiEntries @ 0x140A96064 (BiBindEfiEntries.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x1406A8ED0 (ZwDeleteBootEntry.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409A7288 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409A72E0 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteBootEntry(ULONG Id)
{
  int v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  BiLogMessage(2LL, L"Deleting boot entry 0x%x", Id);
  v2 = BiAcquirePrivilege(22LL, &v5);
  if ( v2 >= 0 )
  {
    v3 = ZwDeleteBootEntry(Id);
    v2 = v3;
    if ( v3 < 0 )
      BiLogMessage(4LL, L"Failed to delete boot entry 0x%x. Status: %x", Id, (unsigned int)v3);
    BiReleasePrivilege(&v5);
  }
  return (unsigned int)v2;
}
