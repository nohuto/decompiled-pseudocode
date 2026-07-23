/*
 * XREFs of IopLiveDumpMarkLoadedModuleList @ 0x140598CDC
 * Callers:
 *     IopLiveDumpMarkRequiredDumpData @ 0x140598F30 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403D7CB0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkLoadedModuleList(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  PVOID *i; // rbx
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rax
  int v6; // eax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0;
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
      LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress((__int64)i, (int *)&v9);
      if ( LoadedModuleImageAdditionalTablesAddress )
      {
        v6 = MmAddRangeToCrashDump(a1, LoadedModuleImageAdditionalTablesAddress, v9);
        v3 = v6;
        if ( v6 < 0 )
        {
          v7[0] = 3128LL;
          v8[0] = L"LineNum";
          v7[1] = v6;
          v8[1] = L"NTStatus";
          IopLiveDumpTraceEventGeneric(L"MmAddRangeToCrashDump", 2LL, v8, v7);
          v3 = 0;
        }
      }
    }
    return v3;
  }
  return result;
}
