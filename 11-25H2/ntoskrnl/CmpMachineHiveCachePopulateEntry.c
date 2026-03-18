/*
 * XREFs of CmpMachineHiveCachePopulateEntry @ 0x1407C97B0
 * Callers:
 *     CmpBuildMachineHiveCache @ 0x1407C94A4 (CmpBuildMachineHiveCache.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407D5668 (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407D59E0 (CmpHiveCachePopulateHiveEntry.c)
 */

__int64 __fastcall CmpMachineHiveCachePopulateEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( a1 && a2 )
  {
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v7);
    *(_BYTE *)(a1 + 824) = *(_BYTE *)(v3 + 59);
    v4 = CmpHiveCachePopulateHiveEntry(a1, (int)v3 + 168, *(_DWORD *)(v3 + 32), v3, a1 + 824, a1 + 392);
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
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v7);
  return v5;
}
