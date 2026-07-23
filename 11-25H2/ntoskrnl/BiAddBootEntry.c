/*
 * XREFs of BiAddBootEntry @ 0x140804DD4
 * Callers:
 *     BiCreateEfiEntry @ 0x140805438 (BiCreateEfiEntry.c)
 * Callees:
 *     ZwAddBootEntry @ 0x14069BE80 (ZwAddBootEntry.c)
 *     BiReleasePrivilege @ 0x140A26700 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140A26758 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 */

__int64 __fastcall BiAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(22LL, &v7);
  if ( v4 >= 0 )
  {
    v5 = ZwAddBootEntry(BootEntry, Id);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to add boot entry. Status: %x", (unsigned int)v5);
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v4;
}
