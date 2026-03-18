/*
 * XREFs of CmpMachineHiveCachePopulateEntry @ 0x1407D8FA8
 * Callers:
 *     CmpBuildMachineHiveCache @ 0x1407D8C94 (CmpBuildMachineHiveCache.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407E54D8 (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407E5854 (CmpHiveCachePopulateHiveEntry.c)
 */

__int64 __fastcall CmpMachineHiveCachePopulateEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  if ( a1 && a2 )
  {
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v7);
    *(_BYTE *)(a1 + 824) = *(_BYTE *)(v3 + 59);
    v4 = CmpHiveCachePopulateHiveEntry(a1, (int)v3 + 168, *(_DWORD *)(v3 + 32), (int)a1 + 824, a1 + 824, a1 + 392);
    v5 = v4;
    if ( v4 < 0 )
    {
      SetFailureLocation(a1 + 392, 0, 51, v4, 16);
      CmpHiveCacheEntryCleanup(a1, 1LL);
    }
  }
  else
  {
    v5 = -1073741811;
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v7);
  return v5;
}
