/*
 * XREFs of BiAddBootEntry @ 0x14081494C
 * Callers:
 *     BiCreateEfiEntry @ 0x140814FB0 (BiCreateEfiEntry.c)
 * Callees:
 *     ZwAddBootEntry @ 0x1406A7150 (ZwAddBootEntry.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409C0C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409C0C90 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiAddBootEntry(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(22LL, &v7);
  if ( v4 >= 0 )
  {
    v5 = ZwAddBootEntry(a1, a2);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to add boot entry. Status: %x", (unsigned int)v5);
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v4;
}
