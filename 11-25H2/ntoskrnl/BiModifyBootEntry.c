/*
 * XREFs of BiModifyBootEntry @ 0x1408059F4
 * Callers:
 *     BiUpdateEfiEntry @ 0x140A25220 (BiUpdateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x14069D520 (ZwModifyBootEntry.c)
 *     BiReleasePrivilege @ 0x140A26700 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140A26758 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 */

__int64 __fastcall BiModifyBootEntry(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v3 = BiAcquirePrivilege(22LL, &v6);
  if ( v3 >= 0 )
  {
    v4 = ZwModifyBootEntry(a1, v2);
    v3 = v4;
    if ( v4 < 0 )
      BiLogMessage(4LL, L"Failed to modify boot entry 0x%x. Status: %x", *(unsigned int *)(a1 + 8), (unsigned int)v4);
    BiReleasePrivilege(&v6);
  }
  return (unsigned int)v3;
}
