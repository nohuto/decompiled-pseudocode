/*
 * XREFs of IopMarkPagesForLoadedDriverInformation @ 0x14059E01C
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14059D638 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403D7CB0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopMarkPagesForLoadedDriverInformation(__int64 a1)
{
  __int64 result; // rax
  int v3; // edi
  PVOID *i; // rbx
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rax
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  result = MmAddRangeToCrashDump(a1, &PsLoadedModuleList, 16LL);
  v3 = result;
  if ( (int)result >= 0 )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      result = MmAddRangeToCrashDump(a1, i, 160LL);
      if ( (int)result < 0 )
        return result;
      result = MmAddRangeToCrashDump(a1, i[12], *((unsigned __int16 *)i + 44));
      if ( (int)result < 0 )
        return result;
      result = MmAddRangeToCrashDump(a1, i[10], *((unsigned __int16 *)i + 36));
      if ( (int)result < 0 )
        return result;
      result = MmAddRangeToCrashDump(a1, i[6], *((unsigned int *)i + 16));
      v3 = result;
      if ( (int)result < 0 )
        return result;
      LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress((__int64)i, (int *)&v6);
      if ( LoadedModuleImageAdditionalTablesAddress )
      {
        v3 = MmAddRangeToCrashDump(a1, LoadedModuleImageAdditionalTablesAddress, v6);
        if ( v3 < 0 )
          v3 = 0;
      }
    }
    return (unsigned int)v3;
  }
  return result;
}
