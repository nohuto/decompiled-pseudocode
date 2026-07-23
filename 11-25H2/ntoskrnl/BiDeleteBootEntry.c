/*
 * XREFs of BiDeleteBootEntry @ 0x140805624
 * Callers:
 *     BiExportBcdObjects @ 0x1408056A4 (BiExportBcdObjects.c)
 *     BiBindEfiEntries @ 0x140A94DD4 (BiBindEfiEntries.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x14069CC60 (ZwDeleteBootEntry.c)
 *     BiReleasePrivilege @ 0x140A26700 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140A26758 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
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
